#include <iostream>
#include <stack>
#include <deque>
#include <list>
#include <vector>

using namespace std;

template <class T, class Container = deque<T> >
stack<T,Container> getReverseS(stack <T,Container> s1){
    int sizeS=s1.size();//guarda el tamanio
    stack <T,Container> s2;//crea un stack auxiliar
    for (int i=0;i<sizeS;i++){
        s2.push(s1.top());
        s1.pop();
    } //Voltea el stack en s2
    return s2;
}

template <class T, class Container = deque<T> >
ostream & operator <<(ostream &o,stack <T,Container> s1){//recibe copia
    int sizeS=s1.size();
    stack <T,Container> s2(getReverseS(s1));//stack auxiliar inverso
    for (int i=0;i<sizeS;i++){
        o<<s2.top()<<" ";
        s2.pop();
    }//retorna los valores del stack al reves
    o<<"top"<<endl;
    return o;
}

template<class T, class C1=deque<T>>
bool inContainer(T elemento,C1 v1){
    for(int i=0;i<v1.size();i++)
        if (v1[i]==elemento) return true;
    return false;
}

/*
template <class T, class C1=deque<T>, class C2=deque<T> >
//idea aniadir en vector todos los elementos de ambos stacks
stack<T,C1> & operator +(stack <T,C1> s1,stack <T,C2> s2){
    C1 v1;
    stack <T,C1> s3;
    int tamanio=s1.size();
    for (int i=0;i<tamanio;i++){
        if (!inContainer(s1.top(),v1)) v1.push_back(s1.top());
        s1.pop();
    }
    tamanio=s2.size();
    for (int i=0;i<tamanio;i++){
        if (!inContainer(s2.top(),v1)) v1.push_back(s2.top());
        s2.pop();
    }
    cout<<"yei";
    return s3;
}*/

template <class T, class C1=deque<T>>
//idea aniadir en vector todos los elementos de ambos stacks
stack<T,C1> & operator +(stack <T,C1> s1,stack <T,C1> s2){
    stack <T,C1> s3;
    cout<<"pos hasta aqui si funciona jeje";
    return s3;

}



int main()
{
    int a1[]={1,2,3,4,5,6,7,8,9,10};
    deque <int> d1(a1, a1+5);
    deque <int> d2(a1+5, a1+10);
    stack <int> s1(d1);
    stack <int> s2(d2);
    stack <int> s3;
    cout<<s1<<s2;
    s3=s1+s2;
    cout<<"fin de programa";
    return 0;
}
