#ifndef REPASO_TRIANGULO_H
#define REPASO_TRIANGULO_H
#include "Geometria.h"

class Triangulo : public Geometria{
protected:
    float angulo;
public:
    float getAngulo() const;

    void setAngulo(float angulo);

    float getSuperficie();
    float getPerimetro();


};


#endif //REPASO_TRIANGULO_H
