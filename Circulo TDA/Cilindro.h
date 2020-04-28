#ifndef CILINDRO_H_INCLUDED
#define CILINDRO_H_INCLUDED

struct Cilindro {
    float radio;
    float altura;
    int color;
};

float calcularSuperficie(Cilindro cilindro);

float calcularVolumen(Cilindro cilindro);

#endif // CILINDRO_H_INCLUDED