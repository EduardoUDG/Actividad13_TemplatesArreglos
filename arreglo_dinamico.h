#ifndef ARREGLO_DINAMICO_H
#define ARREGLO_DINAMICO_H

#include<iostream>
#include<string>
using namespace std;


template <class T>
class ArregloDinamico{
    private:
        T *arreglo;
        size_t tam;
        size_t cont;
        // MAX representa el tamaño maximo inicial de nuestro arreglo
        const static size_t MAX = 100;

    public:
        // Constructor y Destructor
        ArregloDinamico();
        ~ArregloDinamico();

        void insertar_final(const T& v);
        void insertar_inicio(const T& v);
        void insertar(const T& v,size_t p);

        void eliminar_final();
        void eliminar_inicio();
        void eliminar(size_t p);

        size_t size();

        // Sobrecargar Operador []
        string operator[](size_t p){ 
            return arreglo[p];
         }

    private:
        // Metodo privado
        void expandir();


};


template <class T>
ArregloDinamico<T>::ArregloDinamico(){
    arreglo = new T[MAX];
    cont = 0;
    tam = MAX;
}


template <class T>
ArregloDinamico<T>::~ArregloDinamico(){
    delete[] arreglo;
}


template <class T>
void ArregloDinamico<T>::insertar_final(const T& v){
    if(cont == tam){
    expandir();
    }
    arreglo[cont] = v;
    cont++;
}


template <class T>
void ArregloDinamico<T>::insertar_inicio(const T& v){
    if(cont == tam){
        expandir();
    }
    for (size_t i=cont; i>0; i--){
        arreglo[i] = arreglo[i-1];
    }
    arreglo[0] = v;
    cont++;
}

template <class T>
void ArregloDinamico<T>::insertar(const T& v,size_t p){
    if(p>=cont){
        cout << "Posicion no valida" << endl;
        return;
    }
    if(cont == tam){
        expandir();
    }
    for (size_t i=cont; i > p; i--){
        arreglo[i] = arreglo[i-1];
    }
    arreglo[p] = v;
    cont++;
    
}


template <class T>
void ArregloDinamico<T>::eliminar_final(){
    if(cont == 0){
        cout << "Arreglo vacio" << endl;
        return;
    }
    cont--;
}


template <class T>
void ArregloDinamico<T>::eliminar_inicio(){
    if(cont == 0){
        cout << "Arreglo vacio" << endl;
        return;
    }
    for(size_t i=0; i<cont-1; i++){
        arreglo[i] = arreglo[i+1];
    }
    cont--;
}


template <class T>
void ArregloDinamico<T>::eliminar(size_t p){
    if(cont == 0){
        cout << "Arreglo vacio" << endl;
        return;
    }
    for(size_t i=p; i<cont-1; i++){
        arreglo[i] = arreglo[i+1];
    }
    cont--;
}



template <class T>
size_t ArregloDinamico<T>::size(){
    return cont;   
}


template <class T>
void ArregloDinamico<T>::expandir(){
    T *nuevo = new T[tam+MAX];

    for(size_t i=0; i<cont; i++){
        nuevo[i] = arreglo[i];
    }
    delete arreglo;
    arreglo = nuevo;
    tam = tam + MAX;
}













#endif 