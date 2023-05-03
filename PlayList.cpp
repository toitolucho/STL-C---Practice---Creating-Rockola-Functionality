#include <iostream>
#include <vector>
#include "Cancion.cpp"
using namespace std;

class PlayList
{
private:
    string nombreLista;
    string descripcion;
    vector<Cancion> listaCanciones;
public:

    PlayList()
    {
        nombreLista = "Lista 1";
        descripcion ="Esta es la primera Lista";

    }

    PlayList(string nombre, string desc)
    {
        nombreLista = nombre;
        descripcion = desc;
        
    }

    vector<Cancion> getListaCanciones()
    {
        return listaCanciones;
    }
    void agregarCancion(Cancion c)
    {
        //validar canciones repetidas
        //si la cancion ya existe, no incorporarla
        listaCanciones.push_back(c);
    }
    void eliminarCancion(int nroCancion)
    {
        //quite una cacnion en funcion a la posicion de la cancion
        //listaCanciones.erase(listacaciones[nrocancion-1]);
        listaCanciones.erase(listaCanciones.begin()+(nroCancion-1));
       
    }
    void verListaResumen()
    {
        //mostrar las canciones Resumen
        //Nro cancion  /   Titulo   / duracion (mm:ss)
        //1         Te voy a Extraniar   03:40
        //2         It´s my Life         04:30
        //3         Bla Bla Bla          07:20
        for(int i=0; i<listaCanciones.size(); i++)
        {
            cout<<(i+1)<<".- ";
            listaCanciones[i].verInfo();
        }
    }
    void VerListaCompleta()
    {
        // mustra el nro de cancion, titulo, duracion, artista y genero
        for(int i=0; i<listaCanciones.size(); i++)
        {
            listaCanciones[i].verTodaInfo();
        }
    }
    Cancion buscarCancion(string titulo)
    {
        //recorra el vector y compare los titulos
        Cancion c;
        return c;
    }
    
    void limpiarLista()
    {
        //limpiar la lista
        //eliminar todos sus elementos
        listaCanciones.clear();
    }

    void importarLista(PlayList &lista)
    {
        //debe copiar los valores de la playlist parametro de la funcion lista
        // a la lista actual, utilizando las funciones definidas dentro de la clase
        //  agregarCancion()
        for(int i=0; i<lista.getListaCanciones().size(); i++)
        {
            agregarCancion(lista.getListaCanciones()[i]);
        }
    }
    void clonarLista(PlayList &lista)
    {
        //debe copiar los valores de la playlist parametro de la funcion lista
        // a la lista actual, utilizando las funciones definidas dentro de la clase
        //  limpiarLista()
        //y luego agregarCancion() mientras recorre el vector

        limpiarLista();
        importarLista(lista);
    }

    bool existeNroCancion(int pos)
    {
        bool existe =false;
        //implementar la logica para ver si dicho indice existe en la lista de canciones
        if(pos>=0 && pos<listaCanciones.size())
            existe = true;
        //listaCanciones.erase(2);
        return existe;
    }

    void verInfo()
    {
        cout<<nombreLista<< "("<<descripcion<<")"<<endl;
    }

};