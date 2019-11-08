#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include <string.h>
using namespace std;

class empleado
{
    public:
        empleado();
        empleado(string name,string lastname,double salary=0);
        virtual ~empleado();

        string getNombre();
        string getApellido();
        double getSalario();
        double getSalarioAnual();

        void bajarSueldo10();//baja sueldo 10%
        void setNombreApellido(string n,string a);

    protected:

    private:
        string nombre, apellido;
        double salario;//mensual
};

#endif // EMPLEADO_H
//funciones para obtener cada dato miembro
//si el salario es negativo
