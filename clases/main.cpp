#include <iostream>
#include "Punto.h"
#include "Vector.h"

using namespace std;
/*
class Point{
    public:
        double x,y;
    Point(double nx, double ny){
        x=nx;
        y=ny;
        }
    void print(){
        cout << "("<<endl;
        }
    };
*/

int main()
{

    Vector v;
    v.cambiaInicio(6,5);
    v.cambiaFin(3,1);
    v.imprimir();
    cout<<endl<<"El modulo es: "<<v.modulo();
    return 0;
}
