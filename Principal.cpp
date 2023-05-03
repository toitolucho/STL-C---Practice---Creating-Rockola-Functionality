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
enum OpcionPrincipal{ Insetar, Eliminar, Buscar, VerResumen, VerDetalle, Importar, Clonar, Salir, SeleccionarLista };

const int NroListas = 4;

OpcionPrincipal mostrarMenuPrincipal()
{
    string opciones[9] = {"Insetar", "Eliminar", "Buscar", "VerResumen", "VerDetalle", "Importar", "Clonar", "Salir","SeleccionarLista"};
    int op;
    cout<<"Seleccione una opcion que desea realizar sobre la lista actual"<<endl;
    for ( int opc = Insetar; opc != SeleccionarLista; opc++ )
    {
        OpcionPrincipal foo = static_cast<OpcionPrincipal>(opc);
        cout<<((int) opc+1)<<".- "<<opciones[((int)opc)]<<endl;
    }
    
    cin>>op;
    return (OpcionPrincipal) (op-1);
}
int main()
{  

     //crear 3 playlist list1, listFavoritos, listaLatinos
    PlayList list1, listaRock("Rock Favorites","Mejores del 2000");
    PlayList listaFavoritos("Mis Favoritos", "Estas son mis favoritos de spotify"), listaLatinos("Lista Latinos","Las mejores del 2020");
    // es la referencia a playlist sobre la cual se va hacer operaciones
    PlayList *currentList, *targetList;
    PlayList listas[NroListas] = {list1, listaFavoritos, listaLatinos, listaRock};
    OpcionPrincipal opcion;

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
    int opcion2, num, numLista;
    //cout<<"Hola Mundo"<<endl;
    
    // imprimirRocola(rocola);
    // cout<<"Seleccione una cancion introduciendo un numero para agregar a una Playlist";
    // cin>>num;

    cout<<"Creando funcionalidad de una Rockola"<<endl;
    cout<<"\t\t\tROCKOLA USFX"<<endl;
    while(true)
    {
        cout<<"Listas Disponibles, seleccione una de ellas"<<endl;
        // cout<<"1.- Lista 1\n2.-Favoritos\n3.- Latinos"<<endl;
        for(int i=0; i<NroListas; i++)
        {
            cout<<(i+1)<<".- ";
            listas[i].verInfo();
        }
        cin>>numLista;

        currentList = &listas[numLista-1];
        // switch (numLista)
        // {
        //     case 1:
        //         currentList = &list1;
        //         break;
        //     case 2:
        //         currentList = &listaFavoritos;
        //         break;
        //     case 3:
        //         currentList = &listaLatinos;
        //         break;
        //     default:
        //         break;
        // }

        opcion = mostrarMenuPrincipal();
        switch (opcion)
        {
        case Insetar:
            /* code */
            imprimirRocola(rocola);
            cout<<"Seleccione una cancion ingresando su numero"<<endl;
            cin>>num;
            currentList->agregarCancion(rocola[num]);
            break;
        case Eliminar:
            currentList->verListaResumen();        
            cout<<"Ingrese el nro de cancion que desea eliminar"<<endl;
            cin>>num;
            currentList->eliminarCancion(num);
            /* code */
            break;
        case Buscar:
            /* code */
            break;
        case VerResumen:
            currentList->verListaResumen();
            /* code */
            break;
        case VerDetalle:
            /* code */
            currentList->VerListaCompleta();
            break;
        case Importar:
            /* code */
            for(int i=0; i<NroListas; i++)
            {
                if(&listas[i] != currentList)
                {
                    cout<<(i+1)<<".-";
                    listas[i].verInfo();
                }
            }
            cin>>num;
            targetList = &listas[num-1];

            currentList->importarLista(*targetList);
            break;
        case Clonar:
            /* code */
            break;
        case SeleccionarLista:
            /* code */
            break;
        default:
            break;
        }
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