#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

#include <string>

struct CirculoStruct;

typedef struct CirculoStruct* Circulo;

Circulo crearCirculo(float radio, std::string color);

void setRadio(Circulo& circulo, float radio);

void setAngulo(Circulo& circulo, float angulo);

void setColor(Circulo& circulo, std::string color);

float getRadio(Circulo& circulo);

float getAngulo(Circulo& circulo);

std::string getColor(Circulo& circulo);

float calcularSuperficie(Circulo circulo);

float calcularPerimetro(Circulo circulo);

float calcularDiametro(Circulo circulo);

float calcularLongitudArco(Circulo circulo);

#endif // CIRCULO_H_INCLUDED