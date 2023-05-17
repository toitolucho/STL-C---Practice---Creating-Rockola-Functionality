#include <iostream>
#include <List>
#include <fstream>
// #include "Artista.cpp"
#include "ArtistaManejadorDatos.cpp"
using namespace std;
#include <sstream>
#include <string>

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
        void guardar(Artista artist)
        {
            //declaramos una variable que permita cargar en memoria un archivo para poder guardar en el mismo
            ofstream cout2;
            //abrimos el archivo en modo de edicion, la variable que hace referencia a dicho archivo es cout2
            cout2.open("artistas.txt", std::ios_base::app);

            //Para manipulacion y concatenacion extensa de cadenas es buena practica utilizar un stringstream para ir cargando todo en ese buffer
            std::stringstream ss;

            //ss es la variable que podria asumir el papel de una consola, es decir cin, donde le vamos pasando los datos que queremos que se vayan acumulando con el operador <<
            ss << artist.getNombre()<< ", " << artist.getProcedencia() <<", " <<artist.getGenero();

            //convertimos el buffer a una cadena nuevamente
            std::string s = ss.str();

            //imprimimos la cadena en el buffer del archivo de texto leido, con esta asignacion, garantizamos que los datos se guarden.
            cout2<< s;
        }
};

