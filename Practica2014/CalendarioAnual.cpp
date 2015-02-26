/* ***********************************************************************************
 *  Módulo: CalendarioAnual
 *
 *  Este módulo define el Tipo Abstracto de Dato CalendarioAnual, capaz de la estructura
 *  anual de un calendario, formado por cuatro lineas denominadas cabecera, donde figuran
 *  el año en cuestión, cada uno de los 12 meses y los días de la semana. 
 *  Este módulo es capaza de guardar los datos en una variable tipo Pantalla y de declarar
 *  variables tipo CalendarioMensual.
 **************************************************************************************/
#include <stdio.h>
#include <string.h>
#include "CalendarioAnual.h"
#include "CalendarioMensual.h"
#include "Pantalla.h"

/* Procedimiento para iniciar el vector de trabajo */
void IniciarVector (TipoVector v)  {
  for (int i=0; i<MAX_VECTOR; i++)  {
    v[i]= ' ';
  }
}

/* Procedimiento para imprimir el vector de trabajo (Para pruebas) */
void ImprimirVector(TipoVector v)  {
  for (int i=0; i<MAX_VECTOR; i++)  {
    printf("%c",v[i]);
  }
  printf("\n");
}

/* Procedimiento para pasar un año int a año String */
void EnteroString (int anno, TipoAnno s_anno)  {
  sprintf(s_anno,"%d",anno);
}

/* Procedimiento para añadir un año al final del vector */
void AnnadirAnno(int anno, TipoVector v)  {
  TipoAnno s_anno;
  int k=0;
  int i=MAX_VECTOR-MAX_VANNO+1;
  EnteroString(anno,s_anno);
  while (v[i] != '\0')  {
    v[i] = s_anno[k];
    k++;
    i++;
  }
}

/* Procedimiento para añadir un mes a un String */
void MesString(int mes, TipoMes s_mes)  {
  switch (mes)  {
  case 1:
    strcpy (s_mes, "ENERO");
    break;
  case 2:
    strcpy (s_mes, "FEBRERO");
    break;
  case 3:
    strcpy (s_mes, "MARZO");
    break;
  case 4:
    strcpy (s_mes, "ABRIL");
    break;
  case 5:
    strcpy (s_mes, "MAYO");
    break;
  case 6:
    strcpy (s_mes, "JUNIO");
    break;
  case 7:
    strcpy (s_mes, "JULIO");
    break;
  case 8:
    strcpy (s_mes, "AGOSTO");
    break;
  case 9:
    strcpy (s_mes, "SEPTIEMBRE");
    break;
  case 10:
    strcpy (s_mes, "OCTUBRE");
    break;
  case 11:
    strcpy (s_mes, "NOVIEMBRE");
    break;
  case 12:
    strcpy (s_mes, "DICIEMBRE");
    break;
  }
}

/* Procedimiento para añadir mes a principio del vector de trabajo */
void AnnadirMes(TipoVector v, int i)  {
  int j=0;
  TipoMes s_mes;
  IniciarVector(v);
  MesString(i,s_mes);
  while (s_mes[j] != '\0')  {
    v[j] = s_mes[j];
    j++;
  }
}

/* Procedimiento para añadir un vector a la pantalla */
void InsertarenPantalla(TipoVector v, TipoPantalla &p, int f, int c)  {
  int i=0;
  while (v[i] != '\0')  {
    p.matriz[f][c] = v[i];
    c++;
    i++;
  }
}

/* Procedimiento para generar y guardar la cabecera con mes y año */
void GenerarCabeceraMes(TipoVector v, int i, int anno)  {
  AnnadirMes(v,i);
  AnnadirAnno(anno,v);

}

/* Procedimiento para generar y guradar separador */
void GenerarSeparador(TipoVector v)  {
  IniciarVector(v);
  for (int i=0; i<MAX_VECTOR; i++)  {
    v[i] = '=';
  }
}

/* Procedimiento para generar los días de la semana */
void GenerarCabeceraDias(TipoVector v)  {
  IniciarVector(v);
  strcpy (v, "LU MA MI JU VI | SA DO");
}

/* Procedimiento para generar un año */
void TipoCalendarioAnual::GenerarCalendario()  {
  
  /* Declarar variables */
  int c,f;                          //Contadores filas y columnas
  TipoPantalla pantalla;            //Declaración de variable del tipo TAD Pantalla
  TipoCalendarioMensual cmes;       //Declaración de variable del tipo TAD CalendarioMensual 
  
  /* Iniciar pantalla */
  pantalla.IniciarPantalla();
  
  /* Iniciar contadores de filas y columnas */
  c = 0;
  f = 0;
  
  /* Dar valor a la variable año del TAD CalendarioMensual */
  cmes.cm_anno = ca_anno;
  
  /*  Generar meses, con cabecera y numeros, e incluirlos en la variable pantalla */
  for (int i=1; i<=12; i++)  {
      
      /* Generar Cabecera */
      GenerarCabeceraMes(ca_vector,i,ca_anno);           //Generar primera linea de la cabecera, pasando vector, i->mes y año
      InsertarenPantalla(ca_vector,pantalla,f,c);        //Insertar el vector en pantalla
      GenerarSeparador(ca_vector);                       //Generar sepadador
      InsertarenPantalla(ca_vector,pantalla,f+1,c);      //Insertar separadores en pantalla
      InsertarenPantalla(ca_vector,pantalla,f+3,c);      //
      GenerarCabeceraDias(ca_vector);                    //Generar la linea de los días (LU, MA ... etc) 
      InsertarenPantalla(ca_vector,pantalla,f+2,c);      //Insertar el vector con los días en pantalla
      
      /* Generar Mes */
      cmes.cm_mes = i;                                   // Asignación del mes a la variable mes del tipo CalendarioMensual
      cmes.GenerarMes();                                 //Genera los números del mes y los guarda en su matriz
      cmes.InsertarMesPantalla(pantalla,f+4,c);          //Insertar la matriz generada en la variable pantalla, pasada como argumento
      
      /* Calculo de siguiente fila y columna */
      c=c+SH;
      if (c>48)  {
          f=f+SV;
          c=0;
      }
  }
  
  /*  Imprimir pantalla generada */
  pantalla.EscribirPantalla();  //Procedimiento del TAD Pantalla que imprime la matriz en pantalla
}
