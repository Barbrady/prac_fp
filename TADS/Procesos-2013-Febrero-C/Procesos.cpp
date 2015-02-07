#include <stdio.h>
#include "Procesos.h"

void TipoProcesos::CrearLista()  {
	for(int i =0; i<NPROCESOS; i++)  {
		proceso[i].codigo = 0;
		proceso[i].t_ejecucion = 0.0;
	}
}

bool TipoProcesos::ProcesoenLista(TipoProceso p)  {
	for(int i=0; i<NPROCESOS; i++)  {
		if(proceso[i].codigo == p.codigo)  {
			return true;
		}
	}
	return false;
}

int TipoProcesos::PrimerProcesoLibre()  {
	for(int i=0; i<NPROCESOS; i++)  {
		if(proceso[i].codigo = 0)  {
			return i;
		}
	}
	return -1;
}

int TipoProcesos::ProcesoMenorTiempoE()  {
	int n = 0;
	float menor = proceso[0].t_ejecucion;
	for(int i=0; i<NPROCESOS; i++)  {
		if(proceso[i].t_ejecucion < menor)  {
			menor = proceso[i].t_ejecucion;
			n = i;
		}
	}
	return n;
}



void TipoProcesos::InsertarProceso(TipoProceso p)  {
	int i,j;
	if(ProcesoenLista(p))  {
		while(proceso[i].codigo != p.codigo)  {
			i++;
		}
		proceso[i].t_ejecucion = p.t_ejecucion;
	}
	else  {
		if(PrimerProcesoLibre() < 0)  {
			j = ProcesoMenorTiempoE();
			proceso[j].codigo = p.codigo;
			proceso[j].t_ejecucion = p.t_ejecucion;
		}
		else  {
			i = 0;
			while(proceso[i].codigo != 0)  {
				i++;
			}
			proceso[i].codigo = p.codigo;
			proceso[i].t_ejecucion = p.t_ejecucion;
		}
	}
}

void TipoProcesos::BorrarProceso(int n)  {
	int i=0;
	while(proceso[i].codigo != n && n<NPROCESOS)  {
		i++;
	}
	if(i<NPROCESOS)  {
		proceso[i].codigo = 0;
		proceso[i].t_ejecucion = 0.0;
	}
}

void TipoProcesos::ImprimirLista()  {
	for(int i=0; i<10; i++)  {
		printf("Proceso %d con codigo: %d y tiempo de ejecucion %f.\n",i+1,proceso[i].codigo,proceso[i].t_ejecucion);
	}
}
