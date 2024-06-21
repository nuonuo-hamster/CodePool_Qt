#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <mytcpserver.h>

#define PORT 8000

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void threadSlot(QByteArray b);

private:
    Ui::Widget *ui;
    MyTcpServer *server;
};
#endif // WIDGET_H
