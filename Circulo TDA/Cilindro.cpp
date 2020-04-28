#include "Cilindro.h"
#include <math.h>

//Area lateral mas area de los circulos
float calcularSuperficie(Cilindro cilindro) {
    return 3.14 * 2 * cilindro.radio * cilindro.altura + 3.14 * 2 * pow(cilindro.radio, 2);
}

float calcularVolumen(Cilindro cilindro) {
    return 3.14 * pow(cilindro.radio, 2) * cilindro.altura;
}