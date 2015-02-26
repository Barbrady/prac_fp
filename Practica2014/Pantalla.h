/* ***********************************************************************************
 *  Intefaz de módulo: Pantalla
 *
 *  Este módulo define el Tipo Abstracto de Dato Pantalla, capaz de crear un array de 80x80
 *  e imprimirlo hasta la ultima linea no vacía
 **************************************************************************************/
#pragma once

/* Declaración de las constantes de valor máximo de la matriz */
const int ANCHO_P = 80;
const int ALTO_P = 80;

/* Definición del tipo matriz de caracteres */
typedef char TipoMatriz[ALTO_P][ANCHO_P];

typedef struct TipoPantalla {
    TipoMatriz matriz;
    void EscribirPantalla();
    void IniciarPantalla();
};
