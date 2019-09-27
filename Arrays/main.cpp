#include <iostream>

using namespace std;

//Imprimir los elementos de un arrelgo
void imprimirElementos(int x[], int tam){
    for (int i=0;i<tam;i++)
        cout << x[i]<< " ";
}
//Suma de los elementos
int sumaRecursiva(int x[], int tam, int suma=0){
    if (tam-->0)
        return sumaRecursiva(x, tam, suma+x[tam]);
    return suma;
}
int sumaIterativa(int x[], int tam, int suma=0){
    for (int i=0;i<tam;i++)
        suma+= x[i];
    return suma;
}

//Invertir los elementos del array
void swapp(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}

void invertirIterativo(int x[],int tam){
    tam--;
    for (int i=0;i<=tam/2;i++){
        swapp(x[i],x[tam-i]);
    }
}

void invertirRecursivo(int x[], int tam, int i=0){
    swapp(x[i],x[tam-i-1]);
    if (i< tam/2-1 )
        invertirRecursivo(x,tam, ++i);
}

//Ordenar el arreglo
void ordenBurbuja(int x[],int tam){
    for (int i=0;i<tam-1;i++){
        for (int j=i+1;j<tam;j++)
            if (x[i]>x[j])
                swapp(x[i],x[j]);
    }
}

void insertionSort(int x[],int tam,int aux=0){
    for (int i=1;i<tam;i++){
        for (int j=i-1;j>=0;j--)
            if (x[i]<x[j]){
                swapp(x[i],x[j]);
                i--;
            }
    }
    //ordenBurbuja(x,tam);
}

void tryToSort(int x[],int tamano,int inicio=0){
    //find best pivot
    if (tamano/2>2)
        tryToSort(x,tamano/2,0);
    int pivot=inicio;
    int border=inicio+1;
    for (int i=inicio;i<tamano;i++)//encuentra un numero mayor para usarlo de border y hacer el swap
        if (x[i]>x[pivot]){
        }
    for (int i=2;i<tamano&&border<tamano;i++){//poner a la izquierda los menores del pivote
        if (x[i]<x[pivot]){
            swap(x[border],x[i]);
            border++;
        }
    }
    swap(x[pivot],x[border]);
    if (tamano-border>2)
        tryToSort(x,tamano,border--);
    //particionYordenar(x,tamano,border);
}

int main()
{
    int arreglo[]={7,9,2,4,1};
    int tam = 5;
    //imprimirElementos(arreglo,tam);
    //cout << sumaRecursiva(arreglo,tam);
    //cout << sumaIterativa(arreglo,tam);
    //invertirIterativo(arreglo,tam);
    //invertirRecursivo(arreglo,tam);
    insertionSort(arreglo,tam);



    imprimirElementos(arreglo,tam);
    return 0;

}
