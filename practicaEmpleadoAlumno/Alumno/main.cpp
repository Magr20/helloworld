#include <iostream>
#include <vector>
#include "Estudiante.h"
#include "Curso.h"
using namespace std;

int main()
{

    Estudiante uno("Sol","Velasquez","QWDIO"),dos("Camila","Luque","ABDJF");
    cout <<uno.getNombre()<<" "<<uno.getApellido()<<" "<<uno.getCodigo()<< endl;
    cout <<dos.getNombre()<<" "<<dos.getApellido()<<" "<<dos.getCodigo()<< endl;
    Estudiante Listado2[]={dos};
    Estudiante Listado[]={uno,dos};

    cout <<endl<<"CURSOS"<<endl;
    Curso primero("Mate","nirvbw",Listado,2),segundo("Discretas","nifdArvbw",Listado2,1);
    primero.setCantidad(1);
    primero.incrementoEstudiante();
    cout<<"Nombre: "<<primero.getNombre()<<", Codigo: "<<primero.getCodigo()<<endl;
    cout<<"Direccion: "<<primero.getDireccion()<<", Cantidad: "<<primero.getCantidad()<<endl;
    segundo.setCantidad(0);
    segundo.incrementoEstudiante();
    cout<<"Nombre: "<<segundo.getNombre()<<", Codigo: "<<segundo.getCodigo()<<endl;
    cout<<"Direccion: "<<segundo.getDireccion()<<", Cantidad: "<<segundo.getCantidad()<<endl;
    return 0;
}
