#include <stdio.h>
#include "MedidasGPS.h"

int main()  {
	TipoMedidas medidas;
	TipoCoordenada coordenada;
	coordenada.latitud = 10.5;
	coordenada.longitud = 12.5;
	coordenada.altura = 8.75;
	medidas.IniciarMedidas(coordenada);
	for(int i=0; i<25; i++)  {
		medidas.GuardarDatos(float(i*3));
	}
	medidas.MostrarDatos();
}

