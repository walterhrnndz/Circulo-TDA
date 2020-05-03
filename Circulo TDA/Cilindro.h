#ifndef CILINDRO_H_INCLUDED
#define CILINDRO_H_INCLUDED

#include <string>

struct CilindroStruct;

typedef struct CilindroStruct* Cilindro;

Cilindro crearCilindro(float radio, float altura, std::string color);

/*Getter / Setter*/

void setRadio(Cilindro& cilindro, float radio);

void setAltura(Cilindro& cilindro, float altura);

void setColor(Cilindro& cilindro, std::string color);

float getRadio(Cilindro& cilindro);

float getAltura(Cilindro& cilindro);

std::string getColor(Cilindro& cilindro);

/*Metodos*/

float calcularSuperficie(Cilindro cilindro);

float calcularVolumen(Cilindro cilindro);

#endif // CILINDRO_H_INCLUDED