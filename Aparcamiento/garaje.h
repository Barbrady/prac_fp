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

const int PLAZAS_G = 10;
const int PLAZAS_P = 15;
const int N_PLAZAS = PLAZAS_G + PLAZAS_P;

typedef TipoPlazaGaraje PlazasGaraje[N_PLAZAS];
typedef struct TipoGaraje  {
    PlazasGaraje plaza;
    bool PlazasLibres(TipoTamanio t);
    int PlazasOcupadas();
    void IniciarGaraje();
    void ImprimirGaraje();
    void AparcarCoche(TipoTamanio t);
    void SacarCoche(int n, TipoTamanio t); 
};
