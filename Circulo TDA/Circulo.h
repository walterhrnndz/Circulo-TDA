#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

struct Circulo {
    float radio;
    float angulo;
    int color;
};

float calcularSuperficie(Circulo circulo);

float calcularPerimetro(Circulo circulo);

float calcularDiametro(Circulo circulo);

float calcularLongitudArco(Circulo circulo);

#endif // CIRCULO_H_INCLUDED