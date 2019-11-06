#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
using namespace std;

class Estudiante
{
    public:
        Estudiante();
        Estudiante(string,string,string);
        virtual ~Estudiante();
        string nombre,apellido,codigo;
        string getNombre();
        string getApellido();
        string getCodigo();

    protected:

    private:
};

#endif // ESTUDIANTE_H
