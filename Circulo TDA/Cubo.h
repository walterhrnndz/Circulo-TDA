#ifndef CUBO_H_INCLUDED
#define CUBO_H_INCLUDED

struct Cubo {
    float lado;
    int color;
};

float calcularSuperficie(Cubo cubo);

float calcularVolumen(Cubo cubo);

#endif // CUBO_H_INCLUDED