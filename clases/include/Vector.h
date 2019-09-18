#ifndef VECTOR_H
#define VECTOR_H
#include "Punto.h"


class Vector
{
    public:
        Punto inicio,fin;
        Vector();
        Vector(Punto,Punto);
        void imprimir();
        void cambiaInicio(double,double);
        void cambiaFin(double,double);
        double modulo();

};

#endif // VECTOR_H
