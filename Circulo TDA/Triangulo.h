#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

struct Triangulo {
    float catetoMayor;
    float catetoMenor;
    int color;
};

float calcularSuperficie(Triangulo triangulo);

//float calcularPerimetro(Triangulo triangulo);

#endif // TRIANGULO_H_INCLUDED