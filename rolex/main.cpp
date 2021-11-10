#include <QApplication>
#include "rolex.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto D = new rolex;
    D->show();
    return a.exec();
}
