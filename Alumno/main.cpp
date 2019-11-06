#include <iostream>
#include <vector>
#include "Estudiante.h"
using namespace std;

int main()
{
    vector <Estudiante> Listado;
    Estudiante uno("Sol","Velasquez","QWDIO"),dos("Camila","Luque","ABDJF");
    cout <<uno.getNombre()<<" "<<uno.getApellido()<<" "<<uno.getCodigo()<< endl;
    cout <<dos.getNombre()<<" "<<dos.getApellido()<<" "<<dos.getCodigo()<< endl;
    Listado.push_back(uno);
    Listado.push_back(dos);
    return 0;
}
