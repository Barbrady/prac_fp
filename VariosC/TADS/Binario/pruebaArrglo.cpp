#include<stdio.h>
#include<string.h>

typedef char TipoVector[6];

int main ()  {
	TipoVector vector = {'a','b','c','d','e','f'};
	int i=0;
	int j;
	while(vector[i] != '\0') {
		printf("Numero %d, letra %c en la posicion %d.\n",i+1,vector[i],i);
		i++;
	}
	j=strlen(vector);
	printf("El vector tiene una longitud de: %d.\n",j);
}
	
