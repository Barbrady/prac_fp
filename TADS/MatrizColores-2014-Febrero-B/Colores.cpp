#include<stdio.h>
#include"Colores.h"

void TipoMatrizColores::ComprobarColor(TipoColor color)  {
	int n_color = int(color);
	if(n_color>2 && n_color<6)  {
		throw NoPrimario;
	}
	else if(n_color<0 || n_color>5)  {
		throw NoColor;
	}
}

TipoColor TipoMatrizColores::MezclarColor(TipoColor color1, TipoColor color2)  {
	int aux = int(color1) + int(color2);
	switch (aux)  {
		case 1:
		return Naranja;
		break;
		case 2:
		return Violeta;
		break;
		case 3:
		return Verde;
		break;
		default:
		return color1;
	}
}

void TipoMatrizColores::MezclarMatrices(TipoMatriz matriz1, TipoMatriz matriz2)  {
	//TipoExcepcion e;
	try  {
		for(int i=0;i<N;i++)  {
			for(int j=0; j<3; j++)  {
				ComprobarColor(matriz1[i][j]);
				ComprobarColor(matriz2[i][j]);
				matriz[i][j] = MezclarColor(matriz1[i][j],matriz2[i][j]);
			}
		}
	}
	catch(TipoExcepcion e)  {
		if(e == NoPrimario)  {
			printf("Se ha introducido un color no primario en una matriz.\n");
		}
		if(e == NoColor)  {
			printf("Se ha itroducido un valor que no es un color.\n");
		}
	}
}

void ImprimirColor(TipoColor color)  {
	switch(color)  {
		case Rojo:
		printf("Rojo");
		break;
		case Amarillo:
		printf("Amarillo");
		break;
		case Azul:
		printf("Azul");
		break;
		case Naranja:
		printf("Naranja");
		break;
		case Violeta:
		printf("Violeta");
		break;
		case Verde:
		printf("Verde");
		break;
}
}
void TipoMatrizColores::ImprimirMatriz()  {
	for(int i=0; i<N; i++)  {
		for(int j=0; j<N; j++)  {
			ImprimirColor(matriz[i][j]);
			printf(" ");
		}
		printf("\n");
	}
}
