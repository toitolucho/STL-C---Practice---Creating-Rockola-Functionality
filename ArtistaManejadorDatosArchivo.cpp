#include <iostream>
#include <List>
#include <fstream>
// #include "Artista.cpp"
#include "ArtistaManejadorDatos.cpp"
using namespace std;

class ArtistaManejadorDatosArchivo: public ArtistaManejadorDatos 
{
    public:
        list<Artista> cargar()
        {
            ifstream cin2("artistas.txt");
            string nombre, procedencia, genero;

            int nro =1;
            while(cin2.peek() != EOF)// corroboramos que no hayamos llegado a la ultima linea, es decir al final del archivo
            {
                getline(cin2,nombre,',');
                getline(cin2,procedencia,',');
                getline(cin2,genero);
                cout<<"Nro "<< nro<< ".-  " <<nombre <<" "<< procedencia << " "<< genero <<endl;
                nro++;
            }
            list<Artista> listaArtistas;
            // cargar datos desde un archivo de texto
            


            return listaArtistas;
        }
        void guardar()
        {

        }
};

