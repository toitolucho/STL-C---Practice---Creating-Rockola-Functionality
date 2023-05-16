#include <iostream>
#include <List>
#include <fstream>
// #include "Artista.cpp"
#include "ArtistaManejadorDatos.cpp"
using namespace std;

class ArtistaManejadorDatosArchivo: public ArtistaManejadorDatos 
{


    public:

        ArtistaManejadorDatosArchivo()
        {
            cout<<"Creating subclass type"<<endl;
        }
        list<Artista> cargar()
        {
            ifstream cin2("artistas.txt");
            string nombre, procedencia, genero;

            int nro =1;
            //la funcion peek() verifica que no estemos al final del archivo
            while(cin2.peek() != EOF)// corroboramos que no hayamos llegado a la ultima linea, es decir al final del archivo
            {
                //leemos todo lo que podamos donde se encuentra el cursor, (en la primera iteracion al principio) hasta donde encontremos una primera coma
                getline(cin2,nombre,',');
                // continuacion leemos hasta encontrar otra coma, que seria el dato asociado a la procednecia
                getline(cin2,procedencia,',');
                // finalmente leemos desde donde este el cursor, toda la linea, que seria el resto de la informacion asociada al genero
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

