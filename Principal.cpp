#include <iostream>
#include <vector>
#include "PlayList.cpp"
using namespace std;

void imprimirRocola(vector<Cancion> lista)
{
    for(int i = 0; i<lista.size(); i++)
    {
        cout<<lista[i].getTitulo()<<endl;
    }
}

int main()
{   

    //llenar un vector de 30 canciones fijas, una rocola
    vector<Cancion> rocola;
    //rocola.push_back(Cancion("Hola mundo",3,4, Genero.rock));
    //rocola.push_back(Cancion("Bla bla ", 3545, Artista("Adolfo", "Mexico", Genero.Rock)));
    rocola.push_back(Cancion("Cancion introductoria", 4, 25));
    Tiempo t1;
    t1.minutos = 5;
    t1.segundos = 16;
    rocola.push_back(Cancion("Cancion prueba", t1));
    rocola.push_back(Cancion("Un Atardecer", t1, Artista()));
    rocola.push_back(Cancion());
    
    //cout<<"Hola Mundo"<<endl;
    cout<<"Creando funcionalidad de una Rockola"<<endl;
    imprimirRocola(rocola);

    //crear 3 playlist list1, listFavoritos, listaLatinos
    // PlayList list1;
    // PlayList listaFavoritos, listaLatinos;

    //como agregar la primera cancion de la rockola en la list1
    //list1.agregarCancion(rocola[0]);





    return 0;
}