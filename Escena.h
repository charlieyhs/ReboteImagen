#ifndef ESCENA_H
#define ESCENA_H

#include <QGraphicsScene>

class QTimer;
class Pelota;

class Escena : public QGraphicsScene
{
public:
    Escena(QObject *parent = nullptr);
    void iniciaEscena();
private:
    void actualizaEscena();
    void creaObjetos();
    void configureEscena();
    void conectaObjetos();

    QTimer *mTimer;
    Pelota *mPelota;
    QVector<QPointF> mPuntos;
    int mIndice;
    bool mDireccion;
};

#endif // ESCENA_H
