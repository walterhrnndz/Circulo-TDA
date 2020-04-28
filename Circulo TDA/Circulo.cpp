#include "Circulo.h"
#include <math.h>

float calcularSuperficie(Circulo circulo) {
    return 3.14 * pow(circulo.radio, 2);
}

float calcularPerimetro(Circulo circulo) {
    return 3.14 * 2 * circulo.radio;
}

float calcularDiametro(Circulo circulo) {
    return 2 * circulo.radio;
}

float calcularLongitudArco(Circulo circulo) {
    return (3.14 * 2 * circulo.radio * circulo.angulo) / 360;
}