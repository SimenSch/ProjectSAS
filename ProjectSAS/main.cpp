#include "logininterface.h"
#include "application.h"
#include "qsqldatabase.h"
#include "dboperator.h"
#include <QApplication>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    Application w;
    w.show();

    return a.exec();
}
