#pragma once

const int N_DATOS = 50;
const float MBAR = 1.3332;

typedef struct TipoCoordenada  {
	float latitud;
	float longitud;
	float altura;
};

typedef struct TipoDato  {
	float valor;
	bool vacio;
};

typedef TipoDato TipoVectorDatos[N_DATOS];

typedef struct TipoMedidas  {
	TipoVectorDatos dato;
	TipoCoordenada coordenada;
	void GuardarDatos(float presion);
	void MostrarDatos();
	void IniciarMedidas(TipoCoordenada c);
};

