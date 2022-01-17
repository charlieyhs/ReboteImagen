#include "Widget.h"
#include "ui_Widget.h"
#include "Escena.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    mEscena = new Escena(this);
    ui->graphicsView->setScene(mEscena);
    mEscena->iniciaEscena();
}

Widget::~Widget()
{
    delete ui;
}
