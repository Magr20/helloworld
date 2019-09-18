#include <iostream>
#include <math.h>
#include "Vector.h"

using namespace std;
Vector::Vector(){
}
/*
Vector(Punto uno,Punto dos){
    inicio=uno;
    fin=dos;
}
*/

void Vector::imprimir(){
    inicio.imprimir();
    cout<<" -> ";
    fin.imprimir();
}

void Vector::cambiaInicio(double nx,double ny){
    inicio.modificar(nx,ny);
}
void Vector::cambiaFin(double nx,double ny){
    fin.modificar(nx,ny);
}

double Vector::modulo(){
    double a= fin.x-inicio.x;
    double b= fin.y-inicio.y;
    double modul= sqrt( pow(a,2) + pow(b,2) );
    return modul;
}
