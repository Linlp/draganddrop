#include "widget.h"
#include "ui_widget.h"
//using namespace std;
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setAcceptDrops(true);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::mousePressEvent(QMouseEvent *event)
{
    //鼠标是否在标签面积内，
     ispressbutton =true;
     bool islabelarea = ui->label->geometry().contains((event->pos()));

    //&&child
    if(event->button() == Qt::LeftButton && islabelarea )
    {
        startPoint = event->pos();
        lefttopPoint =this->frameGeometry().topLeft();
        static int i=0;
        qDebug() << "label was selected" << " i=" <<i;

        i++;
    }


}

void Widget::mouseMoveEvent(QMouseEvent *event)
{

    if(ui->label->geometry().contains((event->pos())) && ispressbutton)
    {
        offset_xy = event->pos()-startPoint;
        qDebug() <<"offset_x="<<offset_xy.x();
        ui->label->move(offset_xy);
    }
}

void Widget::mouseReleaseEvent(QMouseEvent *event)
{

}
