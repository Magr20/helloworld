#include <iostream>

using namespace std;

void imprimirDigitos(int a){
    int b=a%10000;
    int c=(a-b)/10000;
    int d=b%1000;
    int e=(b-d)/1000;
    int f=d%100;
    int g=(d-f)/100;
    int h=f%10;
    int i=(f-h)/10;
    cout<<c<<'\t'<<e<<'\t'<<g<<'\t'<<i<<'\t'<<h<<endl;
   }

int contarDigitos(int n){
    int aux=1,k=0;
    while(n>=aux){
        aux=aux*10;
        k++;
        }
    return k;
    }

bool esPalindromo(int n){
    int aux1,aux2,aux3,aux4;
    aux1=n/10000;
    aux2=n%10;
    aux3=(n/1000)-aux1*10;
    aux4=(n%100)/10;
    if(aux1==aux2&&aux3==aux4)
        return true;
    return false;
    }

int calcularFib(int n){
    int aux1=1,aux2=1,s,k=2;
    if (n==1||n==0)
        return 1;
    while(n>=k){
        s=aux1+aux2;
        aux1=aux2;
        aux2=s;
        k++;
        }
    return s;
    }

bool esNumero(char a){
    int n=static_cast<int>(a);
    if (n >= 48 && n <= 57)
        return true;
    return false;
    }

bool esLetra(char a){
    int n = static_cast<int>(a);
    cout<<n<<endl;
    if ((n>=65 && n<=90)||(n>=97 && n<=122))
        return true;
    return false;
    }
char may_Min(char n){
    if (n>=65 && n<=90)//mayuscula
        return static_cast<char>(n+32);
    return static_cast<char>(n-32);
    }


int main()
{
    //int n;
    char n;
    cin >> n;

    //imprimirDigitos(n);
    //cout << contarDigitos(n);
    //cout<< (esPalindromo(n)? "Es palindromo" : "No es palindromo") <<endl;//Corregir
    //cout << calcularFib(n);
    //cout << esNumero(n);

    if (esLetra(n))
        cout << may_Min(n);
    else if (esNumero(n))
        cout << "Es numero" << endl;
    else
        cout << "No es numero ni letra" << endl;

    return 0;
}

