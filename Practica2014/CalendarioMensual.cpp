/* ***********************************************************************************
 *  Módulo: CalendarioMensual
 *
 *  Este módulo define el Tipo Abstracto de Dato CalendarioMensual, capaz de generar
 *  una matriz de hasta 6x22 e incluir en ella los días (en número) de un determinado mes
 *  en función del año. Este TAD será capaz de introducir información en una variable 
 *  TipoPantalla indicando la fila y la columna donde se quiere iniciar la insercción.
 **************************************************************************************/
#include <stdio.h>
#include "CalendarioMensual.h"
#include "Pantalla.h"

/* Procedimiento para iniciar la matriz del mes */
void IniciarMes(TipoMatrizMes mes)  {
  for (int i=0; i<MES_F; i++)  {
    for (int j=0; j<MES_C; j++)  {
      if (j==1 || j==4 || j==7 || j==10 || j==13 || j==18 || j==21)  {
        mes[i][j] = '.';
      } else {
        mes[i][j] = ' ';
      }
      if (j==15)  {
        mes[i][j] = '|';
      }
    }
  }
}

/* Procedimiento para pasar un entro a una cadena String */
void NumeroString(StringDia d, int n)  {
  sprintf(d,"%d",n);
  if (n<10) {
    d[1] = d[0];
    d[0] = ' ';
  }
}

/* Función que calcula los días de un mes */
int DiasMes(int n, bool b)  {
  if (n>0 && n<13)  {
    switch (n) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      return 31;
      break;
    case 2:
      if (b) {
        return 29;
      } else {
        return 28;
      }
      break;
    default:
      return 30;
    }
  } else {
    return -1;
  }
}

/* Función que calcula la posición dentro de la matriz */
int CalcularPosicion(int n)  {
  int resto, posicion;
  resto = n%7;
  switch (resto)  {
  case 0:
    posicion = 20;
    break;
  case 1:
    posicion = 0;
    break;
  case 2:
    posicion = 3;
    break;
  case 3:
    posicion = 6;
    break;
  case 4:
    posicion = 9;
    break;
  case 5:
    posicion = 12;
    break;
  case 6:
    posicion = 17;
    break;
  }
  return posicion;
}

/* Función que calcula si un año es bisiesto */
bool Bisiesto (int annio)  {
  if ((annio%4 == 0 && annio%100 != 0) || annio%400 == 0)  {
    return true;
  } else {
    return false;
  }
}

/*Procedimiento que corrige la posición si el año es bisiesto y el mes mayor que febrero */
void CorrecionBisiesto(int &pos, int mes, int anno)  {
  if (Bisiesto(anno) && mes>2)  {
    pos++;
  }
}

/* Función que calcula el desfase de días con respecto al año */
int DesfaseAnnio(int annio)  {
  int desfase = 0;
  for (int i=1601; i<annio; i++)  {
    desfase++;
    if (Bisiesto(i))  {
      desfase++;
    }
  }
  return desfase;
}

/* Función que calcula el desfase de días con respecto al mes */
int DesfaseMes(int mes) {
  int desfase = 0;
  switch (mes)  {
  case 1:
  case 10:
    desfase = 0;
    break;
  case 5:
    desfase = 1;
    break;
  case 8:
    desfase = 2;
    break;
  case 2:
  case 3:
  case 11:
    desfase = 3;
    break;
  case 6:
    desfase = 4;
    break;
  case 9:
  case 12:
    desfase = 5;
    break;
  case 4:
  case 7:
    desfase = 6;
    break;
  }
  return desfase;
}

/* Procedimiento para generar un mes */
void TipoCalendarioMensual::GenerarMes()  {
  StringDia d;
  int f,c,pos,dias;
  IniciarMes(mes);
  dias = DiasMes(cm_mes,Bisiesto(cm_anno));
  f=0;
  pos=(DesfaseMes(cm_mes)+DesfaseAnnio(cm_anno)+1)%7;
  CorrecionBisiesto(pos,cm_mes,cm_anno);
  for (int i=1; i<=dias; i++)  {
    NumeroString(d,i);
    c=CalcularPosicion(pos);
    mes[f][c] = d[0];
    c++;
    mes[f][c] = d[1];
    if (c>=20)  {
      f++;
    }
    pos++;
  }
}

/* Procedimiento para insertar en un TAD TipoPantalla un mes, indicando la fila y la columna inicial */
void TipoCalendarioMensual::InsertarMesPantalla(TipoPantalla &pantalla, int f, int c)  {
  int aux_c=c;
  int filas = MES_F-1;
  /* Seleccionar el número de filas que se van a insertar */
  if (mes[5][1] != '.')  {
    filas = MES_F;
  }
  /* Insertar matriz de mes en matriz de pantalla */
  for (int i=0; i<filas; i++)  {
    for (int j=0; j<MES_C; j++)  {
      pantalla.matriz[f][aux_c] = mes[i][j];
      aux_c++;
    }
    aux_c=c;
    f++;
  }
}

