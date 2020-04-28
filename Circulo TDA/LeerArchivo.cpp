#include "LeerArchivo.h"

#pragma warning(disable : 4996)
void lectura() {

    /*
        Revisar cuando llega al final del archivo se desborda y se cierra
    */
    
    ifstream archivo;
    string texto;
    char* token;
    char delimitador[] = "; ";

    archivo.open("FigurasEjemplo.txt", ios::in); //Abrir en modo lectura

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    while (!archivo.eof())
    {
        getline(archivo, texto);
        token = datos(texto);

        if (token != NULL) {
            while (token != NULL) {
                printf("Token: %s\t", token);
                token = strtok(NULL, delimitador);
                system("pause");
            }
        }
        printf("\n");
    }
    archivo.close();
}

#pragma warning(disable : 4996)
char* datos(string linea)
{
    char cadena[] ="", delimitador[] = "; ";
    strcpy(cadena, linea.c_str());

    char *resultado = strtok(cadena, delimitador);

    return resultado;
}