#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"

/**
 * Clase que implementa una Pila generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class Pila {
private:
    Nodo<T> *tope;

public:
    Pila();

    ~Pila();

    void push(T dato);

    T pop();

    bool esVacia();
};


/**
 * Constructor de la clase Pila
 * @tparam T
 */
template<class T>
Pila<T>::Pila() {
    tope=nullptr;
}


/**
 * Destructor de la clase Lista, se encarga de liberar la memoria de todos los nodos
 * utilizados en la lista
 * @tparam T
 */
template<class T>
Pila<T>::~Pila() {

    //creamos un nodo auxiliar
    Nodo<T> *aux= tope;

    //tope y aux tienen la misma posicion en la lista
    //movemos a tope a la siguiente posicion y borramos aux
    //asignamos a aux a la posicion de tope
    while (aux!= nullptr){
        tope = aux->getNext();
        delete aux;
        aux=tope;
    }

}


/**
 * Inserta un dato en la pila
 * @tparam T
 * @param dato  dato a insertar
 */
template<class T>
void Pila<T>::push(T dato) {

    // creamos un nodo nuevo
    auto *nuevo=new Nodo<T>();

    nuevo->setDato(dato);


    //apuntamos el nodo nuevo hacia el nodo
    nuevo->setNext(tope);


    //creamos un nuevo tope y lo ponemos al final de la fila

    tope= nuevo;
}


/**
 * Obtener el dato de la pila
 * @tparam T
 * @return dato almacenado en el nodo
 */
template<class T>
T Pila<T>::pop() {

    //verificamos que la pila no este vacia
    if (tope== nullptr)
        throw 1;

    //sacamos y guardamos el dato que va a devolver
    T dato=tope->getDato();

    //creamos un auxiliar para poder identificar el nodo a borrar
    Nodo<T> *aux= tope;

    //actualiza la posicion del tope
    tope=tope->getNext();

    //borramos el auxiliar y devolvemos el dato
    delete aux;
    return dato;
}

/**
 * Responde si la pila se encuentra Vacía
 * @tparam T
 * @return
 */
template<class T>
bool Pila<T>::esVacia() {

    return tope== nullptr;

}

#endif //LISTA_H