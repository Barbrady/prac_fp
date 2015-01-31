#pragma once

const int NSTRING = 9;
const int NEQUIPOS = 14;
const int NCOLUMNAS = 8;
const float PRECIO = 0.60;

typedef char TipoString[NSTRING];

typedef struct TipoPartido  {
	int nPartido;
	TipoString equipoLocal;
	TipoString equipoVisitante;
};

typedef TipoPartido TipoPartidos[NEQUIPOS];

typedef enum TipoResultado {
	UNO, EQUIS, DOS
};

typedef TipoResultado TipoResultados[NEQUIPOS];

typedef struct TipoColumna  {
	int nColumna;
	TipoResultados resultado;
	bool libre;
};

typedef TipoColumna TipoColumnas[NCOLUMNAS];

typedef struct TipoQuiniela  {
	TipoPartidos partido;
	TipoColumnas columna;
	void IniciarQuiniela();
	void NuevaApuesta();
    float CalcularPrecio();
	bool ExistePremio(TipoResultados r);
	void ImprimirQuiniela();
	private:
		TipoResultado AsignarResultado(char c);
};

