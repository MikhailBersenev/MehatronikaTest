#include "cubigintnumberaddertest.h"
#include "cubignumberadder.h"
CUBigIntNumberAdderTest::CUBigIntNumberAdderTest(QObject *parent)
    : QObject{parent}
{

}

void CUBigIntNumberAdderTest::testCalculation()
{
    CUBigNumberAdder uBigNumberAdder(this);
    QFETCH(QString, addent1);
    QFETCH(QString, addent2);
    QFETCH(QString, expectedSum);
    uBigNumberAdder.setAddentNumbers(addent1, addent2);
    QCOMPARE(uBigNumberAdder.calculateNumbers(), expectedSum);
}

void CUBigIntNumberAdderTest::testCalculation_data()
{
    QTest::addColumn<QString>("addent1");
    QTest::addColumn<QString>("addent2");
    QTest::addColumn<QString>("expectedSum");
    QTest::newRow("Test1") << "987654321987654321" << "123456789123456789" << "1111111111111111110";
    QTest::newRow("Test2") << "1111111111111111111" << "2222222222222222222" << "3333333333333333333";
    QTest::newRow("Test3") << "5555555555555555555" << "4444444444444444444" << "9999999999999999999";
}
