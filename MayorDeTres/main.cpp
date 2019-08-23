#include <iostream>

using namespace std;

int main()
{
    int a,b,c,mayor;
    cout << "Ingrese un numero entero" << endl;
    cin >> a;
    cout << "Ingrese otro numero entero" << endl;
    cin >> b;
    cout << "Ingrese otro numero entero" << endl;
    cin >> c;
    if (a>b)
        mayor=a;
    else
        mayor=b;
    if (c>mayor)
        mayor=c;
    cout << "El mayor numero es: "<< mayor << endl;
    return 0;
}
