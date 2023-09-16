#include "maincalc.h"

#include "./ui_maincalc.h"

MainCalc::MainCalc(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainCalc) {
  ui->setupUi(this);

  ui->label->setFocus();
  this->setProperty("windowOpacity", 0.98);

  connect(ui->buttonGroup, &QButtonGroup::buttonClicked, this,
          &MainCalc::setText);
  connect(ui->buttonGroup_function, &QButtonGroup::buttonClicked, this,
          &MainCalc::setText_function);
  connect(ui->AC, &QPushButton::clicked, this, &MainCalc::setText_AC);
  connect(ui->eq, &QPushButton::clicked, this, &MainCalc::pushButtonCalculate);

  connect(ui->EnterX, &QLineEdit::textChanged, this, &MainCalc::SetEnterX);
}

MainCalc::~MainCalc() { delete ui; }

void MainCalc::StartLabel(QAbstractButton *button) {
  if (ui->label->text() == "0" && button->text() != ".") ui->label->setText("");
  if (ui->label->text() == "Error: Invalid input expression." ||
      ui->label->text() == "Error: Error in calculation.")
    ui->label->setText("");
}

void MainCalc::SetEnterX(const QString &arg1) { x = arg1.toDouble(); }

void MainCalc::pushButtonCalculate() {
  std::string inputStringStr = ui->label->text().toStdString();
  const char *inputStr = inputStringStr.c_str();

  char postfixStr[255] = {0};
  double outputStr = 0;

  if (parser(inputStr, postfixStr)) {
    ui->label->setText("Error: Invalid input expression.");
  } else {
    if (calculation(postfixStr, &outputStr, x)) {
      ui->label->setText("Error: Error in calculation.");
    } else {
      ui->label->setText(QString::number(outputStr, 'g', 16));  // x - error 1
    }
  }

  ui->EnterX->setText("");
}

void MainCalc::setText(QAbstractButton *button) {
  StartLabel(button);
  if (button->text() != "÷")
    ui->label->setText(ui->label->text() + button->text());
  else
    ui->label->setText(ui->label->text() + '/');
}

void MainCalc::setText_function(QAbstractButton *button) {
  StartLabel(button);
  ui->label->setText(ui->label->text() + button->text() + "(");
}

void MainCalc::setText_AC() {
  ui->label->setText("0");

  ui->EnterX->setText("");
  ui->Xmax->setText("");
  ui->Xmin->setText("");
  ui->Ymax->setText("");
  ui->Ymin->setText("");

  ui->label->setFocus();
}

void MainCalc::animateWindowSize() {
  if (!animation) {
    animation = new QPropertyAnimation(this, "size");
    animation->setDuration(350);

    connect(animation, &QPropertyAnimation::finished, this, [this]() {
      delete animation;
      animation = nullptr;
    });
  }

  if (animation->state() != QAbstractAnimation::Running &&
      ui->label->text() == "0") {
    if (width() == minimumWidth()) {
      animation->setStartValue(QSize(minimumWidth(), height()));
      animation->setEndValue(QSize(maximumWidth(), height()));
    } else if (width() == maximumWidth()) {
      animation->setStartValue(QSize(maximumWidth(), height()));
      animation->setEndValue(QSize(minimumWidth(), height()));
    }

    animation->start();
  }
}

void MainCalc::on_Graph_clicked() {
  animateWindowSize();

  if (width() == maximumWidth()) {
    xmax = ui->Xmax->text().toDouble();
    xmin = ui->Xmin->text().toDouble();
    ymax = ui->Ymax->text().toDouble();
    ymin = ui->Ymin->text().toDouble();

    if (ui->Xmax->text().isEmpty()) {
      xmax = 100;
    }
    if (ui->Xmin->text().isEmpty()) {
      xmin = -100;
    }
    if (ui->Ymax->text().isEmpty()) {
      ymax = 100;
    }
    if (ui->Ymin->text().isEmpty()) {
      ymin = -100;
    }

    ui->widget->xAxis->setRange(xmin, xmax);
    ui->widget->yAxis->setRange(ymin, ymax);
    ui->widget->setInteraction(QCP::iRangeDrag);
    ui->widget->setInteraction(QCP::iRangeZoom);

    std::string inputStringStr = ui->label->text().toStdString();
    const char *inputStr = inputStringStr.c_str();

    char postfixStr[255] = {0};

    if (parser(inputStr, postfixStr)) {
      ui->label->setText("Error: Invalid input expression.");
    } else {
      if ((xmin <= xmax) && (ymin <= ymax)) {
        double output = 0;

        for (double X = xmin; X <= xmax; X += 0.1) {
          x_graph.push_back(X);
          calculation(postfixStr, &output, X);
          if (ymin <= output && output <= ymax) {
            y_graph.push_back(output);
          } else {
            y_graph.push_back(qQNaN());
          }
        }

        ui->widget->addGraph();
        ui->widget->graph(0)->setData(x_graph, y_graph);
        ui->widget->replot();
        x_graph.clear();
        y_graph.clear();

      } else {
        ui->label->setText("Error: Invalid input expression.");
      }
    }
  }
}
