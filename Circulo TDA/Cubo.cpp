#include "Cubo.h"
#include <math.h>

struct CuboStruct {
    float lado;
    std::string color;
};

Cubo crearCubo(float lado, std::string color) {
    struct CuboStruct* cubo = new CuboStruct();

    cubo->color = color;
    cubo->lado = lado;

    return cubo;
}

void setLado(Cubo& cubo, float lado) {
    cubo->lado = lado;
}

void setColor(Cubo& cubo, std::string color) {
    cubo->color = color;
}

float getLado(Cubo& cubo) {
    return cubo->lado;
}

std::string getColor(Cubo& cubo) {
    return cubo->color;
}

float calcularSuperficie(Cubo cubo) {
    return 6 * pow(cubo->lado, 2);
}

float calcularVolumen(Cubo cubo) {
    return pow(cubo->lado, 3);
}