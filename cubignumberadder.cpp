#include "cubignumberadder.h"
#include <QString>
CUBigNumberAdder::CUBigNumberAdder(QObject *parent)
    : QObject{parent}
{

}

void CUBigNumberAdder::setAddentNumbers(QString sFirstAddent, QString sSecondAddent)
{
    m_sFirstAddent = sFirstAddent;
    m_sSecondAddent = sSecondAddent;
}

QString CUBigNumberAdder::calculateNumbers()
{
    QString sResult;
    int iFirstAddentLen = m_sFirstAddent.length();
    int iSecondAddentLen = m_sSecondAddent.length();
    int iCarry = 0;
    int iMaxLength = qMax(iFirstAddentLen, iSecondAddentLen);
//O(n) — линейная сложность
//Потому что нужно проитерироваться по каждому элементу строк со слагаемыми чтобы сложить числа
    for (int i = 0; i < iMaxLength; ++i) {
        int iFirstDigit = 0;
        if(i < iFirstAddentLen)
            iFirstDigit = m_sFirstAddent[iFirstAddentLen - i - 1].digitValue();
        int iSecondDigit = 0;
        if(i < iSecondAddentLen)
           iSecondDigit = m_sSecondAddent[iSecondAddentLen - i - 1].digitValue();
        int iSum = iFirstDigit + iSecondDigit + iCarry;
        iCarry = iSum / 10;
        sResult.prepend(QString::number(iSum % 10));
    }

    if (iCarry > 0)
        sResult.prepend(QString::number(iCarry));
    return sResult;
}
