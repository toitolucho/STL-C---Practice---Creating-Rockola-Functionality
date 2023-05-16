#include <iostream>
#include <List>
#include "Artista.cpp"
#include "ArtistaManejadorDatos.cpp"
using namespace std;

class ArtistaManejadorDatosArchivo: public ArtistaManejadorDatos 
{
    public:
        list<Artista> cargar()
        {
            list<Artista> listaArtistas;
            // cargar datos desde un archivo de texto
            


            return listaArtistas;
        }
        void guardar()
        {

        }
};

