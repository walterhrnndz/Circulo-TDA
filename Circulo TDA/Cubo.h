#ifndef CUBO_H_INCLUDED
#define CUBO_H_INCLUDED

#include <string>

struct CuboStruct;

typedef struct CuboStruct* Cubo;

Cubo crearCubo(float lado, std::string color);

/*Getter / Setter*/

void setLado(Cubo& cubo, float lado);

void setColor(Cubo& cubo, std::string color);

float getLado(Cubo& cubo);

std::string getColor(Cubo& cubo);

/*Metodos*/

float calcularSuperficie(Cubo cubo);

float calcularVolumen(Cubo cubo);

#endif // CUBO_H_INCLUDED