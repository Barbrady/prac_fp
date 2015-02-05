#include<stdio.h>
#include"Procesos.h"

int main()  {
	TipoProcesos procesos;
	TipoProceso proceso;
	procesos.CrearLista();
	//for(int i=0; i<10; i++)  {
    //   proceso.codigo = i+3;
	//   proceso.t_ejecucion = float(i);
	//   procesos.InsertarProceso(proceso);
	//}
	proceso.codigo = 1234;
	proceso.t_ejecucion = 12.29;
	procesos.InsertarProceso(proceso);
	proceso.codigo = 124;
	proceso.t_ejecucion = 12.46;
	procesos.InsertarProceso(proceso);
	proceso.codigo = 234;
	proceso.t_ejecucion = 12.66;
	procesos.InsertarProceso(proceso);
	proceso.codigo = 134;
	proceso.t_ejecucion = 62.24;
	procesos.InsertarProceso(proceso);
	proceso.codigo = 2364;
	proceso.t_ejecucion = 2.24;
	procesos.InsertarProceso(proceso);
	proceso.codigo = 13564;
	proceso.t_ejecucion = 1.24;
	procesos.InsertarProceso(proceso);
	
	
	
	
	
	
	procesos.ImprimirLista();
	procesos.BorrarProceso(2364);

	procesos.ImprimirLista();
}
	
