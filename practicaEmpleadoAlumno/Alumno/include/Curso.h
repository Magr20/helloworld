#ifndef CURSO_H
#define CURSO_H
#include "Estudiante.h"

class Curso
{
    public:
        Curso();
        Curso(Curso &o);
        Curso(string,string,Estudiante* puntero, int);
        //Constructor copia
        virtual ~Curso();

        string getNombre();
        string getCodigo();
        Estudiante * getDireccion();
        int getCantidad();

        void setNombre(string);
        void setCodigo(string);
        void setDireccion(Estudiante*);
        void setCantidad(int);

        void incrementoEstudiante();

    protected:

    private:
        string nombre,codigo;
        Estudiante *alumnos;
        int cantidadAlumnos;
};

#endif // CURSO_H
