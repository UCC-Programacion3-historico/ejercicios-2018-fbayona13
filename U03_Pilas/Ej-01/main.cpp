#include <iostream>
#include "../Pila/Pila.h"
#include <string.h>
using namespace std;

int main() {
    std::cout << "Ejercicio 03/01\n" << std::endl;
    char a[100];
    Pila<char> pila;

    cout<<"introduzca la palabra: ";
    cin>>a;


        for (int i = 0; i < strlen(a); i++) {

            pila.push(a[i]);

        }
        for (int i = 0; i < strlen(a); i++) {

            cout << pila.pop();
        }


    return 0;
}