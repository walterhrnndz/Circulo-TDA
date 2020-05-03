#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED

#include <string>

struct RectanguloStruct;

typedef struct RectanguloStruct* Rectangulo;

Rectangulo crearRectangulo(float base, float altura, std::string color);

/*Getter / Setter*/

void setBase(Rectangulo& rectangulo, float base);

void setAltura(Rectangulo& rectangulo, float altura);

void setColor(Rectangulo& rectangulo, std::string color);

float getBase(Rectangulo& rectangulo);

float getAltura(Rectangulo& rectangulo);

std::string getColor(Rectangulo& rectangulo);

/*Metodos*/

float calcularSuperficie(Rectangulo rectangulo);

float calcularPerimetro(Rectangulo rectangulo);

#endif // RECTAGULO_H_INCLUDED