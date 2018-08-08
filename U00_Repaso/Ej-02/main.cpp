#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {

    Calculadora <int, double > mical;
    Calculadora <double, float> micalc;

    cout << "Ejercicio 00/02\n" << endl;
    cout << mical.sumar(2,3)<< endl;
    cout << mical.restar(2,3)<< endl;
    cout << mical.dividir(2,3)<< endl;
    cout << mical.multiplicar(2,3)<< endl;

    cout << micalc.sumar(2,3)<< endl;
    cout << micalc.restar(2,3)<< endl;
    cout << micalc.dividir(5,3)<< endl;
    cout << micalc.multiplicar(2,3)<< endl;

    return 0;
}