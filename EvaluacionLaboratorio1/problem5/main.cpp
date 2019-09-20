#include <iostream>

using namespace std;

int main()
{
    // El mayor factor primo de 600851475143
    long long n=600851475143;
    int mayor=1;
    for (int i=2;n>1;i++){
        while (!(n%i)){
            n/=i;
            mayor=i;
        }
    }
    cout << mayor << endl;
    return 0;
}
