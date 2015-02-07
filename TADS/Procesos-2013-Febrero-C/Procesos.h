#pragma once
const int NPROCESOS = 10;

typedef struct TipoProceso  {
	int codigo;
	float t_ejecucion;
};

typedef TipoProceso TipoListaProcesos[NPROCESOS];

typedef struct TipoProcesos  {
	TipoListaProcesos proceso;
	void CrearLista();
	void InsertarProceso(TipoProceso p);
	void BorrarProceso(int n);
	void ImprimirLista();
	private:
		bool ProcesoenLista(TipoProceso p);
		int PrimerProcesoLibre();
		int ProcesoMenorTiempoE();
};
