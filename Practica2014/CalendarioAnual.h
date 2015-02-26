/* ***********************************************************************************
 *  Interfaz: CalendarioAnual
 *
 *  Este módulo define el Tipo Abstracto de Dato CalendarioAnual, capaz de la estructura
 *  anual de un calendario, formado por cuatro lineas denominadas cabecera, donde figuran
 *  el año en cuestión, cada uno de los 12 meses y los días de la semana. 
 *  Este módulo es capaza de guardar los datos en una variable tipo Pantalla y de declarar
 *  variables tipo CalendarioMensual.
 **************************************************************************************/
#pragma once
#include "Pantalla.h"

/* Constantes para la separación entre meses */
const int SH = 24;      //Separación Horizontal
const int SV = 11;      //Separacion Vertical

/* Constante con la longitud de los vectores String */
const int MAX_VECTOR = 22;
const int MAX_VANNO = 5;
const int MAX_VMES = 11;

/* Definición de los vectores de trabajo */
typedef char TipoAnno[MAX_VANNO];
typedef char TipoVector[MAX_VECTOR];
typedef char TipoMes[MAX_VMES];

/* Definición del estruct del TAD TipoCalendarioAnual */
typedef struct TipoCalendarioAnual  {
    int ca_anno;			//Valor entero del año
    TipoVector ca_vector;	//Vector para generar la cabecera
    void GenerarCalendario();
};
