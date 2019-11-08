#include "Curso.h"

Curso::Curso()
{
    //ctor
}
Curso::Curso(Curso &o)
{
    nombre=o.nombre;
    codigo=o.codigo;
    alumnos=o.alumnos;
    cantidadAlumnos=o.cantidadAlumnos;
}
Curso::Curso(string a,string b,Estudiante* puntero, int c)
{
    setNombre(a);
    setCodigo(b);
    setDireccion(puntero);
    cantidadAlumnos=c;
}

Curso::~Curso()
{
    //dtor
}

string Curso::getNombre(){return nombre;}
string Curso::getCodigo(){return codigo;}
Estudiante * Curso::getDireccion(){return alumnos;}
int Curso::getCantidad(){return cantidadAlumnos;}

void Curso::setNombre(string a){nombre=a;}
void Curso::setCodigo(string a){codigo=a;}
void Curso::setDireccion(Estudiante* a){alumnos=a;}
void Curso::setCantidad(int a){cantidadAlumnos=a;}

void Curso::incrementoEstudiante(){cantidadAlumnos+=1;}
