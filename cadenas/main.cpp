#include <iostream>

using namespace std;

int contarCaracteres(char *cadena,int tam=0){
    for (;*cadena!='\0';tam++,cadena++);
    return tam;
}
int contarRecursivo(char *cadena,int tam=0){
    if (*cadena=='\0')
        return 0;
    return 1 + contarRecursivo(++cadena,++tam);
}
void invertir(char *cadena){
    char *tam = contarCaracteres(cadena) + cadena-1;
    while (cadena < tam){
        swap(*cadena,*tam);
        cadena++;
        tam--;
    }
}
void invertirRecursivo(char *cadena, char *tam=0){
    if (tam==0)
        tam = contarCaracteres(cadena)+cadena-1;
    if (cadena>=tam)
        return;
    swap(*cadena,*tam);
    invertirRecursivo(++cadena,--tam);
}


int main()
{
    char cadena[]="Hello world!";
    invertirRecursivo(cadena);
    cout << cadena << endl;
    return 0;
}
