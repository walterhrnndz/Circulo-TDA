#include "Cubo.h"
#include <math.h>

float calcularSuperficie(Cubo cubo) {
    return 6 * pow(cubo.lado, 2);
}

float calcularVolumen(Cubo cubo) {
    return pow(cubo.color, 3);
}