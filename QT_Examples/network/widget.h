#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include "test.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();



private slots:
    void displayButton();

private:
    Ui::Widget *ui;

    QPushButton *m_button;

    Test *m_test;
};
#endif // WIDGET_H
