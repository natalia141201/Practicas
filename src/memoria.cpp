#include <iostream>
using namespace std;

class Chorizo{
private:
    bool size;
    bool encendido;
    bool otro;
public:
    void Inicializar(){
        size = 1;
        encendido = true;
        otro = true;
    }
    void Ejecutar(){
        cout<<"Ejecutando Chorizo"<<endl;
    }
};

int main(int argc, char const *argv[]){
    cout<<endl<<"---------------------------------------------"<<endl;
    cout<<"Tamaño de memoria"<<endl;    
    cout<<"Tamaño int:"<<sizeof(int)<<endl;
    cout<<"Tamaño char:"<<sizeof(char)<<endl;
    cout<<"Tamaño bool:"<<sizeof(bool)<<endl; 
    cout<<"Tamaño float:"<<sizeof(float)<<endl;
    cout<<"Tamaño double:"<<sizeof(double)<<endl<<endl;
    

    int a = 27;
    int b = 50;
    cout<<endl<<"---------------------------------------------"<<endl;
    cout<<"Memoria Estatica:"<<endl;
    cout<<"Direccion a: "<<&a<<endl;
    cout<<"Valor     a: "<<a<<endl;
    cout<<"Tamaño    a: "<<sizeof(a)<<endl;

    cout<<"Direccion b: "<<&b<<endl;
    cout<<"Valor     b: "<<b<<endl;
    cout<<"Tamaño    b: "<<sizeof(b)<<endl;
    
    cout<<endl<<"---------------------------------------------"<<endl;
    cout<<"Direcciones de memoria:"<<endl;
    int* direccionA = &a;
    cout<<"Valor de DireccionA: "<<direccionA<<endl;
    cout<<"Tamaño puntero: "<<sizeof(bool*)<<endl;
    cout<<"Direccion (&) de Direccion A: "<<&direccionA<<endl;
    cout<<"Indireccion (*) de direccion de A: "<<*direccionA<<endl;

    cout<<endl<<"---------------------------------------------"<<endl;
    cout<<"Arreglos :"<<endl;
    int arreglos[10];
    cout<<"Direccion de arreglo: "<<&arreglos<<endl;
    cout<<"Direccion de arreglo [0]"<<&arreglos[0]<<endl;
    cout<<"Direccion de arreglo [1]"<<&arreglos[1]<<endl;
    cout<<"Direccion de arreglo + 0"<<&arreglos + 0<<endl;
    cout<<"Direccion de arreglo +1"<<&arreglos + 1<<endl;

    cout<<endl<<"---------------------------------------------"<<endl;
    cout<<"Objetos :"<<endl;
    cout<<"Tamaño chorizo: "<<sizeof(Chorizo)<<endl;
    Chorizo pruebas;
    cout<<"Direccion chorizo: "<<&pruebas<<endl;
    
    cout<<endl<<"---------------------------------------------"<<endl;
    cout<<"Memoria Dinamica en C:"<<endl;
    cout<<endl<<"---------------------------------------------"<<endl;
    cout<<"Malloc"<<malloc(sizeof(int))<<endl;
    //Guardar direccion en un puntero
    void* memoriadinamica = malloc((sizeof(int)));

    cout<<endl<<"---------------------------------------------"<<endl;
    cout<<"cast Variables: "<<endl;
    int* punteroentero = (int*)malloc(sizeof(int));
    *punteroentero = 5; 
    cout<<"Direccion :"<<punteroentero<<endl;
    cout<<"Valor :"<<*punteroentero<<endl;

    //Liberar memoria
    free(punteroentero);

    cout<<endl<<"---------------------------------------------"<<endl;
    cout<<"Memoria Dinamica en C++ :"<<endl;
    cout<<endl<<"---------------------------------------------"<<endl;
    cout<<"C : "<<(Chorizo*)malloc(sizeof(Chorizo))<<endl;
    cout<<"C++ : "<<new Chorizo()<<endl;

    // C
    Chorizo* punteroC = (Chorizo*)malloc(sizeof(Chorizo));
    (*punteroC).Inicializar();
    free(punteroC);

    // C++
    Chorizo* punteroCXX = new Chorizo();
    delete punteroCXX;

    //Indireccion vs operador ->

    //Indireccion
    (*punteroCXX).Inicializar();

    //Operador ->
    punteroCXX->Inicializar();

    return 0;

}