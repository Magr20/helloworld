#include <iostream>

using namespace std;

int main()
{
    /**
    int a;
    cout << "Ingrese numero: ";
    cin >> a;
    //*/
    //Imprimir Digitos con tabulación
    /**
    int b=a%10000;
    int c=(a-b)/10000;
    int d=b%1000;
    int e=(b-d)/1000;
    int f=d%100;
    int g=(d-f)/100;
    int h=f%10;
    int i=(f-h)/10;
    cout<<c<<'\t'<<e<<'\t'<<g<<'\t'<<i<<'\t'<<h<<endl;
    //*/

    //Contar digitos
    /**
    int aux=1,k=0;
    while(a>=aux){
        aux=aux*10;
        k++;
        }
    cout<<"su numero de digitos es: "<<k;
    //*/

    //Verificar si es palíndromo
    /**
    int aux1,aux2,aux3,aux4;
    aux1=a/10000;
    aux2=a%10;
    aux3=(a/1000)-aux1*10;
    aux4=(a%100)/10;
    cout <<((aux1==aux2&&aux3==aux4)?"Palindromo":"No es palindromo");
    //*/

    //Imprimir n elementos de la secuencia fibonacci
    /**
    int c=1,b=1,aux=2;
    cout << " " << 1;//1
    if (a > 1)//2
        cout << " " << 1;
    if (a > 2){//3 a +
        while (a>2){
            aux=c+b;
            c=b;
            b=aux;
            cout << " " << aux;
            a--;
        }
    }
    //*/



    /**
    char a;
    cout << "Ingrese caracter: ";
    cin >> a;
    //*/

    //Verifica si es un número
    /**
    int n=static_cast<int>(a);
    cout << ((n >= 48 && n <= 57)?"Es numero":"No es numero");
    //*/

    //Si es una letra devuelve su minuscula o mayuscula
    /**
    int n=static_cast<int>(a);
    if ((n>=65 && n<=90)||(n>=97 && n<=122))
        cout << ((n>=65 && n<=90)?static_cast<char>(n+32):static_cast<char>(n-32));
        //Es mayúscula o minúscula
    else
        cout << ((n>=48 && n<=57)?"Es numero":"No es letra ni numero");
    //*/


    return 0;
}
