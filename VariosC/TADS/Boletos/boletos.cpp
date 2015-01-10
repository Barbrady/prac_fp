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
