#include <iostream>
#include <List>
#include "Cancion.cpp"
using namespace std;
#ifndef CancionManejadorDatos_H
#define CancionManejadorDatos_H

class CancionManejadorDatos
{

    public:
        
        virtual list<Cancion> cargar() = 0;
        virtual void guardar(Cancion cancion) = 0;
};

#endif