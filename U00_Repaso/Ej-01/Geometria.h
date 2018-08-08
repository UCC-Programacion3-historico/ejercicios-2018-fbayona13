#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H
#include <Color.h>
class Geometria {
protected:
    float alto;
    float ancho;
public:
    float getAlto() const;

    void setAlto(float alto);

    float getAncho() const;

    void setAncho(float ancho);

public:
    color col;
    virtual float getPerimetro()= 0;
    virtual float getSuperficie()= 0;

};


#endif //REPASO_GEOMETRIA_H
