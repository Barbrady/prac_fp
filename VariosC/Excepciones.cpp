#include<stdio.h>

typedef enum TipoExcepcion {
	negativo, mayor, cero
};

void IndicarAnno(int e)  {
	//TipoExcepcion ex;
	if(e<0)  {
		throw negativo;
	}
	else if(e>3000)  {
		throw mayor;
	}
	else if(e == 0)  {
		throw cero;
	}
	else{
		printf("El anno es %d.\n",e);
	}
}

int main()  {
	int e;
	printf("Introduce el anno: ");
	scanf("%d",&e);
	try  {
		IndicarAnno(e);
		}
		catch(TipoExcepcion ex)  {
			if(ex == negativo)  {
				printf("Error: El anno indicado es negativo.\n");
			}
			else if(ex == mayor)  {
				printf("Error: El anno indicado es mayor de 3000\n");
			}
			else if(ex == cero)  {
				printf("Error: El anno indicado es cero.\n");
			}
		}
}

