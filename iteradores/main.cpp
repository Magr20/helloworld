#include <iostream>

using namespace std;

/**
Tarea completa, todos las partes funcinan con los valores iniciales de a,b,c los cuales no estan comentados
Recibe una entrada en a, la cual es ignorada en el segundo problema pero vital para los demás
Está comentado con dos slash lo que ejecuta cada parte de código comentada entre "/**" y  "* /"
Para ejecutar una parte del programa colo quitar o comentar las líneas de  "/**" y  "* /"
PD: se trabaja mejor sin presion
*/

int main()
{
    int a, b=1, c=0;
    cin>>a;
    //Indica si es  potencia de dos
    /**
    m=1;
    while(m<n){
        m=m*2;
    }
    if (n==m)
        cout << "Es potencia de dos" << endl;
    else
        cout << "No es potencia de dos"<<endl;
    */

    //Verifica si el número es primo WHILE
    /**
    while(b<a){
        if (!(a%b))
            c++;
        b++;
    }
    if ((c-1)){
        cout << "No es primo" << endl;
    }
    else
        cout<<"Es primo"<<endl;
    */

    //Verifica si el número es primo FOR
    /**
    for(b;b<a;b++){
        if (!(a%b))
            c++;
    }
    if ((c-1)){
        cout << "No es primo" << endl;
    }
    else
        cout<<"Es primo"<<endl;
    */

    //Numeros primos del 1 al 100 FOR
    /**
    cout <<"Los numeros primos del 1 al 100 son:"<<endl;
    for (a=1;a<100;a++){
        for(b=1;b<a;b++){
            if (!(a%b))
                c++;
        }
        if (!(c-1))
            cout <<a<<"  ";
        c=0;
    }
    */

    //Numeros primos del 1 al 100 WHILE
    /**
    cout <<"Los numeros primos del 1 al 100 son:"<<endl;
    a=1;
    while (a<100){
        b=1;
        while(b<a){
            if (!(a%b))
                c++;
            b++;
        }
        if (!(c-1))
            cout <<a<<"  ";
        c=0;
        a++;
    }
    */

    //Encuentra los numeros perfectos WHILE
    /**
    while(b<a){
        if (!(a%b)){
            c=c+b;
        }
        b++;
    }
    if (c==b)
        cout<<"Es un numero PERFECTO"<<endl;
    else
        cout<<"No es un numero PERFECTO"<<endl;
    */

    //Encuentra los numeros perfectos FOR
    /**
    for(b;b<a;b++){
        if (!(a%b)){
            c=c+b;
        }
    }
    if (c==b)
        cout<<"Es un numero PERFECTO"<<endl;
    else
        cout<<"No es un numero PERFECTO"<<endl;
    */

    return 0; //Verifica si el número es primo WHILE
    /**
    while(b<a){
        if (!(a%b))
            c++;
        b++;
    }
    if ((c-1)){
        cout << "No es primo" << endl;
    }
    else
        cout<<"Es primo"<<endl;
    */

    //Verifica si el número es primo FOR
    /**
    for(b;b<a;b++){
        if (!(a%b))
            c++;
    }
    if ((c-1)){
        cout << "No es primo" << endl;
    }
    else
        cout<<"Es primo"<<endl;
    */

    //Numeros primos del 1 al 100 FOR
    /**
    cout <<"Los numeros primos del 1 al 100 son:"<<endl;
    for (a=1;a<100;a++){
        for(b=1;b<a;b++){
            if (!(a%b))
                c++;
        }
        if (!(c-1))
            cout <<a<<"  ";
        c=0;
    }
    */

    //Numeros primos del 1 al 100 WHILE
    /**
    cout <<"Los numeros primos del 1 al 100 son:"<<endl;
    a=1;
    while (a<100){
        b=1;
        while(b<a){
            if (!(a%b))
                c++;
            b++;
        }
        if (!(c-1))
            cout <<a<<"  ";
        c=0;
        a++;
    }
    */

    //Encuentra los numeros perfectos WHILE
    /**
    while(b<a){
        if (!(a%b)){
            c=c+b;
        }
        b++;
    }
    if (c==b)
        cout<<"Es un numero PERFECTO"<<endl;
    else
        cout<<"No es un numero PERFECTO"<<endl;
    */

    //Encuentra los numeros perfectos FOR
    /**
    for(b;b<a;b++){
        if (!(a%b)){
            c=c+b;
        }
    }
    if (c==b)
        cout<<"Es un numero PERFECTO"<<endl;
    else
        cout<<"No es un numero PERFECTO"<<endl;
    */

}
