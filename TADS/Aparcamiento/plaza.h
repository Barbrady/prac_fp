/*
 * =====================================================================================
 *
 *       Filename:  plaza.h
 *
 *    Description:  Interfaz del TAD plaza
 *
 *        Version:  1.0
 *        Created:  16/12/14 18:02:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#pragma once

typedef enum TipoEstado  {
    libre, ocupada};
typedef enum TipoTamanio {
    grande, pequenia};

typedef struct TipoPlazaGaraje  {
    int numero;
    TipoEstado estado;
    TipoTamanio tamanio;
    void OcuparPlaza();
    void LiberarPlaza();
    bool EstadoPlaza();
    void ImprimirPlaza();
};
