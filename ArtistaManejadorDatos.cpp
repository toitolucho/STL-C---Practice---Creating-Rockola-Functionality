#include <iostream>
#include <List>
#include "Artista.cpp"
using namespace std;

#ifndef ArtistaManejadorDatos_H
#define ArtistaManejadorDatos_H


class ArtistaManejadorDatos
{

    public:
        
        virtual list<Artista> cargar() = 0;
        virtual void guardar(Artista artist) = 0;
};


#endif /* GRANDPARENT_H */