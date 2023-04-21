#include<iostream>

using namespace std;
#define MAX 5


// Arreglo.
int edades [MAX];
int pos=0;//posicion del elemento

void agregarEdad(int edad);
bool hayEspacio();
void mostrarEdades();
bool esMayor(int edad);
int menu();


void agregarEdad(int edad){
    edades[pos] = edad;
    pos++;
}

bool hayEspacio(){
    return pos < MAX;

}

void mostrarEdades(){
    for(int i =0; i < pos; i++){
        cout << edades[i] << endl;

    }
}

bool esMayor(int edad){
    return edad >= 18;
}

void mostrarEdadesMayores()
{

    for(int i =0; i < pos; i++)
    {
        int edad = edades[i];
        if (esMayor(edad)){

        cout << edades[i] << endl;
        }
    }
}

int menu(){
    int opcion;
    cout <<"Listado de Edades" << endl;
    cout <<"1. Agregar edad\n";
    cout <<"2. Mostrar edades\n";
    cout <<"3. Mostrar edades mayores o igual a 18\n";
    cout <<"4. Salir\n";
    cout <<"Digite la opcion: ";
    cin >> opcion;
    return opcion;
}