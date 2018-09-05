#ifndef PROGRAMACION3_NODO_H
#define PROGRAMACION3_NODO_H

template <class T>
class Nodo {
private:
    T dato;
    Nodo<T> *next;
public:
    T getDato() const {
        return dato;
    }

    void setDato(T dato) {
        Nodo::dato = dato;
    }

    Nodo *getNext() const {
        return next;
    }

    void setNext(Nodo<T> *next) {
        this->next = next;
    }

};


#endif //PROGRAMACION3_NODO_H