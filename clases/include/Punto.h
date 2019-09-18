#ifndef PUNTO_H
#define PUNTO_H


class Punto
{
    public:
        double x,y;
        Punto();
        Punto(double,double);
        void modificar(double,double);
        void imprimir();
};

#endif // PUNTO_H
