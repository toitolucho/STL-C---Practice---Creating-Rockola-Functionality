#include <iostream>
#include <vector>
#include "PlayList.cpp"
using namespace std;

void imprimirRocola(vector<Cancion> lista)
{
    for(int i = 0; i<lista.size(); i++)
    {
        // cout<<lista[i].getTitulo()<<
        //     lista[i].getDuracion().minutos<<
        //     lista[i].getDuracion().segundos<< endl;
        cout<<(i+1)<<" "<<lista[i].getTitulo()<<endl;  //lista[i].verInfo();
    }
}

int main()
{  

     //crear 3 playlist list1, listFavoritos, listaLatinos
    PlayList list1;
    PlayList listaFavoritos, listaLatinos;
    // es la referencia a playlist sobre la cual se va hacer operaciones
    PlayList *currentList;
 

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
    int opcion, num, numLista;
    //cout<<"Hola Mundo"<<endl;
    
    // imprimirRocola(rocola);
    // cout<<"Seleccione una cancion introduciendo un numero para agregar a una Playlist";
    // cin>>num;

    cout<<"Creando funcionalidad de una Rockola"<<endl;
    cout<<"\t\t\tROCKOLA USFX"<<endl;
    cout<<"Listas Disponibles, seleccione una de ellas"<<endl;
    cout<<"1.- Lista 1\n2.-Favoritos\n3.- Latinos"<<endl;
    cin>>numLista;
    switch (numLista)
    {
        case 1:
            currentList = &list1;
            break;
        case 2:
            currentList = &listaFavoritos;
            break;
        case 3:
            currentList = &listaLatinos;
            break;
        default:
            break;
    }
    cout<<"Seleccione la Operacion que desea realizar sobre alguna de ellas"<<endl;
    cout<<"1.- Insertar una Cancion"<<endl;
    cout<<"2.- Eliminar una Cancion"<<endl;
    cout<<"3.- Buscar una Cancion"<<endl;
    cout<<"4.- Ver la Lista"<<endl;
    cout<<"5.- Importar Lista"<<endl;
    cout<<"6.- Clonar Lista"<<endl;
    cout<<"7.- Salir"<<endl;
    cin>>opcion;
    switch (opcion)
    {
        case 1:
            //mostrar las canciones disponibles en la rockola
            //solicite que tipo de vista desea ver 
            //  1)general o  2)resumida

            // llame a la funcion adecuada para ver la info segun la opcion
            /* code */
            break;
        case 2:
            //solicite un numero de cancion que desea eliminar
            //valide si dicho parametro es correcto
            //llamando la funcion existeNroCancion() de la clase
            /* code */
            break;    
        case 3:
            //lea una cadena para solicitar el texto que desea buscar
            // y llame a la funcion de busqueda que debe indicar si existe dicho elemento o no
            /* code */
            break;
        case 4:
            //muestre la lista con sus elementos

            /* code */
            break;
        case 5:
            // debe mostrar las listas disponibles para copiar, excluyendo la que se esta trabajando
            //por decir si trabajo en la lista 1
            // se debe mostrar la lista de favoritos y latinos, para poder importarlas

            /* code */
            break;
        case 6:
        //debe llamar a la funcion de clonar y seleccionar que lista desea clonar
        //misma logica del anterior caso
            /* code */
            break;
        case 7:
            /* code */
            break;
    default:
        break;
    }
    
    // if(numLista == 1)
    // {
    //     list1.agregarCancion(rocola[num-1]);
    // }   
   
    //Seleccione cancion
    //1 cancion blab
    //2 cancion blelbe
    //3 cancion 334
    //Seleccione sobre que playlist quiere trabajar
    //1 Lista 1
    //2 lista Favoritos
    //3 lista latinos
    

    //como agregar la primera cancion de la rockola en la list1
    //list1.agregarCancion(rocola[0]);





    return 0;
}