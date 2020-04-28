#include "Triangulo.h"
#include <math.h>

float calcularSuperficie(Triangulo triangulo) {
    return (triangulo.catetoMayor * triangulo.catetoMenor) / 2;
}
/*
float calcularVolumen(Triangulo triangulo) {
    return 0;
}
*/