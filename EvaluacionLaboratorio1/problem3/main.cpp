#include <iostream>

using namespace std;

bool esPrimo(int n,int suma=0){
    for (int i=1; i<n; i++){
        if (!(n%i))
            suma+=i;
    }
    return suma==n;
}

int main()
{
    //imprimir todos los numeros perfectos menores a n
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    for (int i=1; i<n; i++){
        if (esPrimo(i))
            cout << " " << i ;
    }
    return 0;
}
