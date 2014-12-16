/*
 * =====================================================================================
 *
 *       Filename:  garaje.cpp
 *
 *    Description:  Módulo garaje
 *
 *        Version:  1.0
 *        Created:  16/12/14 18:16:02
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

int TipoGaraje::PlazasLibres()  {
    int contador = 0;
    for(int i=0; i<G_PLAZAS; i++)  {
        if(plaza[i].EstadoPlaza())  {
            contador++;
        }
    }
    return contador;
}

int TipoGaraje::PlazasOcupadas()  {
    int contador = 0;
    for(int i=0; i<G_PLAZAS; i++)  {
        if(!plaza[i].EstadoPlaza())  {
            contador++;
        }
    }
    return contador;
}

void TipoGaraje::IniciarGaraje()  {
    for(int i=0; i<G_PLAZAS; i++)  {
        plaza[i].numero = i+1;
        plaza[i].estado = libre;
        if(i<10)  {
            plaza[i].tamanio = grande;
        }
        else  {
            plaza[i].tamanio = pequenia;
        }
    }
}

void TipoGaraje::ImprimirGaraje()  {
    for(int i=0; i<G_PLAZAS; i++)  {
        plaza[i].ImprimirPlaza();
        if(i == 9)  {
            printf("\n");
        }
    }
}
