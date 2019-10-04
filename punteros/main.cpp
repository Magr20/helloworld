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
void invertirRecursivo(int *x, int tam, int i=0){
    swap(*(x+i),*(x+tam-i-1));
    if (i< tam/2-1 )
        invertirRecursivo(x,tam,++i);
}

void ordenBurbuja(int *x,int tam){
    for (int i=0;i<tam-1;i++){
        for (int j=i+1;j<tam;j++)
            if (*(x+i)>*(x+j))
                swap(*(x+i),*(x+j));
    }
}

void insertionSort(int *x,int tam,int aux=0){
    for (int i=1;i<tam;i++){
        for (int j=i-1;j>=0;j--)
            if (*(x+i)<*(x+j)){
                swap(*(x+i),*(x+j));
                i--;
            }
    }
}
void quickSorts(int *x,int tamano,int i=0){
    int inicio=i;
    int j=tamano-1;
    int pivotePos=(j+i)/2;
    int pivote=*(x+pivotePos);
    while (j>i){
        if (*(x+i)<pivote)
            i++;
        else{
            while (*(x+j)>pivote&&j>inicio)
                j--;
            swap(*(x+j),*(x+i));
            if (pivotePos==j) pivotePos=i;
            else if (pivotePos==i) pivotePos=j;
            j--;
            i++;
        }
    }
    if (pivotePos>1){
        quickSorts(x,pivotePos,0);
    }
    if (tamano-pivotePos>2){
        quickSorts(x,tamano,pivotePos+1);
    }
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
    int x[]={9,6,5,4,21,8,4,6,2,5,7,20};
    quickSorts(x,sizeof x /4);
    printArray(x,sizeof x /4);
}
