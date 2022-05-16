#ifndef QCALCULATOR_CALCULATOR_H
#define QCALCULATOR_CALCULATOR_H

#include <QMainWindow>
#include <QString>
#include "./ui_calculator.h"

class Calculator : public QMainWindow
{
private:
    bool isNumber(std::string str1, std::string str2) {
        for (auto &&ch: str1) {
            if (ch < '0' || ch > '9') {
                return false;
            }
        }
        for (auto &&ch: str2) {
            if (ch < '0' || ch > '9') {
                return false;
            }

        }
        return true;
    }

    Q_OBJECT
public:
    QLineEdit* lineEdit = nullptr;
    QLineEdit* lineEdit2 = nullptr;
    QLineEdit* lineEdit3 = nullptr;

    Calculator(QWidget* parent): QMainWindow(parent) {}


public slots:

    void addition(){

        if(isNumber(lineEdit->text().toStdString(), lineEdit2->text().toStdString()))
        {
            auto a = lineEdit->text().toInt();
            auto b = lineEdit2->text().toInt();
            QString result;
            result.setNum(a + b);
            lineEdit3->setText(result);
        }
        else
        {
            lineEdit3->setText("ERROR");
        }

    };

    void subtraction(){
        if(isNumber(lineEdit->text().toStdString(), lineEdit2->text().toStdString()))
        {
            auto a = lineEdit->text().toInt();
            auto b = lineEdit2->text().toInt();
            QString result;
            result.setNum(a - b);
            lineEdit3->setText(result);
        }
        else
        {
            lineEdit3->setText("ERROR");
        }
    };

    void multiplication(){
        if(isNumber(lineEdit->text().toStdString(), lineEdit2->text().toStdString()))
        {
            auto a = lineEdit->text().toInt();
            auto b = lineEdit2->text().toInt();
            QString result;
            result.setNum(a * b);
            lineEdit3->setText(result);
        }
        else
        {
            lineEdit3->setText("ERROR");
        }
    };

    void division(){
        if(isNumber(lineEdit->text().toStdString(), lineEdit2->text().toStdString()))
        {
            auto a = lineEdit->text().toInt();
            auto b = lineEdit2->text().toInt();
            QString result;
            result.setNum(a / b);
            lineEdit3->setText(result);
        }
        else
        {
            lineEdit3->setText("ERROR");
        }
    };
};

#endif //QCALCULATOR_CALCULATOR_H
