#include <iostream>

using namespace std;

void swap(int *ptr1, int *ptr2){
    int tmp= *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}

//Imprimir los elementos de un arrelgo
void imprimirElementos(int *x, int tam){
    while (tam--){
        cout << *x << " ";
        x++;
    }
    cout<<endl;
}
//Suma de los elementos
int sumaRecursiva(int *x, int tam){
    if (!(--tam))
        return (*x) ;
    return *x + sumaRecursiva(++x, tam);
}
int sumaIterativa(int *x, int tam, int suma=0){
    for (int i=0;i<tam;i++){
        suma+= *x;
        x++;
    }
    return suma;
}
void invertirIterativo(int *x,int tam){
    tam--;
    for (int i=0;i<=tam/2;i++){
        swap(*x,*(x+tam-i));
        x++;
        tam--;
    }
}
void invertirRecursivo(int *x, int tam,int i=0){
    cout<<*x<<" "<<*(x+(tam-i))<<endl;
    swap(*x,*(x+(tam-i)));
    if (i<tam/2)
        invertirRecursivo(++x,tam,++i);
}



int main()
{
    int arreglo[]={7,9,12,4,3,8};
    int tam = 6;
    invertirRecursivo(arreglo,tam);
    imprimirElementos(arreglo,tam);
    cout << sumaRecursiva(arreglo,tam)<<endl;
    cout << sumaIterativa(arreglo,tam)<<endl;
    return 0;
}
