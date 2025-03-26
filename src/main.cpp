#include <iostream>
#include "Mascota.hpp"

int main(int argc, char const *argv[])
{
    std::cout<<"Hola mundo"<<std::endl;

    Mascota firulais;

    for (size_t i = 0; i < 3; i++)
    {
        firulais.Golpear();
    }
    
    std::cout<<"Vida actual: "<<firulais.LeerVida()<<std::endl;
    for (size_t i = 0; i < 2; i++)
    {
        firulais.Acariciar();
    }

    std::cout<<"Vida actual: "<<firulais.LeerVida()<<std::endl;

    
    return 0;
}
