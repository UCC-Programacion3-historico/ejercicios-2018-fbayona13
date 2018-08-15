#include <iostream>
#include "mcd.h"
using namespace std;
int main() {

    std::cout << "Ejercicio 01/04\n" << std::endl;
    std::cout << mcd(8,12) << std::endl; //da 4
    std::cout << mcd(90,120) << std::endl; //da 30
    std::cout << mcd(450,360) << std::endl; //da 90
    std::cout << mcd(250,300) << std::endl; //da 50

    return 0;
}