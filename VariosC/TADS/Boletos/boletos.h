#pragma once
const int L_BOLETO = 15;

typedef int TipoValor[L_BOLETO];
typedef struct TipoBoleto  {
	TipoValor numero;
	void NuevoBoleto();
	void ImprimirBoleto();
};
