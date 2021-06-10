#include "c2f.h"
#include "./ui_c2f.h"

#include <string>

void C2F::f2c() {
    QString cqstr = ui->f2cInput->text();
    QString result;
    
    bool success;
    double f = cqstr.toDouble(&success);
    if (!success) {
        result = "<b style=\"font-size: 11pt\">Result: NaN</b>";
        ui->f2cResultLabel->setText(result);
        return;
    }
    
    double c = (f - 32) * 5 / 9;
    
    std::string resultStr = std::to_string(c);
    result = QString("<b style=\"font-size: 11pt\">Result: ") + resultStr.c_str() + "</b>";
    ui->f2cResultLabel->setText(result);
}

void C2F::c2f() {
    QString cqstr = ui->c2fInput->text();
    QString result;
    
    bool success;
    double c = cqstr.toDouble(&success);
    if (!success) {
        result = "<b style=\"font-size: 11pt\">Result: NaN</b>";
        ui->c2fResultLabel->setText(result);
        return;
    }
    
    double f = (c * 9 / 5) + 32;
    
    std::string resultStr = std::to_string(f);
    result = QString("<b style=\"font-size: 11pt\">Result: ") + resultStr.c_str() + "</b>";
    ui->c2fResultLabel->setText(result);
}

C2F::C2F(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::C2F)
{
    ui->setupUi(this);
}

C2F::~C2F()
{
    delete ui;
}


void C2F::on_f2cInput_returnPressed()
{
    f2c();
}


void C2F::on_c2fInput_returnPressed()
{
    c2f();
}


void C2F::on_c2fConvertButton_clicked()
{
    c2f();
}


void C2F::on_f2cConvertButton_clicked()
{
    f2c();
}

