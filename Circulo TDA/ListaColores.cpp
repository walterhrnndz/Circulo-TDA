#include "ListaColores.h"

struct DatosStruct {
	std::string color;
	std::string tipo;
	float area;
};

struct ListaStruct {
	Datos datos;
	ListaStruct* siguiente;
};

Datos crearNodo(std::string tipo, std::string color, float area) {
	struct DatosStruct* nuevo = new DatosStruct();

	nuevo->area = area;
	nuevo->color = color;
	nuevo->tipo = tipo;

	return nuevo;
}

Lista crearLista() {
	struct ListaStruct* lista = new ListaStruct();

	if (lista == NULL) {
		return NULL;
	}
	lista->siguiente = NULL;

	return lista;
}

Lista agregarNodo(Lista *&lista, Datos &datos) {
	/*ListaStruct* nuevo = new ListaStruct();
	nuevo->datos = datos;

	Lista* aux1 = lista;
	Lista* aux2;
	
	while (aux1 != NULL) {
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}

	return nullptr;*/
}

void borrarLista(Lista& lista) {
}