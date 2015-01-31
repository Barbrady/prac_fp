#include <stdio.h>
#include "Quiniela.h"
#include <string.h>

void TipoQuiniela::IniciarQuiniela()  {
	for(int i=0; i<NCOLUMNAS; i++)  {
		columna[i].nColumna = i+1;
		columna[i].libre = true;
		for(int j=0; j<NEQUIPOS; j++)  {
			columna[i].resultado[j] = EQUIS;
		}
	}
	for(int i=0; i<NEQUIPOS; i++)  {
		partido[i].nPartido = i+1;
		strcpy(partido[i].equipoLocal,"LOCAL");
		strcpy(partido[i].equipoVisitante,"VISITANTE");
	}
}

void TipoQuiniela::NuevaApuesta()  {
	char c;
	int i=0;
	while(!columna[i].libre && i<NCOLUMNAS)  {
		i++;
	}
	if(i<NCOLUMNAS)  {
		for(int j=0; j<NEQUIPOS; j++)  {
			printf("Introduzca el resultado para el partido (1,X,2) %d:",i+1);
			scanf("%c",&c);
			columna[i].resultado[j]=AsignarResultado(c);
			columna[i].libre = false;
		}
	}
}

void TipoQuiniela::ImprimirQuiniela()  {
	for(int i=0; i<NEQUIPOS; i++)  {
		printf("Partido %d - %s vs %s : ",partido[i].nPartido,partido[i].equipoLocal,partido[i].equipoVisitante);
		int j=0;
		while(!columna[j].libre && j<NCOLUMNAS)  {
			printf("Col%d = ",columna[j].nColumna);
			switch(columna[j].resultado[i])  {
				case UNO:
				printf("UNO ");
				break;
				case EQUIS:
				printf("EQUIS ");
				break;
				case DOS:
				printf("DOS ");
				break;
				default:
				printf("ERROR");
			}
			j++;
		}
		printf("\n");
	}
}

TipoResultado TipoQuiniela::AsignarResultado( char c)  {
	switch (c)  {
		case '1':
		return  UNO;
		break;
		case 'x':
		case 'X':
		return  EQUIS;
		break;
		case '2':
		return  DOS;
		break;
		default:
		printf("No se ha introducio resultado correcto.");
	}
}

