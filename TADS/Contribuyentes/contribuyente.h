#pragma once
const int PERSONAS = 50;
const int L_NOMBRE = 15;
typedef char TipoNombres[L_NOMBRE];
typedef struct TipoPersona  {
	TipoNombres nombre;
	float salario;
};

typedef struct TipoContribuyentes  {
	TipoPersona persona[PERSONAS];
	void IniciarSalario();
	void OrdenarContribuyentes();
	void Mostrar();
};
