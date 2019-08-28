#include <iostream>

using namespace std;

int main()
{
//    int n;
//    int m;
//    cin>>n;
//    /**
//    m=1;
//    while(m<n){
//        m=m*2;
//    }
//    if (n==m)
//        cout << "Es potencia de dos" << endl;
//    else
//        cout << "No es potencia de dos"<<endl;
//    */
//
//    /**
//    programa que diga si es primo o no
//    */
//    m=(n/2)+1;
//    cout << m;
//    while(m>0){
//        if (n%m){
//            m--;
//        }
//        else{
//            cout << "No ";
//            m=0;
//        }
//
//
//    }
//    cout << "es primo";

//    int m;
//    int n;
//    int k;
//    cin>>m;
//    n=m-1;
//    while (n>0)
//    {
//        k=m/n;
//        if (n==k*m)
//        {
//            cout << k*m;
//            cout << "no es ";
//            n=0;
//        }
//        else
//            n--;
////
////    }
//
//    cout << "compuesto ";

//    int a,b=1,c=0;
//    cin >>a;
//    while (b<a)
//    {
//        if (c==a)
//        {
//            cout << "Es perfecto ";
//            b=a;
//        }
//
//        else
//        {
//            c=c+b;
//            b++;
//        }
//    }

    int a,b,c;
    cin>>a;
    b=a/2;
    while (b>0)
    {
        if (a%b)
            cout<<a%b;
        b--;
    }





    return 0;
}
