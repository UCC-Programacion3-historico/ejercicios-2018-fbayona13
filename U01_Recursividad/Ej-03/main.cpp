#include <iostream>
#include "ackerman.h"

int main() {
    std::cout << "Ejercicio 01/03\n" << std::endl;
    std::cout << ackerman(3,4) << std::endl;
    std::cout << ackerman(3,3) << std::endl;
    std::cout << ackerman(3,2) << std::endl;
    std::cout << ackerman(3,1) << std::endl;
    std::cout << ackerman(3,0) << std::endl;


    return 0;
}