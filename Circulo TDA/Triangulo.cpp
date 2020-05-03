#include "Triangulo.h"
#include <math.h>

struct TrianguloStruct {
    float catetoMayor;
    float catetoMenor;
    std::string color;
};

Triangulo crearTrieangulo(float catetoMayor, float catetoMenor, std::string color) {
    struct TrianguloStruct* triangulo = new TrianguloStruct();
    
    triangulo->catetoMayor = catetoMayor;
    triangulo->catetoMenor = catetoMenor;
    triangulo->color = color;

	return triangulo;
}

void setCatetoMayor(Triangulo& triangulo, float catetoMayor) {
    triangulo->catetoMayor = catetoMayor;
}

void setCatetoMenor(Triangulo& triangulo, float catetoMenor) {
    triangulo->catetoMenor = catetoMenor;
}

void setColor(Triangulo& triangulo, std::string color) {
    triangulo->color = color;
}

float getCatetoMayor(Triangulo& triangulo) {
    return triangulo->catetoMayor;
}

float getCatetoMenor(Triangulo& triangulo) {
    return triangulo->catetoMenor;
}

std::string getColor(Triangulo& triangulo) {
    return triangulo->color;
}

float calcularSuperficie(Triangulo triangulo) {
    return (triangulo->catetoMayor * triangulo->catetoMenor) / 2;
}