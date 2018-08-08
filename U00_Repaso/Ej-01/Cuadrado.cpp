#include "Cuadrado.h"
#include <math.h>

float Cuadrado::getDiagonal() {

    return ((alto*alto)+(ancho*ancho))^(1/2);

}
float Cuadrado::getSuperficie() {

    if(alto==ancho){
        return alto*ancho;
}


float Cuadrado::getPerimetro(){

    if(alto==ancho){
        return alto*4;

}
