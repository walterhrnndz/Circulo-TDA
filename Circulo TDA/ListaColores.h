#ifndef LISTACOLORES_H_INCLUDED
#define LISTACOLORES_H_INCLUDED

#include <string>

struct DatosStruct;

struct ListaStruct;

typedef struct DatosStruct* Datos;

typedef struct ListaStruct* Lista;

Datos crearNodo(std::string tipo, std::string color, float area);

Lista crearLista();

Lista agregarNodo(Lista *&lista, Datos &datos);

void borrarLista(Lista &lista);

#endif // LISTACOLORES_H_INCLUDED