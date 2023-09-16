#ifndef MAINCALC_H
#define MAINCALC_H

#include <QAbstractButton>
#include <QMainWindow>
#include <QPropertyAnimation>
#include <QVector>

#ifdef __cplusplus
extern "C" {
#endif
#include "s21_SmartCalc.h"
#ifdef __cplusplus
}
#endif

QT_BEGIN_NAMESPACE
namespace Ui {
class MainCalc;
}
QT_END_NAMESPACE

class MainCalc : public QMainWindow {
  Q_OBJECT

 public:
  MainCalc(QWidget *parent = nullptr);
  ~MainCalc();
  void from_QStr_to_string(char *str, QString qstr);
  double x, xmax, xmin, ymax, ymin;

 private slots:
  void StartLabel(QAbstractButton *button);

  void setText(QAbstractButton *button);
  void setText_function(QAbstractButton *button);
  void SetEnterX(const QString &arg1);
  void setText_AC();
  void pushButtonCalculate();

  void on_Graph_clicked();
  void animateWindowSize();

 private:
  Ui::MainCalc *ui;
  QVector<double> x_graph, y_graph;
  QPropertyAnimation *animation = nullptr;
};
#endif  // MAINCALC_H
