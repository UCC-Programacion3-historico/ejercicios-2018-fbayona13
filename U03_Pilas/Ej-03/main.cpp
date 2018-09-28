#include <iostream>
#include "../Pila/Pila.h"
using namespace std;

int main() {
    cout << "Ejercicio 03/03\n" << endl;
    int b, a[50];
    Pila<int> pila_a;
    
    cout<< "introduzca tamaño de pila (menor 50): ";
    cin>>b;
    
    while (b<50){

        for (int i = 0; i < b; ++i) {
            cin>> a[i];
            pila_a.push(a[i]);
        }
        
        cout<< "el valor tope es: "<< pila_a.peek();
    }
    
    return 0;
}