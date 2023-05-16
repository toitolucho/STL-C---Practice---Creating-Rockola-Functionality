#include <iostream>
#include <vector>
#include <list>
#include "Cancion.cpp"
#include <algorithm>
using namespace std;

// template <class Compare>
// void sort (Compare comparator);

struct CancionTiempoComparator
{

    bool operator ()( Cancion & c1,  Cancion & c2)
    {
        return c1.getTimeinSeconds() < c2.getTimeinSeconds();
    
    }
};


class PlayList
{
private:
    string nombreLista;
    string descripcion;
    list<Cancion> listaCanciones;
public:
    void agregarCancion(Cancion c)
    {
        //binary_search(listaCanciones.begin(), listaCanciones.end());
        
        //validar canciones repetidas
        //si la cancion ya existe, no incorporarla
        listaCanciones.push_back(c);
    }

    void eliminarCancion(int nroCancion)
    {
        // una lista no tiene una forma de ingresar a un elemento directamente desde un indice, por ello es necesario recorrer la lista a travez de sus enlaces
        //inicialmente apuntamos al primer elemento de la lista
        auto it = listaCanciones.begin();
        //con la funcion *advance* recorremos los enlaces, hasta la posicion necesaria, que en nuestro caso es el nroCancion-1
        std::advance(it, nroCancion-1);
        //para remover una cancion, necesitamos exactamente que cancion queremos eleminar, por ello utilizamos la referencia de it y obtenemos el valor al que apunta 
        //utilizando el operador *
        listaCanciones.remove(*it );
        
    }
    void verListaResumen()
    {
        //mostrar las canciones Resumen
        //Nro cancion  /   Titulo   / duracion (mm:ss)
        //1         Te voy a Extraniar   03:40
        //2         It´s my Life         04:30
        //3         Bla Bla Bla          07:20

        //para ver las canciones sera necesario, hacer un recorrido, entonces necesitamos apuntar al primer elemento de la lista
        //declaramos un iterador(un puntero) hacia el primer elemento
        // la funcion begin() -> nos retorna el primer enlace hacia el primer elemento
        list<Cancion>::iterator it = listaCanciones.begin();
        //realizaremos un bucle, hasta que it apunte a nada, es decir al ultimo
        while(it!= listaCanciones.end())
        {
            //recuerda que it es un puntero que ira recorriendo la lista, por ende para utilizar cualquier funcionalidad del mismo, 
            //debemos utilizar el operador "->"
            it->verInfo();
            //debemos pasar al siguiente elemento, es decir pasar al siguiente enlace
            it++;
        }
    }
    void VerListaCompleta()
    {
        // mustra el nro de cancion, titulo, duracion, artista y genero
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

    void importarLista(PlayList lista)
    {
        //debe copiar los valores de la playlist parametro de la funcion lista
        // a la lista actual, utilizando las funciones definidas dentro de la clase
        //  agregarCancion()

        
    }
    void clonarLista(PlayList lista)
    {
        //debe copiar los valores de la playlist parametro de la funcion lista
        // a la lista actual, utilizando las funciones definidas dentro de la clase
        //  limpiarLista()
        //y luego agregarCancion() mientras recorre el vector
    }

    bool existeNroCancion(int pos)
    {
        bool existe =true;
        //implementar la logica para ver si dicho indice existe en la lista de canciones
        
        auto it = listaCanciones.begin();
        if(pos<listaCanciones.size() )
        {
            //con la funcion *advance* recorremos los enlaces, hasta la posicion necesaria, que en nuestro caso es el nroCancion-1
            std::advance(it, pos-1);
        //listaCanciones.erase(2);
            existe = it!=listaCanciones.end();  
        }
               
        existe = false;
        return existe;
    }

    Cancion getCancionMasCorta()
    {
        listaCanciones.sort(CancionTiempoComparator());
        auto it = listaCanciones.begin();
        //con la funcion *advance* recorremos los enlaces, hasta la posicion necesaria, que en nuestro caso es el nroCancion-1
        
        return *it;
    }

    Cancion getCancionMasLarga()
    {
        listaCanciones.sort(CancionTiempoComparator());
        listaCanciones.reverse();
        auto it = listaCanciones.begin();
        //con la funcion *advance* recorremos los enlaces, hasta la posicion necesaria, que en nuestro caso es el nroCancion-1
        
        return *it;
    }

    list<Cancion> getTopCanciones()
    {
        //DEVUELVE LOS TOP 10 
        return getTopCanciones(10);
    }

    list<Cancion> getTopCanciones(int nro)
    {
        listaCanciones.sort();
        listaCanciones.reverse();
        list<Cancion> listAux;
        int i = 0;
        for(auto it =  listaCanciones.begin(); it!=listaCanciones.end() && i<nro; it++)
        {
            listAux.push_back(*it);
        }
        return listAux;
    }
};