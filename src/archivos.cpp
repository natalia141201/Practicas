#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){

    ifstream archivoEntrada;
    ofstream archivoSalida;

//Abrir archivo de salida
archivoSalida.open("archivo_salida.txt");
if (!archivoSalida)
{
    cerr << "Error al abrir el archivo de salida," << endl;
    return 1;
}
//Escribir el archivo de salida
archivoSalida << "Hola, este es un archivo de salida." <<endl;

//Cerrar el archivo de salida
archivoSalida.close();

}

