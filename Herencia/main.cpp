#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
        Animal();
        Animal(string nombre,double peso){
            nombreAnimal=nombre;
            this ->peso=peso;
        }
        void imprimirDatos(){
            cout<<"Animal: "<<nombreAnimal<<endl;
            cout<<"Peso: "<<peso<<endl;
        }
    protected:
        string nombreAnimal;
        double peso;
};

class Mamifero :public Animal{
    public:
        Mamifero(string nombre_,double _peso, bool _tail):
            Animal(nombre_, _peso),cola(_tail){}
        void imprimirExtra(){
            cout<<(cola?"Tiene cola":"No tiene cola")<<endl;
        }
    private:
        bool cola;
};

class Ave :public Animal{
    public:
        Ave(string nombre_,double _peso, int _alas):
            Animal(nombre_, _peso),tamanoAlas(_alas){}
        void imprimirExtra(){
            cout<<"Tamano Alas: "<<tamanoAlas<<endl;
        }
    private:
        int tamanoAlas;
};

int main()
{
    Mamifero perro("Bobby",54,1);
    perro.imprimirDatos();
    perro.imprimirExtra();
    Ave canario("Piolin",5,4);
    canario.imprimirDatos();
    canario.imprimirExtra();
    return 0;
}
