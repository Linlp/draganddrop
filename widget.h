#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDropEvent>
#include <QMouseEvent>
#include <QLabel>
#include <QEvent>
#include <QMimeData>
#include <QDrag>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
protected:
//     void dragEnterEvent(QDragEnterEvent *event) override;
//     void dragMoveEvent(QDragMoveEvent *event) override;
//     void dropEvent(QDropEvent *event) override;
     void mousePressEvent(QMouseEvent *event) override;
     void mouseMoveEvent(QMouseEvent *event) override;
     void mouseReleaseEvent(QMouseEvent *event) override;
private:
    Ui::Widget *ui;
    QPoint startPoint;
    QPoint lefttopPoint;
    QPoint offset_xy;
    bool ispressbutton;
};

#endif // WIDGET_H
