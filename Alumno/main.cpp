#include <iostream>
#include <vector>
#include "Estudiante.h"
#include "Curso.h"
using namespace std;

int main()
{
    vector <Estudiante> Listado;
    vector <Estudiante> Listado2;
    Estudiante uno("Sol","Velasquez","QWDIO"),dos("Camila","Luque","ABDJF");
    cout <<uno.getNombre()<<" "<<uno.getApellido()<<" "<<uno.getCodigo()<< endl;
    cout <<dos.getNombre()<<" "<<dos.getApellido()<<" "<<dos.getCodigo()<< endl;
    Listado.push_back(uno);
    Listado.push_back(dos);
    Listado2.push_back(dos);

    Curso primero("Comida","nirvbw",Listado,2),segundo("Comida2","nifdArvbw",Listado2,1);
    primero.setCantidad(1);
    primero.incrementoEstudiante();
    cout<<primero.getNombre()<<primero.getCodigo()<<primero.getDireccion()<<primero.getCantidad()<<endl;
    segundo.setCantidad(0);
    segundo.incrementoEstudiante();
    cout<<segundo.getNombre()<<segundo.getCodigo()<<segundo.getDireccion()<<segundo.getCantidad()<<endl;

    return 0;
}
