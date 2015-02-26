/*********************************************
 * * NOMBRE: #Aitor#
 * * PRIMER APELLIDO: #Alcorta#
 * * SEGUNDO APELLIDO: #Puente#
 * * DNI: #72130393R#
 * * EMAIL: #aitortorrelavega@gmail.com#
 * **********************************************/
#include <stdio.h>
#include "CalendarioAnual.h"

/* Función para leer el año */
int LeerAnno() {
    int anno;
    do {
        printf("Anno (1601.3000)? ");
        scanf("%d",&anno);
    }
    while(anno<1601 || anno>3000);
    printf("\n");
    return anno;
}

int main () {
    TipoCalendarioAnual calendario;     //Declaración de variable (TAD) definida en el módulo CalendarioAnual.h/cpp
    calendario.ca_anno = LeerAnno();    //Asigna el valor del año elegido a la variable entera ca_anno del TAD
    calendario.GenerarCalendario();     //Procedimiento del TAD que genera un año completo
}
