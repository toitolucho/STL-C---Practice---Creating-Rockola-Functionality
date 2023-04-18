#include <iostream>
#include <vector>
#include "PlayList.cpp"
using namespace std;

void imprimirRocola(vector<Cancion> lista)
{
    
}

int main()
{   
    //llenar un vector de 30 canciones fijas, una rocola
    vector<Cancion> rocola;
    //rocola.push_back(Cancion("Hola mundo",3,4, Genero.rock));
    //rocola.push_back(Cancion("Bla bla ", 3545, Artista("Adolfo", "Mexico", Genero.Rock)));
    rocola.push_back(Cancion());
    rocola.push_back(Cancion());
    rocola.push_back(Cancion());
    rocola.push_back(Cancion());


    //crear 3 playlist list1, listFavoritos, listaLatinos
    PlayList list1;
    PlayList listaFavoritos, listaLatinos;

    //como agregar la primera cancion de la rockola en la list1
    list1.agregarCancion(rocola[0]);





    return 0;
}