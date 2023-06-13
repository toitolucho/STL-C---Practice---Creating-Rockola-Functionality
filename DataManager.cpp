#include <iostream>
#include "ArtistaManejadorDatos.cpp"
#include "CancionManejadorDatos.cpp"
using namespace std;

class DataManager
{
    private :
        //referencia a la unica instancia posible de la clase
        static DataManager *instance;

        //referencias a los manejadores de datos
        // de los artistas y canciones
        ArtistaManejadorDatos *artistaDataManager;
        CancionManejadorDatos *cancionDataManager;

        DataManager(ArtistaManejadorDatos &amd,
                    CancionManejadorDatos &cmd )
        {
            //apuntamos a la referencia de amd
           artistaDataManager = &amd;
           //apuntamos a la referencia de amd con el operador &
            cancionDataManager = &cmd;
        }

    public:
        static DataManager* getInstance(
                    ArtistaManejadorDatos &amd,
                    CancionManejadorDatos &cmd
                    )
        {
            if(instance == nullptr)
            {
                cout<<"creando instancia"<<endl;
                 instance = new DataManager(amd,cmd);
            } 
            return instance;  
        }

};
DataManager* DataManager::instance= nullptr;