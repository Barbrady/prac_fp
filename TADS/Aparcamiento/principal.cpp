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
    printf("\n\n");
    printf("Introduzca una opción: \n");
    printf("Imprimir garaje: (I)\n");
    printf("Entrada:         (P/G)\n");
    printf("Salida:          (S)\n");
    printf("Finalizar:       (F)\n");
}
void ObtenerPlaza(TipoGaraje &garaje){
    char c;
    int n;
    printf("\n");
    printf("Indicar tamanio de plaza (P/G) \n");
    scanf("%c",&c);
    while(getchar()!='\n');
    printf("Indicar numero de plaza ");
    scanf("%d",&n);
    while(getchar()!='\n');
    if(c!='p' && c!= 'P' && c!='g' && c!='G')  {
        printf("Ha introducido un tamanio no valido.\n");
        ObtenerPlaza(garaje);
    }
    garaje.SacarCoche(n,c);
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
        case 's':
        case 'S':
            ObtenerPlaza(garaje);
            break;
    }
}


int main()  {
    TipoGaraje garaje;
    garaje.IniciarGaraje();
    char c;
    do{
        Opciones();
        scanf("%1c",&c);
        while(getchar()!='\n');
        Acciones(c,garaje);
    }
    while(c != 'f' && c != 'F');
}

