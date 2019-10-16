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
void invertirRecursivo(char *cadena,char *tam=0){
    if (tam==0)
        tam = contarCaracteres(cadena)+ cadena-1;
    if (cadena>=tam)
        return;
    swap(*cadena,*tam);
    invertirRecursivo(++cadena,--tam);
}
bool palindromo(char *cadena){
    char *tam = contarCaracteres(cadena) + cadena-1;
    while (cadena < tam)
        if (*cadena++ != *tam--)
            return false;
    return true;
}

bool palindromoRecursivo(char *cadena,char *tam=0){
    if (tam==0) tam = contarCaracteres(cadena)+ cadena-1;
    if (cadena>=tam) return true;
    if (*cadena != *tam) return false;
    palindromoRecursivo(++cadena,--tam);
}
bool paRecursivo(char *cadena,char *tam=0){
    if (tam==0) tam = contarCaracteres(cadena)+ cadena-1;
    if (*cadena != *tam) return false;
    else return true;
    return paRecursivo(cadena,tam)&& paRecursivo(++cadena,--tam);
}


int main()
{
    char cadena[]="osobaboso";
    cout << boolalpha << paRecursivo(cadena) << endl;
    return 0;
}
