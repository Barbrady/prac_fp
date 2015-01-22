#include <stdio.h>
#include "Pedido.h"

bool TipoPedido::ComprobarGeneroProductos()  {
  TipoGenero aux;
  aux = producto[0].genero;
  for(int i=1; i<N_PRODUCTOS; i++)  {
    if(producto[i].genero != aux)  {
      return false;
    }
  }
  return true;
}

bool TipoPedido::ComprobarPesoPedido(float pesoMaximo)  {
  float aux = 0.0;
  for(int i=0; i<N_PRODUCTOS; i++)  {
    aux = aux + producto[i].peso;
  }
  if(aux > pesoMaximo)  {
    return false;
  }
  else{
    return true;
  }
}

float TipoPedido::CalcularPrecioPedido()  {
  float aux = 0.0;
  for (int i=0; i<N_PRODUCTOS; i++)  {
    aux = aux + producto[i].precio;
  }
  return aux;
}
