#include <stdio.h>
#include "Tarjeta.h"

void TipoTarjeta::CargarDinero (TipoFecha fecha, float dinero)  {
	saldo = saldo + dinero;
	for(int i=N_OPERACIONES-1; i>=0; i--)  {
		operacion[i] = operacion[i-1];
	}
	operacion[0].ejecucion = cargar;
	operacion[0].fecha.dia = fecha.dia;
	operacion[0].fecha.mes = fecha.mes;
	operacion[0].fecha.anno = fecha.anno;
	operacion[0].cantidad = dinero;
}

bool TipoTarjeta::SacarDinero (TipoFecha fecha, float dinero)  {
	if(saldo>dinero)  {
	saldo = saldo - dinero;
	for(int i=N_OPERACIONES-1; i>=0; i--)  {
		operacion[i] = operacion[i-1];
	}
		operacion[0].ejecucion = sacar;
		operacion[0].fecha = fecha;
		operacion[0].cantidad = dinero;
		return true;
	}
	else{
		printf("No hay saldo.\n");
		return false;
	}
}

void TipoTarjeta::ConsultarSaldo ()  {
	printf("El saldo es %.2f\n",saldo);
	for(int i=0; i<N_OPERACIONES; i++)  {
		printf("Operacion %d es : ",i+1);
		ImprimirEjecucion(operacion[i].ejecucion);
		printf("Con fecha %d de %d de %d ",operacion[i].fecha.dia,operacion[i].fecha.mes,operacion[i].fecha.anno);
		printf(" una cantidad de %f euros.\n",operacion[i].cantidad);
	}
}

void TipoTarjeta::ImprimirEjecucion(TipoEjecucion ejecucion)  {
	switch (ejecucion)  {
		case cargar:
		printf("Cargar.\n");
		break;
		case sacar:
		printf("Sacar.\n");
		break;
		case consultar:
		printf("Consultar.\n");
		break;
		default:
		break;
	}
}
