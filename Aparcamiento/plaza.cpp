/*
 * =====================================================================================
 *
 *       Filename:  plaza.cpp
 *
 *    Description:  Módulo plaza
 *
 *        Version:  1.0
 *        Created:  16/12/14 18:06:58
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "plaza.h"

void TipoPlazaGaraje::OcuparPlaza()  {
    estado = ocupada;
}

void TipoPlazaGaraje::LiberarPlaza()  {
    estado = libre;
}

bool TipoPlazaGaraje::EstadoPlaza()  {
    if(estado == libre)  {
        return true;
    }
    else  {
        return false;
    }
}

void TipoPlazaGaraje::ImprimirPlaza()  {
    if(tamanio == grande)  {
        printf("G");
    }
    else  {
        printf("P");
    }
    printf("%d",numero);
}
