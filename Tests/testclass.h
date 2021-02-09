#ifndef TESTCLASS_H
#define TESTCLASS_H

#include <QObject>

class TestClass : public QObject
{
public:
    TestClass();

private slots:
    void initTestCase();
    void shuffleReorganisesCardsTest();
};

#endif // TESTCLASS_H
