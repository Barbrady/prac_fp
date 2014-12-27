#include <stdio.h>

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
	char* s;
	int i;
	i=2;
	s=Cadena(i);
	printf("%s\n",s);
	printf("%p\n",s);
}
