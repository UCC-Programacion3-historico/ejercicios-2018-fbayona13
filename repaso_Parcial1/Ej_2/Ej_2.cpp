//
// Created by Usuario on 09/10/2018.
//

#include "Ej_2.h"
#include <iostream>

using namespace std;

void impares (int n){
    if ((n%2) == 0 )
        n--;
    cout<<n<<endl;
    if (n==1)
        return;
    impares(n-2);
}

using namespace std;
int main(){
    int n;
    cout<<"Ingresar numero entero positivo"<<endl;
    do{
        cin>>n;
    }while(n<1);
    impares(n);
    return 0;
}
