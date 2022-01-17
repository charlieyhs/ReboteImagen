#include "Pelota.h"
#include <QPainter>

Pelota::Pelota(double x, double y, double w, double h,
               double vx, double vy, QGraphicsItem *parent)
    : QGraphicsItem(parent)
{
    mx = x;
    my = y;
    mw = w;
    mh = h;
    mvx = vx;
    mvy = vy;
}

QRectF Pelota::boundingRect() const
{
    return QRectF(mx, my, mw, mh);
}

void Pelota::paint(QPainter *painter,
                   const QStyleOptionGraphicsItem *,
                   QWidget *)
{
    painter->setBrush(QColor(Qt::black));
    painter->drawEllipse(boundingRect());
}

