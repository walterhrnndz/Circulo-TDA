#include "Rectangulo.h"

float calcularSuperficie(Rectangulo rectangulo) {
	return rectangulo.altura * rectangulo.base;
}

float calcularPerimetro(Rectangulo rectangulo) {
	return 2 * rectangulo.altura + 2 * rectangulo.base;
}