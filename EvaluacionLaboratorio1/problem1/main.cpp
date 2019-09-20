#include <iostream>

using namespace std;

int sumaMultiplos(int n, int suma=0){
    for (int i=0;i<n;i++){
        if (!(i%3)||!(i%5))
            suma+=i;
    }
    return suma;
}
//Imprimir la suma de todos los numeros naturales menores a 1000000 que son multiplos de 3 o 5
int main()
{
    cout << sumaMultiplos(1000000) << endl;
    return 0;
}
