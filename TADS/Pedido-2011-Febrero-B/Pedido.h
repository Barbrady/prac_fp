#pragma once

const int N_PRODUCTOS = 10;

typedef enum TipoGenero {
  alimentacion, vestido, menaje, electronica};

typedef struct TipoArticulo {
  TipoGenero genero;
  int codigo;
  float precio;
  float peso;
};

//typedef TipoArticulo TipoProductos[N_PRODUCTOS];

typedef struct TipoPedido {
  //TipoProductos producto;
  TipoArticulo producto[N_PRODUCTOS];
  int           numeroPedido;
  bool ComprobarGeneroProductos();
  bool ComprobarPesoPedido(float pesoMaximo);
  float CalcularPrecioPedido();
};
