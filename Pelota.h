#ifndef PELOTA_H
#define PELOTA_H

#include <QGraphicsItem>

class Pelota : public QGraphicsItem
{
public:
    Pelota(double x, double y, double w, double h, double vx, double vy,
           QGraphicsItem *parent = nullptr);

    void setx(double x) { mx = x; }
    void sety(double y) { my = y; }
    void setw(double w) { mw = w; }
    void seth(double h) { mh = h; }
    void setvx(double vx) { mvx = vx; }
    void setvy(double vy) { mvy = vy; }

    double getx() const { return mx; }
    double gety() const { return my; }
    double getw() const { return mw; }
    double geth() const { return mh; }
    double getvx() const { return mvx; }
    double getvy() const { return mvy; }
protected:
    QRectF boundingRect() const override;

    void paint(QPainter *painter,
               const QStyleOptionGraphicsItem *option,
               QWidget *widget = nullptr) override;
private:
    double mx, my;
    double mw, mh;
    double mvx, mvy;
};

#endif // PELOTA_H
