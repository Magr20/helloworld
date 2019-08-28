#include <iostream>

using namespace std;

int main()
{
    int n,m=1;
    cin>>n;
    while(m<n){
        m=m*2;
    }
    if (n==m)
        cout << "Es potencia de dos" << endl;
    else
        cout << "No es potencia de dos"<<endl;
    return 0;
}
