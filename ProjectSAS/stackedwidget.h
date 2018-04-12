#ifndef STACKEDWIDGET_H
#define STACKEDWIDGET_H

#include "QStackedWidget"


class StackedWidget : public QStackedWidget
{
    Q_OBJECT
public:
    StackedWidget(QWidget *parent=0);
    ~StackedWidget();

    void addWidget(QWidget *w);
};

#endif // STACKEDWIDGET_H
