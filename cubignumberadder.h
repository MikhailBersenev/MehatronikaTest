#ifndef CUBIGNUMBERADDER_H
#define CUBIGNUMBERADDER_H

#include <QObject>
#include <QVector>

class CUBigNumberAdder : public QObject
{
    Q_OBJECT
public:
    explicit CUBigNumberAdder(QObject *parent = nullptr);
    void setAddentNumbers(QString sFirstAddent, QString sSecondAddent);
    QString calculateNumbers();


signals:
private:
    QString m_sFirstAddent;
    QString m_sSecondAddent;
};

#endif // CUBIGNUMBERADDER_H
