#include "care_center.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Care_Center w;
    w.show();
    return a.exec();
}