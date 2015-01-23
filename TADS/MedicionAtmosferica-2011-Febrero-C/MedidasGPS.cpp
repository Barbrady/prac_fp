#include <stdio.h>
#include "MedidasGPS.h"

void TipoMedidas::IniciarMedidas(TipoCoordenada c)  {
	coordenada = c;
	for(int i=0; i<N_DATOS; i++) {
		dato[i].valor = 0.0;
		dato[i].vacio = true;
	}
}

void TipoMedidas::GuardarDatos(float presion)  {
	int i=0;
	while(i<N_DATOS && !dato[i].vacio)  {
		i++;
	}
	dato[i].valor = presion;
	dato[i].vacio = false;
}

void TipoMedidas::MostrarDatos()  {
	for(int i=0; i<N_DATOS; i++)  {
		printf("El valor %d es %.4f.\n",i+1,dato[i].valor*MBAR);
	}
}
