#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED

struct Rectangulo {
    float base;
    float altura;
    int color;
};

float calcularSuperficie(Rectangulo rectangulo);

float calcularPerimetro(Rectangulo rectangulo);

#endif // RECTAGULO_H_INCLUDED