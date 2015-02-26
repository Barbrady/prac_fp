/* ***********************************************************************************
 *  Módulo: Pantalla
 *
 *  Este módulo define el Tipo Abstracto de Dato Pantalla, capaz de crear un array de 80x80
 *  e imprimirlo hasta la ultima linea no vacía
 **************************************************************************************/
#include <stdio.h>
#include "Pantalla.h"

/* Función que devuelve la ultima fila con datos */
int UltimaFila(TipoMatriz matriz)  {
    int f=0;
    for(int i =0; i<ALTO_P; i++)  {
      for(int j =0; j<ANCHO_P; j++)  {
        if(matriz[i][j] != ' ')  {
        f = i;
        }
      }
    }
    return f;
}

/* Procedimiento para imprimir la matriz en pantalla */
void TipoPantalla::EscribirPantalla()  {
    int fila = UltimaFila(matriz);
    for(int i=0; i<=fila; i++)  {
        for(int j=0; j<ANCHO_P; j++)  {
            printf("%c",matriz[i][j]);
        }
        printf("\n");
    }
}

/*Procedimiento para iniciar la matriz de la pantalla con el valor char "espacio" */
void TipoPantalla::IniciarPantalla()  {
    for(int i=0; i<ALTO_P; i++)  {
        for(int j=0; j<ANCHO_P; j++)  {
            matriz[i][j] = ' ';
        }
    }
}
