#include <QApplication>

#include "maincalc.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  MainCalc w;
  w.show();
  return a.exec();
}
