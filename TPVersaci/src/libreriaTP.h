/*
 * libreriaTP.h
 *
 *  Created on: 16 abr. 2022
 *      Author: SenestraSergio
 */

#ifndef LIBRERIATP_H_
#define LIBRERIATP_H_
#include <stdio.h>
#include <stdlib.h>

int getInt(char mensaje[], int reintentos,int minimo, int maximo, char mensajeError[],int *pNumero);
float sumar(float n1, float n2);
float restar(float n1, float n2);
float multiplicar(float n1, float n2);
int getFloat(char mensaje[], int reintentos,int minimo, int maximo, char mensajeError[],float *pNumero);
float cambiarSimboloPositivo(float n1);

#endif /* LIBRERIATP_H_ */
