
unsigned int potencia(unsigned int base, unsigned int exp) {

    if (exp == 0) //si el exponente es cero, el resultado es 1
        return 1;

    return base * potencia(base, exp - 1); //si el exponente no es cero, va a ir realizando las potencias hasta que sea 0.
}
