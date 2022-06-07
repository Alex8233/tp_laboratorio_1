/*
 * datos.c
 *
 *  Created on: 10 abr. 2022
 *      Author: fatim
 */
#include <stdio.h>
#include <stdlib.h>
#include "funcione.h"

int opciones(int opcion, int *flagDos, int *flagTres, int *flag, float latam, float aerolineas, int km)
{

	 if(*flag == 0)
	 {
		printf("\n\n1- Ingresar Kilómetros(km=x). \n"
				"2- Ingresar Precio de Vuelos.(Aerolíneas=y, Latam=z) \n"
				"3- Calcular todos los costos. \n"
				"4- Informar Resultados. \n"
				"5- Carga forzada de datos. \n"
				"6- Salir. \n"
				"\n Ingrese la opción deseada: ");
		scanf("%d",&opcion);
		*flag = 1;
	 }
	 if(*flagDos == 1)
	 {
			printf("\n\n1- Ingresar Kilómetros(km = %d). \n"
					"2- Ingresar Precio de Vuelos.(Aerolíneas=y, Latam=z) \n"
					"3- Calcular todos los costos. \n"
					"4- Informar Resultados. \n"
					"5- Carga forzada de datos. \n"
					"6- Salir. \n"
					"\n Ingrese la opción deseada: ",km);
			scanf("%d",&opcion);
	 }
	 if(*flagTres == 1)
	 {
			printf("\n\n1- Ingresar Kilómetros(km=%d). \n"
					"2- Ingresar Precio de Vuelos.(Aerolíneas= $%.2f, Latam= $%.2f) \n"
					"3- Calcular todos los costos. \n"
					"4- Informar Resultados. \n"
					"5- Carga forzada de datos. \n"
					"6- Salir. \n"
					"\n Ingrese la opción deseada: ",km,latam,aerolineas);
			scanf("%d",&opcion);
	 }
	return opcion;
}
int pedirUno(int km)
{
	printf("\nIngrese cantidad de km: ");
	scanf("%d",&km);
	while(!(km >= 0))
	{
		printf("\nERROR, INGRESE LA CANTIDAD DE KM");
		scanf("%d",&km);
	}

	return km;
}
float pedirDos(float latam)
{
	printf("\nPrecio de vuelo Aerolinea Latam:");
	scanf("%f",&latam);
	while(latam <= 0 )
	{
		printf("\nERROR,ingrese precio de vuelo a latam:");
		scanf("%f",&latam);

	}
	return latam;
}
float pedirTres(float aerolineas)
{
	printf("\nPrecio de vuelo en Aerolinea Argentina: ");
	scanf("%f",&aerolineas);
	while(aerolineas <= 0)
	{
		printf("\nERROR,ingrese precio de vuelo en Aerolinea Argentina: ");
		scanf("%f",&aerolineas);
	}
	return aerolineas;
}
void funcioncaseTres(float latam,int km,float aerolineas, float* debitoLatam1, float* creditoLatam1, float* bitcoinLatam1, float* precioUnitarioLatam1, float* debitoAerolineas2, float* creditoAerolineas2, float* bitcoinAerolineas2, float* precioUnitarioAerolineas2, float* diferencia2)
{
	*debitoLatam1 = debito(latam);
	*creditoLatam1 = credito(latam);
	*bitcoinLatam1 = bitcoin(latam);
	*precioUnitarioLatam1 = precioUnitario(latam,km);

	*debitoAerolineas2 = debito(aerolineas);
	*creditoAerolineas2 = credito(aerolineas);
	*bitcoinAerolineas2 = bitcoin(aerolineas);
	*precioUnitarioAerolineas2 = precioUnitario(aerolineas,km);

	*diferencia2 = diferencia(latam,aerolineas);

}
int funcionDos(float latam,float aerolineas,int km,float debitoLatam1,float creditoLatam1,float bitcoinLatam1,float precioUnitarioLatam1,float debitoAerolineas2,float creditoAerolineas2,float bitcoinAerolineas2,float precioUnitarioAerolineas2,float diferencia2)
{

	printf("\nKMs Ingresados: %d km"
			"\n\nPrecio Aerolineas: $ %.2f"
			"\na) Precio con tarjeta de debito: $ %.2f"
			"\nb) Precio con tarjeta de credito: $ %.2f"
			"\nc) Precio pagando con bitcoin: $ %.2f"
			"\nd) Mostrar precio unitario: $ %.2f"
			"\n\nPrecio Latam: $ %.2f"
			"\na) Precio con tarjeta de debito: $ %.2f"
			"\nb) Precio con tarjeta de credito: $ %.2f"
			"\nc) Precio pagando con bitcoin: $ %.2f"
			"\nd) Mostrar precio unitario: $ %.2f"
			"\n\n Diferencia: %.2f",km, aerolineas, debitoAerolineas2, creditoAerolineas2, bitcoinAerolineas2, precioUnitarioAerolineas2, latam, debitoLatam1, creditoLatam1, bitcoinLatam1, precioUnitarioLatam1, diferencia2);
	return 0;
}

