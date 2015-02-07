#include <stdio.h>
#include "Colores.h"

int main()  {
	TipoMatriz m1 = {Rojo, Violeta, Azul, Azul, Azul, Amarillo, Amarillo, Amarillo, Azul};	
	TipoMatriz m2 = {Rojo, Rojo, Rojo, Rojo, Rojo, Rojo, Rojo, Rojo, Rojo};

TipoMatrizColores m;
m.MezclarMatrices(m1,m2);
m.ImprimirMatriz();






}
