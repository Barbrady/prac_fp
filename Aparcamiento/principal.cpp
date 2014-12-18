/*
 * =====================================================================================
 *
 *       Filename:  principal.cpp
 *
 *    Description:  Programa que controla un aparcamiento de 25 plazas
 *
 *        Version:  1.0
 *        Created:  16/12/14 18:01:28
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "garaje.h"

void Opciones()  {
    printf("Introduzca una opción: \n");
    printf("Imprimir garaje: (I)\n");
    printf("Entrada:         (P/G)\n");
    printf("Salida:          (S)\n");
    printf("Finalizar:       (F)\n");
}

void Acciones(char c, TipoGaraje &garaje)  {
    switch (c)  {
        case 'i':
        case 'I':
            garaje.ImprimirGaraje();
            break;
        case 'p':
        case 'P':
            garaje.AparcarCoche(pequenia);
            break;
        case 'g':
        case 'G':
            garaje.AparcarCoche(grande);
            break;
    }
}

int main()  {
    TipoGaraje garaje;
    garaje.IniciarGaraje();
    char c = ' ';
    while(c != 'f')  {
        Opciones();
        scanf("%c",&c);
        Acciones(c,garaje);
        }
}

