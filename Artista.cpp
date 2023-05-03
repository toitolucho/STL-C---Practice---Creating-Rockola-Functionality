#include <iostream>
using namespace std;

enum Genero {Rock, Baladas, Cumbia, Romatica };
enum EstadoCivil {Soltero, Casado, Divorciado, Viudo};
class Artista
{
    private:
    string nombre;
    string procedencia;
    Genero genero;
    EstadoCivil estado;
    // string estado;
    public :
    Artista()
    {
        estado = Soltero;
        // estado = "Soltero";
        // estado = "soltero";
        // estado = "oltero";
    }

    string verGenero()
    {
        switch (genero)
        {
        case Rock:
            return "Rock";
            break;
        case Baladas:
            return "Baladas";
            break;
        case Cumbia:
            return "Cumbia";
            break;
        case Romatica:
            return "Romantica";
            break;
        default:
            break;
        }
    }
    void verInfo()
    {
        cout<<"Artista "<<nombre<<", Genero "<<verGenero();
    }
};