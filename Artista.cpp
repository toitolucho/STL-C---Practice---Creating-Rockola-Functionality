#include <iostream>
using namespace std;

#ifndef GRANDPARENT_H
#define GRANDPARENT_H

enum Genero {Rock, Baladas, Cumbia, Romatica };
class Artista
{
    private:
    string nombre;
    string procedencia;
    Genero genero;



    public :
    void verInfo()
    {

    }

    Artista()
    {
        nombre = "Artista 1";
        procedencia = "Canada";
        genero = Rock;
    }

    string getNombre(){
        return nombre;        
    }
    string getProcedencia(){
        return procedencia;        
    }
    Genero getGenero(){
        return genero;        
    }
};

#endif /* GRANDPARENT_H */