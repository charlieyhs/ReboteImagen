#include "Escena.h"
#include "Pelota.h"
#include "Global.h"
#include "Util.h"
#include <QKeyEvent>
#include <QTimer>
#include <QtMath>

Escena::Escena(QObject *parent)
    : QGraphicsScene(0.0, 0.0, XSIZE, YSIZE, parent)
{
    creaObjetos();
    configureEscena();
    conectaObjetos();
}

void Escena::iniciaEscena()
{
    mTimer->start(15);
}

void Escena::actualizaEscena()
{
    double x1, x2;
    const double x = mPelota->getx();
    Util::resuelveEcuacionCuadratica(1.0, -600.0, 90000.0-300.0*150.0, x2, x1);
    if (x <= x1) {
        mDireccion = true;
    } else if (x >= x2) {
        mDireccion = false;
    }
    if (mDireccion) {
        ++mIndice;
    } else {
        --mIndice;
    }
    mPelota->setx(mPuntos[mIndice].x());
    mPelota->sety(mPuntos[mIndice].y());
    update();
}

void Escena::creaObjetos()
{
    mTimer = new QTimer(this);
    mDireccion = true;
    for (double x = 0.0; x < XSIZE; x += VX) {
        const double y = qPow(x-300.0,2.0)/(+150.0)+300.0;
        mPuntos.append(QPointF(x, y));
    }
    mIndice = 0;
    mPelota = new Pelota(mPuntos[mIndice].x(), mPuntos[mIndice].x(),
                         W, H, VX, VY);
}

void Escena::configureEscena()
{
    addRect(0.0, 0.0, XSIZE, YSIZE);
    addItem(mPelota);
}

void Escena::conectaObjetos()
{
    connect(mTimer, &QTimer::timeout, this, actualizaEscena);
}
