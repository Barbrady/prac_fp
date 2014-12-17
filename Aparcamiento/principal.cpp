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


int main()  {
    TipoGaraje garaje;
    garaje.IniciarGaraje();
    char c;
    //printf("Hay %d plazas vacías:\n",garaje.PlazasLibres());
    //do  {
    //    Opciones();
    //    scanf("%c",&c);
    //    }
    garaje.AparcarCoche(grande);
    garaje.AparcarCoche(pequenia);
    garaje.ImprimirGaraje();


}

