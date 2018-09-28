#include <iostream>
#include "../Pila/Pila.h"
using namespace std;

int main() {
    std::cout << "Ejercicio 03/02\n" << std::endl;
    int b, a[50];
    Pila<int> pila_A, pila_B;

    cout<<"determinar el tamaño de las pilas: ";
    cin>> b;

    while (b<50) {

        cout << "introduzca los valores de la pila A" << endl;
        for (int i = 0; i < b; ++i) {
            cin >> a[i];
            pila_A.push(a[i]);
        }

        cout << "introduzca los valores de la pila B" << endl;
        for (int i = 0; i < b; ++i) {
            cin >> a[i];
            pila_B.push(a[i]);
        }
    }



    return 0;
}
