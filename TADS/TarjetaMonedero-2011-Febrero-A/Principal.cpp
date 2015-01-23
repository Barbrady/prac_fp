#include <stdio.h>
#include "Tarjeta.h"

int main()  {
	TipoTarjeta tarjeta;
	TipoFecha fecha;
	bool prueba;
	tarjeta.saldo=0.0;
	float dinero = 13.5;
	fecha.dia = 1;
	fecha.mes = 1;
	fecha.anno = 2015;
	//tarjeta.saldo = 10.0;
	for(int i=0; i<9; i++)  {
		tarjeta.CargarDinero(fecha,dinero);
	}
	prueba = tarjeta.SacarDinero(fecha,1.0);
	prueba = tarjeta.SacarDinero(fecha,3.4);
	prueba = tarjeta.SacarDinero(fecha,7.2);
	printf("El saldo es %f.\n",tarjeta.saldo);

	tarjeta.ConsultarSaldo();
}
