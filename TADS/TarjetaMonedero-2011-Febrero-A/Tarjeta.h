#pragma once

const int N_OPERACIONES = 10;

typedef enum TipoEjecucion  {
	cargar, sacar, consultar 
};

typedef struct TipoFecha  {
	int dia;
	int mes;
	int anno;
};

typedef struct TipoOperacion  {
	TipoEjecucion ejecucion;
	TipoFecha fecha;
	float cantidad;
};

typedef TipoOperacion TipoOperaciones[N_OPERACIONES];

typedef struct TipoTarjeta  {
	TipoOperaciones operacion;
	float saldo;
	void CargarDinero (TipoFecha fecha, float dinero);
	bool SacarDinero (TipoFecha fecha, float dinero);
	void ConsultarSaldo ();
	private:
	 void ImprimirEjecucion(TipoEjecucion ejecucion);
};
