#ifndef C2F_H
#define C2F_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class C2F; }
QT_END_NAMESPACE

class C2F : public QMainWindow
{
    Q_OBJECT
    
public:
    C2F(QWidget *parent = nullptr);
    ~C2F();
    
private:
    Ui::C2F *ui;
};
#endif // C2F_H
