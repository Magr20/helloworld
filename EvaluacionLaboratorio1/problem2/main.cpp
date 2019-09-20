#include <iostream>

using namespace std;

int factorialRecursivo(int n,int factorial=1){
    if (n>1)
        return factorialRecursivo(n-1,factorial*n);
    return factorial;
}

int factorialIterativo(int n,int factorial=1){
    for (n; n>1;n--){
        factorial=factorial*n;
    }
    return factorial;
}

int main()
{
    //Hallar el factorial de un número tanto de la forma iterativa y recursiva
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << factorialRecursivo(n) << endl;
    cout << factorialIterativo(n) << endl;
    return 0;
}
