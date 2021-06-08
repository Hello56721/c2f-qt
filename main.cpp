#include "c2f.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    C2F w;
    w.show();
    return a.exec();
}
