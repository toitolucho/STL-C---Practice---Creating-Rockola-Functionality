#include <iostream>
#include <List>
#include "Cancion.cpp"
using namespace std;

class CancionManejadorDatos
{

    public:
        
        virtual list<Cancion> cargar() = 0;
        virtual void guardar(Cancion cancion) = 0;
};