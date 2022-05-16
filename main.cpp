#include <QApplication>
#include "calculator.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Calculator window(nullptr);
    Ui::MainWindow calc;
    calc.setupUi(&window);
    window.lineEdit = calc.lineEdit;
    window.lineEdit2 = calc.lineEdit_2;
    window.lineEdit3 = calc.lineEdit_3;
    window.resize(400, 300);
    window.show();
    return QApplication::exec();
}
