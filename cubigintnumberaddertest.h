#ifndef CUBIGINTNUMBERADDERTEST_H
#define CUBIGINTNUMBERADDERTEST_H

#include <QObject>
#include <QtTest/QtTest>

class CUBigIntNumberAdderTest : public QObject
{
    Q_OBJECT
public:
    explicit CUBigIntNumberAdderTest(QObject *parent = nullptr);

signals:
private slots:
    void testCalculation();
    void testCalculation_data();


};

#endif // CUBIGINTNUMBERADDERTEST_H
