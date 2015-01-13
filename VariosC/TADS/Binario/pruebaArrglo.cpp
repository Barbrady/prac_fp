#include<stdio.h>

int main ()  {
	char vector[6] = {'a','b','c','d','e','f'};
	int i=0;
	while(vector[i] != '\0') {
		printf("Numero %d, letra %c en la posicion %d.\n",i+1,vector[i],i);
		i++;
	}
}
	
