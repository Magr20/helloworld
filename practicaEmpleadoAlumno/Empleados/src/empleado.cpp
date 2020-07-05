#include "empleado.h"

empleado::empleado():
    nombre("Jhon"), apellido("Doe"), salario(500)
{
    //ctor
}

empleado::empleado(string name,string lastname,double salary):
    nombre(name), apellido(lastname), salario(salary)
{
    if (salario<0) salario=0;
}

empleado::~empleado()
{
    //dtor
}


string empleado::getNombre(){return nombre;}
string empleado::getApellido(){return apellido;}
double empleado::getSalario(){return salario;}
double empleado::getSalarioAnual(){return salario*12;}//12 meses
void empleado::bajarSueldo10(){
    salario=salario*0.9;//otorga 90%del salario
}

void empleado::setNombreApellido(string n,string a){
    nombre=n;
    apellido=a;
}
