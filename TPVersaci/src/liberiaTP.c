/*
 * liberiaTP.c
 *
 *  Created on: 16 abr. 2022
 *      Author:
 */

#include <stdio.h>
#include <stdlib.h>

int getInt(char mensaje[], int reintentos,int minimo, int maximo, char mensajeError[],int *pNumero)
{
	int auxiliarInt;
	int retorno = -1;//salio todo mal
	int retornoScanf;
//revisar que todos los datos esten bien
	if(mensaje != NULL && minimo < maximo && mensajeError != NULL && pNumero != NULL && reintentos > 0)
	{
		printf("%s",mensaje);
		retornoScanf = scanf("%d", &auxiliarInt);
		do{
			if(retornoScanf != 1 || auxiliarInt > maximo ||auxiliarInt < minimo)
			{
				printf("%s", mensajeError);
				retornoScanf = scanf("%d", &auxiliarInt);
				reintentos --;

			}
			else
			{
				reintentos = 0;
				 *pNumero = auxiliarInt;
				 retorno = 0; //salio todo bien
			}

		}while(reintentos > 0);

	}


	return retorno;
}

int getFloat(char mensaje[], int reintentos,int minimo, int maximo, char mensajeError[],float *pNumero)
{
	float auxiliarInt;
	int retorno = -1;//salio todo mal
	int retornoScanf;
//revisar que todos los datos esten bien.
	if(mensaje != NULL && minimo < maximo && mensajeError != NULL && pNumero != NULL && reintentos > 0)
	{
		printf("%s",mensaje);
		retornoScanf = scanf("%f", &auxiliarInt);
		do{
			if(retornoScanf != 1 || auxiliarInt > maximo ||auxiliarInt < minimo)
			{
				printf("%s", mensajeError);
				retornoScanf = scanf("%f", &auxiliarInt);
				reintentos --;
			}
			else
			{
				reintentos = 0;
				 *pNumero = auxiliarInt;
				 retorno = 0;//salio todo bien
			}

		}while(reintentos > 0);

	}
	return retorno;
}

float sumar(float n1, float n2)
{
	float rtn;
	rtn = n1 + n2;

	return rtn;
}

float restar(float n1, float n2)
{
	float rtn;

	rtn = n1 - n2;

	return rtn;
}

float multiplicar(float n1, float n2)
{
	float rtn;
	rtn = n1 * n2;

	return rtn;
}

float cambiarSimboloPositivo(float n1)
{
	int n2 = -1;
	float rtn;
	if(n1 < 0)
	{
	n1 = n1 * n2;
	}
	rtn = n1;

	return rtn;
}
