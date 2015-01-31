#include <stdio.h>
#include "Quiniela.h"


int main()  {
	TipoQuiniela quiniela;
	quiniela.IniciarQuiniela();
	//quiniela.columna[1].libre = false;
	quiniela.NuevaApuesta();
	quiniela.ImprimirQuiniela();
}
