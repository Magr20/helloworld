#include <iostream>

using namespace std;

int main()
{
    /**
    int a;
    cout<<"Ingrese un numero de 5 digitos: ";
    cin>>a;
    int b=a%10000;
    int c=(a-b)/10000;
    int d=b%1000;
    int e=(b-d)/1000;
    int f=d%100;
    int g=(d-f)/100;
    int h=f%10;
    int i=(f-h)/10;
    cout<<c<<'\t'<<e<<'\t'<<g<<'\t'<<i<<'\t'<<h;
    */
    /**
    int n;
    cout<<"n:";
    cin>>n;
    char=a='n';
    cout<<"es un numero";
    return 0;
    */
    /**
    int n,aux=1,k=0;
    cin>>n;
    while(n>=aux){
        aux=aux*10;
        k++;
    }
    cout<<k;
    */
    /**
    int n,aux1,aux2,aux3,aux4;
    cout<<"Ingrese un numero de 5 digitos";
    cin>>n;
    aux1=n/10000;
    aux2=n%10;
    aux3=(n/1000)-aux1*10;
    aux4=(n%100)/10;
    if(aux1==aux2&&aux3==aux4){
        cout<<"Es palindromo";
    }
    */
    int n,aux1=1,aux2=1,s,k=2;
    cin>>n;
    if (n==1||n==0)
        cout<<1;
    else{
        while(n>=k){
            s=aux1+aux2;
            aux1=aux2;
            aux2=s;
            k++;
        }
        cout<<s;
    }
}
