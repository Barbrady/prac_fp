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

int TipoGaraje::PrimeraPlazaLibre(TipoTamanio t)  {
    for(int i=0; i<N_PLAZAS; i++)  {
        if((plaza[i].EstadoPlaza()) && (plaza[i].tamanio == t))  {
                return i;
        }
    }
}

bool TipoGaraje::PlazasLibres(TipoTamanio t)  {
    int contador = 0;
    for(int i=0; i<N_PLAZAS; i++)  {
        if(plaza[i].EstadoPlaza() && plaza[i].tamanio == t)  {
            contador++;
        }
    }
    if(contador>0) {
        return true;
    }
    else{
        return false;
    }
}

int TipoGaraje::PlazasOcupadas()  {
    int contador = 0;
    for(int i=0; i<N_PLAZAS; i++)  {
        if(!plaza[i].EstadoPlaza())  {
            contador++;
        }
    }
    return contador;
}

void TipoGaraje::IniciarGaraje()  {
    for(int i=0; i<N_PLAZAS; i++)  {
        plaza[i].estado = libre;
        if(i<PLAZAS_G)  {
            plaza[i].tamanio = grande;
            plaza[i].numero = i+1;
        }
        else  {
            plaza[i].tamanio = pequenia;
            plaza[i].numero = (i+1)-10;
        }
    }
}

void TipoGaraje::ImprimirGaraje()  {
    for(int i=0; i<N_PLAZAS; i++)  {
        plaza[i].ImprimirPlaza();
        if(i == 9)  {
            printf("\n");
            printf("\n");
        }
    }
}

void TipoGaraje::AparcarCoche(TipoTamanio t) {
    if(PlazasLibres(t)) {
        printf("Primera plaza libre = %d\n",PrimeraPlazaLibre(t));
        plaza[PrimeraPlazaLibre(t)].OcuparPlaza();
    }
    else{
        printf("No quedan plazas libres para el tipo de vehículo indicado.\n");
    }
}

void TipoGaraje::SacarCoche(int n, TipoTamanio t)  {
}
