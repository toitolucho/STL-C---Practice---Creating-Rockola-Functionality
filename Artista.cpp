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
        cout<<nombre<<" "<<procedencia<<" "<<genero<<endl;
    }

    Artista()
    {
        nombre = "Shakira";
        procedencia = "Colombia";
        genero = Rock;
    }

    Artista(string nom, string pro, Genero gen)
    {
        nombre = nombre;
        procedencia = procedencia;
        genero = gen;
    }

    Artista(string nom, string pro, string gen)
    {
        nombre = nom;
        procedencia = pro;
        if(gen == "Rock")
            genero = Rock;
        if(gen == "Baladas")
            genero = Baladas;
        if(gen == "Cumbia")
            genero = Cumbia;
        if(gen == "Romatica")
            genero = Genero::Romatica;
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