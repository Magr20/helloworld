#include <iostream>
#include "empleado.h"
#include <string>
using namespace std;

int main()
{
    empleado uno,dos;
    cout <<"Uno: "<< uno.getSalarioAnual()<<endl;
    cout <<"Dos: "<< dos.getSalarioAnual()<<endl;
    uno.bajarSueldo10();
    dos.bajarSueldo10();
    cout <<"Uno: "<< uno.getSalarioAnual()<<endl;
    cout <<"Dos: "<< dos.getSalarioAnual()<<endl;

    empleado a("Sol","Velasquez"),b,c,d,e;
    b.setNombreApellido("Camila","Luque");
    c.setNombreApellido("Sol","Ramirez");
    d.setNombreApellido("Alejandra","Juare");
    e.setNombreApellido("Maria","Jua");
    int tam=5;
    empleado lista[]={a,b,c,d,e};

    for (int h=tam;h>0;h--){
        for (int i=0;i<h-1;i++){
             int actual=static_cast<int> (lista[i].getApellido()[0]);
             int siguiente=static_cast<int> (lista[i+1].getApellido()[0]);
             if (actual>siguiente){//encuentra el mayor y lo manda al final
                swap(lista[i],lista[i+1]);
             }
             if (actual==siguiente){//Si tienen la misma letra
                 int k=0; bool menor=1;
                 while (k<lista[i].getApellido().size()&&k <lista[i+1].getApellido().size()){
                    int ahora=static_cast<int> (lista[i].getApellido()[k]);
                    int futuro=static_cast<int> (lista[i+1].getApellido()[k]);
                    if (ahora>futuro){
                        swap(lista[i],lista[i+1]);
                        menor=0;
                        break;
                    }
                    k++;
                 }
                 if (lista[i].getApellido().size() >lista[i+1].getApellido().size()&&menor) swap(lista[i],lista[i+1]);
             }
        }
    }

    for (int i=0;i<tam;i++)
        cout << lista[i].getApellido() <<", " <<lista[i].getNombre()<< endl;

    return 0;
}

