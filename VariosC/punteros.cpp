#include <stdio.h>
#include "biblioteca.h"

char* Cadena(int i)  {
	char* string;
	if(i==1){
		string = ("Hola, buenas tardes");
	}
	if(i!=1){
		string = ("Adios");
	}
	return string;
}

int main()  {
	TipoNuevo * e;
	TipoNuevo b;
	e = &b;
	//char* s;
	//int i;
	//i=2;
	//s=Cadena(i);
	//printf("%s\n",s);
	//printf("%p\n",s);
	e->numero=1;
	(*e).letra='a';
	(*e).Imprimir();
}
