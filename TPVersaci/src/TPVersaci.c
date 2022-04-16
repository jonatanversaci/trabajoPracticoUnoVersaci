/*
 ============================================================================
 Name        : TPVersaci.c
 Author      : Versaci
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include "libreriaTP.h"

int menu;
int kilometro;
float precioVueloAerolineas;
float precioVueloLatam;
float precioTarjetaDebitoAerolineas;
float precioTarjetaDebitoLatam;
float porcentajeDescuentoDebito = 0.9;
float precioTerjetaCreditoLatam;
float precioTerjetaCreditoAerolineas;
float interesTarjetaCredito = 1.25;
float precioKmLatam;
float precioKmAerolineas;
float diferenciaVuelos;
float BTC = 40106.97;
float precioBTCLatam;
float precioBTCAerolineas;
int banderaMenuOpcionUno = 0;
int banderaMenuOpcionDos = 0;
int banderaMenuOpcionTres = 0;
int banderaMenuOpcionCinco = 0;


int main(void) {

	setbuf(stdout, NULL);



do{
		if(banderaMenuOpcionCinco == 0 ){
		getInt("ingrese el numero del menu: ", 3,0,10,"numero incorrecto, ingrese otro: ",&menu);
		}else if(banderaMenuOpcionTres ==0)
		{

		menu = 3;
		}else{
			menu = 4;
		}


		switch (menu)
		{
		case 1:
		if(banderaMenuOpcionUno == 0)
		{
		getInt(" ingrese los kilometros: ", 3,0,510000000,"numero incorrecto, ingrese otro: ", &kilometro);
		banderaMenuOpcionUno = 1;
		}
		else{
		printf("\n dato ya ingresado");
		}
		break;


		case 2:
		if(banderaMenuOpcionDos==0){
		getFloat("ingrese el precio del vuelo de aerolineas: ", 3,0,1000000,"numero incorrecto, ingrese otro: ", &precioVueloAerolineas);
		getFloat("ingrese el precio del vuelo de aerolineas: ", 3,0,1000000,"numero incorrecto, ingrese otro: ", &precioVueloLatam);
		banderaMenuOpcionDos = 1;
		}
		else{
		printf("\n dato ya ingresado \n");
		}

		break;


		/*punto 3. Calcular todos los costos:
		a) Tarjeta de débito (descuento 10%)
		b) Tarjeta de crédito (interés 25%)
		c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
		d) Mostrar precio por km (precio unitario)
		e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)*/
		case 3:
		if(banderaMenuOpcionDos == 1 && banderaMenuOpcionUno == 1 && banderaMenuOpcionTres == 0){
		precioTarjetaDebitoAerolineas = multiplicar(precioVueloAerolineas,porcentajeDescuentoDebito);
		precioTarjetaDebitoLatam = multiplicar(precioVueloLatam,porcentajeDescuentoDebito);
		precioTerjetaCreditoAerolineas = multiplicar(precioVueloAerolineas, interesTarjetaCredito);
		precioTerjetaCreditoLatam = multiplicar(precioVueloLatam, interesTarjetaCredito);
		precioKmLatam = precioVueloLatam / kilometro;
		precioBTCAerolineas = precioVueloAerolineas/BTC;
		precioBTCLatam = precioVueloLatam/BTC;
		precioKmAerolineas = precioVueloAerolineas/kilometro;
		diferenciaVuelos = restar(precioVueloLatam, precioVueloAerolineas);
		diferenciaVuelos = cambiarSimboloPositivo(diferenciaVuelos);
		banderaMenuOpcionTres = 1;
		}
		else if(banderaMenuOpcionTres == 1){
		printf("\n ya ingresamos a esta opcion de menu");
		}
		else
		{
		printf("\n tiene que ingresar primero la opcion 1 y 2");
		}

		break;
		case 4:
			if((banderaMenuOpcionDos==1 && banderaMenuOpcionTres ==1 && banderaMenuOpcionUno ==1)||banderaMenuOpcionCinco == 1)
			{
				printf("\n kilmetros ingresados : %d \n\n Precio aerolineas: $ %.2f \n a) Precio con tarjeta de debito : $ %.2f"
						"\n b)Precio con tarjeta de credito : $ %.2f \n c) Precio pagando con bitcon : $ %.2f \n d) Mostrar precio unitarios : $ %.2f ", kilometro,
						precioVueloAerolineas, precioTarjetaDebitoAerolineas,precioTerjetaCreditoAerolineas,precioBTCAerolineas,precioKmAerolineas);
				printf("\n\n Precio latam: $ %.2f \n a) Precio con tarjeta de debito : $ %.2f \n b)Precio con tarjeta de credito : $ %.2f "
						"\n c) Precio pagando con bitcon : $ %.2f \n d) Mostrar precio unitarios : $ %.2f ", precioVueloLatam, precioTarjetaDebitoLatam,
						precioTerjetaCreditoLatam,precioBTCLatam,precioKmLatam);
				printf("\n \n La diferencia de precio es : $ %.2f \n ", diferenciaVuelos);

				banderaMenuOpcionUno = 0;
				banderaMenuOpcionDos = 0;
				banderaMenuOpcionTres = 0;
				banderaMenuOpcionCinco = 0;
			}
			else{
				printf("\n falta ingresar datos");
			}


		break;
		case 5:
		/*Km: 7090
		Aerolineas Argentinas: $162965
		Latam: $ 159339*/
		if(banderaMenuOpcionDos == 0 && banderaMenuOpcionUno == 0){

		kilometro = 7090;
		precioVueloAerolineas = 162965;
		precioVueloLatam = 159339;

		banderaMenuOpcionUno = 1;
		banderaMenuOpcionDos = 1;
		banderaMenuOpcionCinco = 1;
		}else{
		printf("no se puede hacer cargaforzada, ya se ingresaron datos, y estos se perderan \n");
		}
		break;

		case 6:
		menu = 6;
		break;
		}

	}while(menu!=6);


return 0;
}
