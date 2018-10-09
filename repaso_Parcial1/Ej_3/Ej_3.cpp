//
// Created by Usuario on 09/10/2018.
//

#include "Ej_3.h"
#include <iostream>
using namespace std;
void ateriscos(int n){
    if (n==0)
        return;
    cout<<"*";
    ateriscos(n-1);
};


int main(){
    int n;
    cout<<"Ingresar numero entero positivo"<<endl;
    do{
        cin>>n;
    }while (n<1);
    ateriscos(n);
    return 0;
}