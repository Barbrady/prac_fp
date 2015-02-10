#include <stdio.h>

int x;

void funcion(int y, int &z)  {
	x = 4;
	//y = y+3;
	//z = z+2;
	printf("%d\n",y);
	}

int main()  {
	x = 2;
	funcion(x,x);
	printf("%d\n",x);
}
