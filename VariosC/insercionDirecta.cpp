#include <stdio.h>

typedef int TipoVector[8];

int main ()  {
	TipoVector v;
	for(int i=0; i<8; i++)  {
		printf("Introduzca valor %d. ",i+1);
		scanf("%d",&v[i]);
	}
	for(int i=0; i<8; i++)  {
		printf("El valor %d es %d. \n ",i+1,v[i]);
	}
	int aux, j;
//Insercion directa
	for(int i=1; i<8; i++)  {
		j = i;
		aux = v[i];
		while(j>0 && aux < v[j-1])  {
			v[j] = v[j-1];
			j--;
		}
		v[j] = aux;
	}

	printf("El vector una vez ordenado es: \n");

	for(int i=0; i<8; i++)  {
		printf("El valor %d es %d. \n ",i+1,v[i]);
	}
}
