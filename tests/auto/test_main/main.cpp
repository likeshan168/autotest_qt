#include "tst_test_main.h"
#include <gtest/gtest.h>
#include <QDebug>
#include <QQmlApplicationEngine>
int main(int argc, char *argv[])
{
    //    QQmlApplicationEngine *engine = new QQmlApplicationEngine;
    ////    QQmlComponent component(engine, QUrl::fromLocalFile(":/main.qml"));
    //    QQmlComponent component(engine,QUrl(QLatin1String("qrc:/main.qml")));

    //    QObject *myObject = component.create();
    //    QQuickItem *item = qobject_cast<QQuickItem*>(myObject);
    //    int width = item->width();  // width = 200
    //    qDebug()<<"width："<<width;

    QCoreApplication a(argc, argv);
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
//    return a.exec();
}

