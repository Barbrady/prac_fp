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

void Menu()  {
    printf("Introduzca una opción: \n");
    printf("Imprimir garaje: (I)\n");
    printf("Entrada:         (P/G)\n");
    printf("Salida:          (S)\n");
}

int main()  {
    TipoGaraje garaje;
    garaje.IniciarGaraje();
    Menu();
    //garaje.ImprimirGaraje();


}

