#include <stdio.h>
#include "boletos.h"

void TipoBoleto::NuevoBoleto()  {
	for(int i=0; i<L_BOLETO; i++)  {
		printf("Introduzca el número %d:\n",i+1);
		scanf("%d",&numero[i]);
	}
}
void TipoBoleto::ImprimirBoleto()  {
	for(int i=0; i<L_BOLETO; i++)  {
		printf("El numero%d es:%d\n",i+1,numero[i]);
	}
}
void TipoBoleto::OrdenaBoleto()  {
	int j,temp;
	for(int i=1; i<L_BOLETO; i++)  {
		j=i;
		temp = numero[i];
		while(j>0 && numero[j-1] > temp) {
			numero[j] = numero[j-1];
			j--;
		}
		numero[j] = temp;
	}
}
