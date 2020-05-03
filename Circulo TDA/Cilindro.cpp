#include "Cilindro.h"
#include <math.h>

const float PI = 3.14159265359;

struct CilindroStruct {
    float radio;
    float altura;
    std::string color;
};

Cilindro crearCilindro(float radio, float altura, std::string color) {
    struct CilindroStruct* cilindro = new CilindroStruct();

    cilindro->altura = altura;
    cilindro->color = color;
    cilindro->radio = radio;
        
    return cilindro;
}

void setRadio(Cilindro& cilindro, float radio) {
    cilindro->radio = radio;
}

void setAltura(Cilindro& cilindro, float altura) {
    cilindro->altura = altura;
}

void setColor(Cilindro& cilindro, std::string color) {
    cilindro->color = color;
}

float getRadio(Cilindro& cilindro) {
    return cilindro->radio;
}

float getAltura(Cilindro& cilindro) {
    return cilindro->altura;
}

std::string getColor(Cilindro& cilindro) {
    return cilindro->color;
}

float calcularSuperficie(Cilindro cilindro) {
    return PI * 2 * cilindro->radio * cilindro->altura + PI * 2 * pow(cilindro->radio, 2);
}

float calcularVolumen(Cilindro cilindro) {
    return PI * pow(cilindro->radio, 2) * cilindro->altura;
}