#include <iostream>
#include <List>
#include "Artista.cpp"
using namespace std;

class ArtistaManejadorDatos
{

    public:
        
        virtual list<Artista> cargar();
        virtual void guardar();
};