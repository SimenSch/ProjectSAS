#include "loginui.h"

#include <QApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginUI l;
    l.show();

    return a.exec();
}
