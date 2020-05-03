#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <string>

#include "Circulo.h"
#include "Cilindro.h"
#include "Cubo.h"
#include "Triangulo.h"
#include "Rectangulo.h"
#include "LeerArchivo.h"

using namespace std;

int main()
{
    Circulo circulo;
    bool salir = false;
    int opcion = -1;
    float radio;

    lectura();

    std::system("cls");

    cout << "Ingrese el radio:" << endl;
    cin >> radio;

    circulo = crearCirculo(radio, "rojo");

    while(!salir){
        std::system("cls");
        cout << "Ingrese opcion:" << endl;
        cout << "1 - Calcular superficie" << endl;
        cout << "2 - Calcular perimetro" << endl;
        cout << "3 - Calcular diametro" << endl;
        cout << "4 - Calcular longitud de arco" << endl;

        cin >> opcion;

        switch (opcion)
        {
            case 0: salir = true;
                break;
            case 1: cout << "La superficie es: " << calcularSuperficie(circulo) << endl;
                cout << "El color es: " << getColor(circulo) << endl;
                break;
            case 2: cout << "El perimetro es: " << calcularPerimetro(circulo) << endl;
                break;
            case 3: cout << "El diametro es: " << calcularDiametro(circulo) << endl;
                break;
            case 4: cout << "Ingrese el angulo: " << endl;
                    //cin >> circulo.angulo;
                    cout << "La longitud de arco es: " << calcularLongitudArco(circulo) << endl;
                break;
            default: //system("cls");
                     cout << "Ingrese opcion: " << endl;
                     cin >> opcion;
                break;
        }
        std::system("pause");
    }

    free(circulo);
    //lectura();

    return 0;
}