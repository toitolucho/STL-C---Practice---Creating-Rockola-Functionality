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
    void agregarCancion(Cancion c)
    {
        //validar canciones repetidas
        //si la cancion ya existe, no incorporarla
        listaCanciones.push_back(c);
    }
    void eliminarCancion(int nroCancion)
    {
        //quite una cacnion en funcion a la posicion de la cancion
        //listaCanciones.erase
    }
    void verLista()
    {
        //mostrar las canciones
        //Nro cancion  /   Titulo   / duracion (mm:ss)
        //1         Te voy a Extraniar   03:40
        //2         It´s my Life         04:30
        //3         Bla Bla Bla          07:20
    }
    Cancion buscarCancion(string titulo)
    {
        //recorra el vector y compare los titulos
        Cancion c;
        return c;
    }
};