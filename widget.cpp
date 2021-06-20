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
