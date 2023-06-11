#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class ClientTests : public QObject
{
    Q_OBJECT

public:
    ClientTests();
    ~ClientTests();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};

ClientTests::ClientTests()
{

}

ClientTests::~ClientTests()
{

}

void ClientTests::initTestCase()
{

}

void ClientTests::cleanupTestCase()
{

}

void ClientTests::test_case1()
{

}

QTEST_MAIN(ClientTests)

#include "client-tests.moc"
