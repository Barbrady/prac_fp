#include<stdio.h>
#include"contribuyente.h"

int main()  {
	float j=50.0;
	TipoContribuyentes contribuyentes;
	contribuyentes.IniciarSalario();
	for(int i=0; i<PERSONAS; i++)  {
		contribuyentes.persona[i].salario = j*100.1;
		j--;
	}
	contribuyentes.Mostrar();
	contribuyentes.OrdenarContribuyentes();
	contribuyentes.Mostrar();
}
