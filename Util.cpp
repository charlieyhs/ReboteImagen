#include "Util.h"
#include <QtMath>

void Util::resuelveEcuacionCuadratica(double a, double b, double c,
                                      double &x1, double &x2)
{
    x1 = (-b+qSqrt(b*b-4.0*a*c))/(2.0*a);
    x2 = (-b-qSqrt(b*b-4.0*a*c))/(2.0*a);
}

