#include "mockcalc.h"

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include <QQmlComponent>
#include <QQmlEngine>
#include <QQuickItem>

using namespace testing;

TEST(test_main, autotestlogic)
{
    EXPECT_EQ(1, 1);
    ASSERT_THAT(0, Eq(0));
}
TEST(test_main, testqml)
{
    QQmlEngine *engine = new QQmlEngine;
    QQmlComponent component(engine,QUrl(QLatin1String("qrc:/main.qml")));

    QObject *myObject = component.create();
    QQuickItem *item = qobject_cast<QQuickItem*>(myObject);
    int width = item->width();  // width = 200
    EXPECT_EQ(100,width);
    QVariant rvalue;
    QMetaObject::invokeMethod(item,"add",Q_RETURN_ARG(QVariant,rvalue),Q_ARG(QVariant,1),Q_ARG(QVariant,2));

    EXPECT_EQ(3,rvalue.toInt());
}
TEST(test_main, testmock)
{
    MockCacl mockCalc;
    EXPECT_CALL(mockCalc,Add(1,2)).Times(1).WillOnce(Return(3));
    int rst = mockCalc.Add(1,2);
    EXPECT_EQ(3,rst);
}
