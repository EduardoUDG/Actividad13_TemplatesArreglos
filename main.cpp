#include<iostream>
#include<conio.h>
#include<cstdlib>

#include "arreglo_dinamico.h"
using namespace std;

int main(){
    // indicamos: Clase<tipoDeDato> Objeto;
    ArregloDinamico<string> arreglo; string j;

    cout << "Ingresa 4 strings (insertar_final)" << endl;
    for (size_t i = 0; i<4; i++){
        fflush(stdin);
        cout << i+1 << ": ";
        cin >> j; 
        arreglo.insertar_final(j);
    }

    cout << endl;
    /*------------------------------------------------------ */
    cout << "Ingresa 4 strings (insertar_inicio)" << endl;
    for (size_t i = 0; i<4; i++){
        fflush(stdin);
        cout << i+1 << ": ";
        cin >> j; 
        arreglo.insertar_inicio(j);
    }




    /*------------------------------------------------------ */
    cout << "Mostrando Arreglo:" << endl;
    for (size_t i = 0; i<arreglo.size(); i++){
        cout << arreglo[i] << " | ";
    }
    cout << endl;
    system("pause");
    cout << endl << endl;



    /*------------------------------------------------------ */
    cout << "Insertando en la posicion (2)" << endl;
    arreglo.insertar("Hola",2);
    for (size_t i = 0; i<arreglo.size(); i++){
        cout << arreglo[i] << " | ";
    }
    cout << endl;
    system("pause");
    cout << endl << endl;




    /*------------------------------------------------------ */
    cout << "Eliminando Inicio y Final:" << endl;
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    for (size_t i = 0; i<arreglo.size(); i++){
        cout << arreglo[i] << " | ";
    }
    cout << endl;
    system("pause");
    cout << endl << endl;




    /*------------------------------------------------------ */
    cout << "Eliminando Posicion (1):" << endl;
    arreglo.eliminar(1);
    for (size_t i = 0; i<arreglo.size(); i++){
        cout << arreglo[i] << " | ";
    }
    cout << endl;
    system("pause");
    cout << endl << endl;
    // arreglo.insertar("posicion2",2);
    // arreglo.eliminar_inicio();
    // arreglo.eliminar_final();
    // arreglo.eliminar(4);
    getch();
    return 0;
}
