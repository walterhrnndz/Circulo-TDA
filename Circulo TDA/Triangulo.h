#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

#include <string>


struct TrianguloStruct;

typedef struct TrianguloStruct* Triangulo;

/*Getter / Setter*/

Triangulo crearTrieangulo(float catetoMayor, float catetoMenor, std::string color);

void setCatetoMayor(Triangulo& triangulo, float catetoMayor);

void setCatetoMenor(Triangulo& triangulo, float catetoMenor);

void setColor(Triangulo& triangulo, std::string color);

float getCatetoMayor(Triangulo& triangulo);

float getCatetoMenor(Triangulo& triangulo);

std::string getColor(Triangulo& triangulo);

/*Metodos*/

float calcularSuperficie(Triangulo triangulo);

#endif // TRIANGULO_H_INCLUDED