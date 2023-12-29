#include "mainwindow.h"

#include <QApplication>
#include "cubigintnumberaddertest.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QTest::qExec(new CUBigIntNumberAdderTest, argc, argv);
    w.show();
    return a.exec();
}
