#include "widget.h"
#include "ui_widget.h"
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include<QPixmap>
Widget::Widget(QWidget *parent)

    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    background1->setPixmap(QPixmap(":/beginpicture/beginpicture/firststageend.jpg"));
    beginpixmap->addItem(background1);
    beginPixmap->setScene(beginpixmap);
    beginPixmap->setParent(this);

}

Widget::~Widget()
{
    delete ui;
}
