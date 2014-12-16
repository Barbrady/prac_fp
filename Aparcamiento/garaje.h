/*
 * =====================================================================================
 *
 *       Filename:  garaje.h
 *
 *    Description:  Interfaz de garaje
 *
 *        Version:  1.0
 *        Created:  16/12/14 18:11:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#pragma once
#include "plaza.h"

const int G_PLAZAS = 25;
typedef TipoPlazaGaraje PlazasGaraje[G_PLAZAS];
typedef struct TipoGaraje  {
    PlazasGaraje plaza;
    int PlazasLibres();
    int PlazasOcupadas();
    void IniciarGaraje();
    void ImprimirGaraje();
};
