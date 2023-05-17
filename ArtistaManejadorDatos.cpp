#include <iostream>
#include <List>
#include "Artista.cpp"
using namespace std;

class ArtistaManejadorDatos
{

    public:
        
        virtual list<Artista> cargar() = 0;
        virtual void guardar(Artista artist) = 0;
};