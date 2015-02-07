#pragma once

const int N = 3;

typedef enum TipoExcepcion {
	NoPrimario, NoColor
};

typedef enum TipoColor  {
	Rojo, Amarillo, Azul, Naranja, Violeta, Verde
};

typedef TipoColor TipoMatriz[N][N];

typedef struct TipoMatrizColores {
	TipoMatriz matriz;
	void MezclarMatrices(TipoMatriz matriz1, TipoMatriz matriz2);
	void ImprimirMatriz();
	private:
	TipoColor MezclarColor(TipoColor color1, TipoColor color2);
	void ComprobarColor(TipoColor color);
};
