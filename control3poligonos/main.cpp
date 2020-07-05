#include <iostream>

using namespace std;

class Polygon {
private:
    int width,height;
public:
    Polygon(){};
    Polygon(int a,int b): width(a),height(b){}
    int area (void){return 0;}
    void printarea(){
        cout<<this->area() << '\n';
    }
};
class ArrayPolygons{
    Polygon *arr;
    int sizee;
public:
    ArrayPolygons(){
        sizee=0;
        arr=new Polygon[sizee];
    }//Default constructor
    ArrayPolygons(Polygon x[],int sizee){
        this->sizee=sizee;
        this->arr=new Polygon[sizee];
        for (int i=0;i<sizee;i++)
            *(arr+i)=x[i];
    }//Constructor con parametros
    ArrayPolygons(ArrayPolygons &o){
        this->sizee=o.sizee;
        this->arr=new Polygon[o.sizee];
        for (int i=0;i<o.sizee;i++)
            arr[i]=o.arr[i];
    }//Constructor Copia
    ~ArrayPolygons(){delete[] this->arr;}//Destructor
private:
    Polygon *aux;
    void redimensionar(int sizee){
        aux=new Polygon[sizee];
        for (int i=0;i<this->sizee;i++)
            *(aux+i)=*(arr+i);
        delete[] arr;
        this->sizee=sizee;
        arr=aux;
    }
public:
    void insertarFinal(Polygon elemento){
        redimensionar(sizee+1);
        *(arr+sizee-1)=elemento;
    }
    void eliminarFinal(){redimensionar(sizee-1);}
    void insertar(int pos,Polygon elemento){
        redimensionar(sizee+1);
        for (int i=sizee-1;i>pos;i--)
            arr[i]=arr[i-1];
        arr[pos]=elemento;
    }
};

int main()
{
    int tam=5;
    Polygon orden[tam];
    for (int i=0;i<tam;i++){
        orden[i]=Polygon(1,2);
        orden[i].printarea();
    }
    ArrayPolygons lista();
    ArrayPolygons lista1(orden,tam);
    ArrayPolygons lista2=lista1;
    Polygon extra(2,1);
    lista2.insertarFinal(extra);
    lista2.eliminarFinal();
    lista2.insertar(0,extra);
    if (true){
        Polygon hola[]={Polygon(1,2)};
        ArrayPolygons listaa(hola,1);
    }
    return 0;
}
