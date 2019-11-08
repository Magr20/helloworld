#include "Estudiante.h"

Estudiante::Estudiante():
    nombre("Jhon"), apellido("Doe"), codigo("500")
{//ctor
}
Estudiante::Estudiante(string a,string b,string c):
    nombre(a), apellido(b), codigo(c)
{//ctor
}

Estudiante::~Estudiante()
{
    //dtor
}

string Estudiante::getNombre(){return nombre;}
string Estudiante::getApellido(){return apellido;}
string Estudiante::getCodigo(){return codigo;}
