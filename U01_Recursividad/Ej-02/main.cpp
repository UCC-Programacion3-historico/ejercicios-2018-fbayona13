#include <iostream>
#include "sumatoria.h"

using namespace std;
int main() {
    cout << "Ejercicio 01/02\n" << endl;

    int b;
    cout<<"introduzca cantidad de elementos de la sumatoria: ";
    cin>>b;

    cout<<"-------------------------------------------------"<< endl;
    int vec[b];
    for (int i = 0; i < b; ++i) {
        cin >> vec[i];
    }

    cout << "la sumatoria es: ";
    cout << sumatoria(vec, b)<< endl;

    return 0;
}