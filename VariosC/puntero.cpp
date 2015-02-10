#include<stdio.h>

typedef int Entero;
typedef Entero *Pt_Entero;

int main()  {
	Pt_Entero p1,p2;
	p1 = new Entero;
	p2 = p1;
	printf("%p",p1);
	printf("\n");
	printf("%p",p2);
	printf("\n");
	printf("%d",p1);
	printf("\n");
	*p1 = 12;
	printf("%d",*p1);
	printf("\n");
}
