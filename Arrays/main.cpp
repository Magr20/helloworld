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

void quickSorts(int x[],int tamano,int i=0){
    int inicio=i;
    int j=tamano-1;
    int pivotePos=(j+i)/2;
    int pivote=x[pivotePos];
    while (j>i){
        //printArray(x,tamano);
        if (x[i]<pivote)
            i++;
        else{
            while (x[j]>pivote&&j>inicio)
                j--;
            swap(x[j],x[i]);
            if (pivotePos==j) pivotePos=i;
            else if (pivotePos==i) pivotePos=j;
            j--;
            i++;
        }
    }
    printArray(x,11);
    if (pivotePos>1){
        quickSorts(x,pivotePos,0);
    }
    if (tamano-pivotePos>2){
        quickSorts(x,tamano,pivotePos+1);
    }
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
    int x[]={9,6,5,4,21,8,4,6,2,5,7,20};
    quickSorts(x,sizeof x /4);
    printArray(x,sizeof x /4);


    imprimirElementos(arreglo,tam);
    return 0;

}
