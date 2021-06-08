#ifndef C2F_H
#define C2F_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class C2F; }
QT_END_NAMESPACE

class C2F : public QMainWindow
{
    Q_OBJECT
    
    // Process the Fahrenheit to Celsius
    void f2c();
    
    // Process the Celsius to Frahrenheit
    void c2f();
    
public:
    C2F(QWidget *parent = nullptr);
    ~C2F();
    
private slots:
    void on_f2cInput_returnPressed();
    
    void on_c2fInput_returnPressed();
    
    void on_c2fConvertButton_clicked();
    
    void on_f2cConvertButton_clicked();
    
private:
    Ui::C2F *ui;
};
#endif // C2F_H
