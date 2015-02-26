/* ***********************************************************************************
 *  Interfaz: CalendarioMensual
 *
 *  Este módulo define el Tipo Abstracto de Dato CalendarioMensual, capaz de generar
 *  una matriz de hasta 6x22 e incluir en ella los días (en número) de un determinado mes
 *  en función del año. Este TAD será capaz de introducir información en una variable 
 *  TipoPantalla indicando la fila y la columna donde se quiere iniciar la insercción.
 **************************************************************************************/
#pragma once
#include "Pantalla.h"

/* Constantes con valores maximos de la matriz */
const int MES_F = 6;
const int MES_C = 22;

typedef char TipoMatrizMes[MES_F][MES_C];
typedef char StringDia[2];

typedef struct TipoCalendarioMensual  {
    TipoMatrizMes mes;         				// Varible matriz que guardará el mes
    int cm_mes;                				// Variable entera para guardar el mes
    int cm_anno;                			// Variable entera para guardar el año
    void GenerarMes();          			// Procedimiento que genera un mes en función de las variables cm_mes y cm_anno
    void InsertarMesPantalla(TipoPantalla &pantalla, int f, int c);	// Procedimiento para insertar el mes en una variable TipoPantalla, indicando la fila y columna inicial donde guardar
};
