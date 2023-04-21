#include <iostream>
#include "funciones.cpp"

using namespace std;

int main()
{

    int cant, edad, i = 0, opcion=0;
   do{
        switch(opcion){
            case 1:
            cout << "Ingrese la edad:" ;
            cin >> edad;
            agregarEdad(edad);
            system("pause");
            break;
            case 2:
            mostrarEdades();
            system("pause");
            break;
            case 3:
            mostrarEdadesMayores();
            system("pause");
            break;
            case 4:
            break;
            default:
            cout << "Opcion invalida...\n";
            system("pause");
            break;
    

        }

   }while(opcion !=4);
    return 0;
}
