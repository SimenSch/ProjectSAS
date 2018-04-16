#ifndef APPLICATION_H
#define APPLICATION_H

#include <QWidget>

namespace Ui {
class Application;
}

class Application : public QWidget
{
    Q_OBJECT

public:
    explicit Application(QWidget *parent = 0);
    ~Application();
private slots:
    void on_loginButton_clicked();
    void on_switchUserButton_clicked();

private:
    Ui::Application *ui;
};

#endif // APPLICATION_H
