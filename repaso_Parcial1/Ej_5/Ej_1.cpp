//
// Created by Usuario on 09/10/2018.
//

#include <iostream>
#include "Ej_5.h"
#include <string.h>
#include "../U03_Pilas/Pila/Pila.h"
using namespace std;

void invertir(string a){
    int c=0;
    Pila <string> A;
    for (int i=0; i<a.length(); i++){
        c++;
        if(a[i]==' '){
            for(int j=i-c; j<c ; j++){
                A.push(a[j]);
            }
            c=0;
        }
    }
    do{
        A.pop();
    }while (!A.esVacia());
}

int main(){
    string a;
    cout<<"Inserte frase"<<endl;
    cin>>a;
    invertir(a);

    return (0);
}