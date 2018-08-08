#include "Triangulo.h"

float Triangulo::getAngulo() const {
    return angulo;
}

void Triangulo::setAngulo(float angulo) {
    Triangulo::angulo = angulo;
}


float Triangulo::getSuperficie(){

    return (alto*ancho)/2;

}
float Triangulo::getPerimetro(){

}
