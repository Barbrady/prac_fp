#pragma once

const int N_MEDIDAS = 10;

typedef float TipoValor[N_MEDIDAS];
typedef struct TipoMedidas  {
	TipoValor valores;
	void NuevasMedidas();
	bool ComprobarMedidas(float rango);
	void ImprimirVector();
};
