#include <iostream>
#include <List>
#include "CancionManejadorDatos.cpp"
#include "ArtistaManejadorDatos.cpp"
#include "Artista.cpp"
#include <fstream>

using namespace std;

class CancionManejadorDatosArchivo:public CancionManejadorDatos
{


    private:
        ArtistaManejadorDatos  *artistaManager;
    public:
        // curar(SerVivo paciente)
        // {

        // }
        CancionManejadorDatosArchivo(ArtistaManejadorDatos  &manejador)
        {
            this->artistaManager = &manejador;
        }

        list<Cancion> cargar()
        {
           // List<Artista> listasArtistas;
           list<Artista> listaArtista = artistaManager->cargar();
            cout<<"Nro de ARtistas "<< listaArtista.size()<<endl;
            list<Cancion> listaCanciones;

            ifstream cin2("canciones.txt");
            // string nombre, procedencia, genero;
            string nombre, smin, sseg, sNroArtista, sPunt, sAux;
            //cin>>a;
            int nro =1;
            //la funcion peek() verifica que no estemos al final del archivo
            while(cin2.peek() != EOF)// corroboramos que no hayamos llegado a la ultima linea, es decir al final del archivo
            {
                //cin2>>nombre>>procedencia>>genero;

                //leemos todo lo que podamos donde se encuentra el cursor, (en la primera iteracion al principio) hasta donde encontremos una primera coma
                getline(cin2,nombre,',');
                // continuacion leemos hasta encontrar otra coma, que seria el dato asociado a la procednecia
                getline(cin2,smin,':');
                // finalmente leemos desde donde este el cursor, toda la linea, que seria el resto de la informacion asociada al genero
                getline(cin2,sseg,' ');

                getline(cin2,sAux,',');
                getline(cin2,sNroArtista,',');
                getline(cin2,sPunt);
                

                cout<<nro<<" Nombre  "<<nombre<<" "<< "Duracion "<<smin<<":"<<sseg<<", "<<sNroArtista<<"  , Puntuacion "<<sPunt  <<endl;
                // cout<<"Nro "<< nro<< ".-  " <<nombre <<" "<< procedencia << " "<< genero <<endl;
                nro++;

                //enlazar al artista por el nroArtista
                list<Artista>::iterator it = listaArtista.begin();
                // it->verInfo();
                advance( it, stoi(sNroArtista)-1);
                // it->verInfo();
                Artista aux = *it;
                // it->verInfo();
                Cancion c(nombre, stoi(smin), stoi(sseg), aux, stoi(sPunt));
                //crear la cancion

                

                // y guardarlo en una lista
                listaCanciones.push_back(c);
            }

            
            // cargar datos desde un archivo de texto
            

            //devolucion de la lista cargada con datos
            // cout<<"Total Canciones "<<listaCanciones.size()<<endl;
            // cout<<"Primera Cancion "; 
            listaCanciones.begin()->verTodaInfo();
            return listaCanciones;

        };
        void guardar(Cancion cancion)
        {
            
        };
};