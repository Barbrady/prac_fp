#include "medidas.h"
#include <stdio.h>

void TipoMedidas::NuevasMedidas()  {
	for(int i=0; i<N_MEDIDAS; i++)  {
		printf("Introducir medida: ");
		scanf("%f",&valores[i]);
	}
	printf("n");
}

bool TipoMedidas::ComprobarMedidas(float rango)  {
	float temp;
	int j;
	for(int i=1; i<N_MEDIDAS; i++)  {
		j=i;
		temp = valores[i];
		while(j>0 && valores[j-1]>temp)  {
			valores[j] = valores[j-1];
			j--;
		}
		valores[j] = temp;
	}
	if((valores[N_MEDIDAS-1]-valores[0]) > rango)  {
		return false;
	}
	else{
		return true;
	}
}

void TipoMedidas::ImprimirVector()  {
	for(int i=0; i<N_MEDIDAS; i++)  {
		printf("Valor %d es: %f.\n",i+1,valores[i]);
	}
}
