#include <iostream>
#include "Artista.cpp"
using namespace std;

#ifndef ARTISTA_H
#define ARTISTA_H

struct Tiempo
{
    int minutos;
    int segundos;
};
class Cancion
{
    private:
        string titulo;
        Tiempo duracion;
        Artista artista;
        short puntuacion; // 1...5
        
    public :
    Cancion()
    {
        titulo = "Cancion de Despedida";
        duracion.minutos = 3;
        duracion.segundos = 30;
    }
    Cancion(string tit, int min, int seg)
    {
        titulo = tit;
        duracion.minutos = min;
        duracion.segundos = seg;
    }
    Cancion(string tit, Tiempo t)
    {
        titulo = tit;
        duracion = t;
    }
    Cancion(string tit, Tiempo t, Artista art)
    {
        titulo = tit;
        duracion = t;
        artista = art;
    }
    Cancion(string tit, Tiempo t, Artista &art, int punt)
    {
        titulo = tit;
        duracion = t;
        artista = art;
        puntuacion = punt;
    }
    Cancion(string tit, int min, int seg, Artista &art, int punt)
    {
        titulo = tit;
        duracion.minutos = min;
        duracion.segundos = seg;
        artista = art;
        puntuacion = punt;
    }
    void verInfo()
    {
        cout<<titulo<<" "<<duracion.minutos<< " : "<<duracion.segundos<<"\t\t"<<puntuacion<<endl ;
    }
    void verTodaInfo()
    {
        //Debe mostrar toda la infor de la cacncion incluyendo la de su artista
         cout<<titulo<<" "<<duracion.minutos<< " : "<<duracion.segundos<<"\t\t"<<puntuacion<<"\t"<< artista.getNombre()<<  endl ;
    }

    string getTitulo()
    {
        return titulo;
    }

    void setPuntuacion(short puntos)
    {
        puntuacion = puntos;
    }

    int operator<(Cancion b)
    {
        return puntuacion<b.puntuacion;
    }

   

    int operator==(Cancion b)
    {
        return titulo == b.titulo;
    }

    int getTimeinSeconds()
    {
        return duracion.minutos*60 + duracion.segundos;
    }
    void setTiempo(int m, int s)
    {
        duracion.minutos = m;
        duracion.segundos =s;
    }

    
};

#endif /* ARTISTA_H */