#include "Curso.h"

Curso::Curso()
{
    //ctor
}

Curso::~Curso()
{
    //dtor
}

string getNombre();
string getCodigo();
Estudiante * getDireccion();
int getCantidad();

void setNombre(string);
void setCodigo(string);
void setDireccion(Estudiante*);
void setCantidad(int);

void incrementoEstudiante();
