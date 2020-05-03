#include "Circulo.h"
#include <math.h>

const float PI = 3.14159265359;

struct CirculoStruct {
    float radio;
    float angulo;
    std::string color;
};

Circulo crearCirculo(float radio, std::string color) {
    struct CirculoStruct* circulo = new CirculoStruct();

    circulo->radio = radio;
    circulo->color = color;
    circulo->angulo = 0;

    return circulo;
}

/*Setters / Getters*/

void setRadio(Circulo &circulo, float radio) {
    circulo->radio = radio;
}

void setAngulo(Circulo &circulo, float angulo) {
    circulo->angulo;
}

void setColor(Circulo &circulo, std::string color) {
    circulo->color;
}

float getRadio(Circulo &circulo) {
    return circulo->radio;
}

float getAngulo(Circulo& circulo)
{
    return circulo->angulo;
}

std::string getColor(Circulo &circulo) {
    return circulo->color;
}

/*Metodos*/

float calcularSuperficie(Circulo circulo) {
    return PI * pow(circulo->radio, 2);
}

float calcularPerimetro(Circulo circulo) {
    return PI * 2 * circulo->radio;
}

float calcularDiametro(Circulo circulo) {
    return 2 * circulo->radio;
}

float calcularLongitudArco(Circulo circulo) {
    return (PI * 2 * circulo->radio * circulo->angulo) / 360;
}