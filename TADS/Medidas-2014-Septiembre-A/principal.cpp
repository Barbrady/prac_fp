#include <stdio.h>
#include "medidas.h"

int main()  {
	float rango;
	bool valorRango;
	TipoMedidas medidas;
	medidas.NuevasMedidas();
	printf("Introduce rango: ");
	scanf("%f",&rango);
	valorRango = medidas.ComprobarMedidas(rango);
	if(valorRango)  {
		printf("Medidas dentro de rango.\n");
	}
	else{
		printf("Medidas fuera de rango.\n");
	}

	medidas.ImprimirVector();
}
