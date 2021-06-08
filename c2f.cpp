#include "c2f.h"
#include "./ui_c2f.h"

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

