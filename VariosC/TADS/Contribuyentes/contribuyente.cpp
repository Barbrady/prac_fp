#include<stdio.h>
#include"contribuyente.h"

void TipoContribuyentes::IniciarSalario()  {
	for(int i=0; i<PERSONAS; i++)  {
		persona[i].salario = 0.0;
		persona[i].nombre[0] = 'A';
	}
}

void TipoContribuyentes::OrdenarContribuyentes()  {
	float temp;
	int j;
	for(int i=0; i<PERSONAS; i++)  {
		temp = persona[i].salario;
		j = i;
		while(j>0 && persona[j-1].salario > temp)  {
			persona[j].salario = persona[j-1].salario;
			j--;
		}
		persona[j].salario = temp;
	}
}

void TipoContribuyentes::Mostrar()  {
	for(int i=0; i<PERSONAS; i++)  {
		printf("Sueldo : %f\n",persona[i].salario);
	}
}
