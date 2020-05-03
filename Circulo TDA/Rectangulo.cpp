#include "Rectangulo.h"

struct RectanguloStruct {
	float base;
	float altura;
	std::string color;
};

Rectangulo crearRectangulo(float base, float altura, std::string color) {
	struct RectanguloStruct* rectangulo = new RectanguloStruct();

	rectangulo->altura = altura;
	rectangulo->base = base;
	rectangulo->color = color;

	return rectangulo;
}

void setBase(Rectangulo& rectangulo, float base) {
	rectangulo->base = base;
}

void setAltura(Rectangulo& rectangulo, float altura) {
	rectangulo->altura = altura;
}

void setColor(Rectangulo& rectangulo, std::string color) {
	rectangulo->color = color;
}

float getBase(Rectangulo& rectangulo) {
	return rectangulo->base;
}

float getAltura(Rectangulo& rectangulo) {
	return rectangulo->altura;
}

std::string getColor(Rectangulo& rectangulo) {
	return rectangulo->color;
}

float calcularSuperficie(Rectangulo rectangulo) {
	return rectangulo->altura * rectangulo->base;
}

float calcularPerimetro(Rectangulo rectangulo) {
	return 2 * rectangulo->altura + 2 * rectangulo->base;
}