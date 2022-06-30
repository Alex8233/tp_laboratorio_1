/*
 ============================================================================
 Name        : tp_laboratorio.c
 Author      : Zalazar Duran Alex DIV D
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar Kilómetros: ( km=x)
2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
- Precio vuelo Aerolíneas:
- Precio vuelo Latam:
3. Calcular todos los costos:
a) Tarjeta de débito (descuento 10%)
b) Tarjeta de crédito (interés 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
4. Informar Resultados
“Latam:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerolíneas:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
La diferencia de precio es : r “
5. Carga forzada de datos
6. Salir*/

#include <stdio.h>
#include <stdlib.h>
#include "funcione.h"
#include "datos.h"
int main(void) {
	setbuf(stdout,NULL);
	int km = 0;
	int opcion = 0;

	float latam = 0;
	float creditoLatam1;
	float debitoLatam1;
	float bitcoinLatam1;
	float precioUnitarioLatam1;


	float aerolineas = 0;
	float creditoAerolineas2;
	float debitoAerolineas2;
	float bitcoinAerolineas2;
	float precioUnitarioAerolineas2;
	float diferencia2;
	int contador = 0;
	int flag = 0;
	int flagDos = 0;
	int flagTres = 0;

do{
		opcion = opciones(opcion,&flagDos,&flagTres,&flag,latam,aerolineas,km);
	switch(opcion)
	{
	case 1:
		if(latam ==0 && aerolineas ==0)
		flagDos = 1;

		km = pedirUno(km);
		if(latam > 0 && aerolineas > 0 )
			flagTres =1;
		break;
	case 2:
		flagDos = 0;
		flagTres = 1;
		latam = pedirDos(latam);
		aerolineas = pedirTres(aerolineas);

		break;
	case 3:
		if(latam == 0 || aerolineas == 0 || km == 0)
		{
			printf("\nERROR, INGRESE LOS PRECIOS Y KM(PRESIONE 1 O 2)");
			if(latam == 0 && aerolineas == 0 && km == 0)
			{
				flag = 0;
			}
			if(latam == 0 && aerolineas == 0 && km != 0)
			{
				flagDos = 1;
			}
		}
		else
		{
			funcioncaseTres(latam, km, aerolineas, &debitoLatam1, &creditoLatam1, &bitcoinLatam1, &precioUnitarioLatam1, &debitoAerolineas2, &creditoAerolineas2, &bitcoinAerolineas2, &precioUnitarioAerolineas2, &diferencia2);
			contador = 1;
		}
		break;
	case 4:
		if(contador == 1)
		{
			funcionDos(latam,aerolineas,km,debitoLatam1,creditoLatam1,bitcoinLatam1,precioUnitarioLatam1,debitoAerolineas2,creditoAerolineas2,bitcoinAerolineas2,precioUnitarioAerolineas2,diferencia2);
		}
		else
		{
			printf("\nERROR, NO SE REALIZARON LOS CALCULOS(PRESIONE 3)");
			if(latam == 0 && aerolineas == 0 && km == 0)
			{
				flag = 0;
			}
			if(latam == 0 && aerolineas == 0 && km != 0)
			{
				flagDos = 1;
			}

		}

		break;
	case 5:
		latam = 159339;
		km = 7090;
		aerolineas = 162965;
		funcioncaseTres(latam, km, aerolineas, &debitoLatam1, &creditoLatam1, &bitcoinLatam1, &precioUnitarioLatam1, &debitoAerolineas2, &creditoAerolineas2, &bitcoinAerolineas2, &precioUnitarioAerolineas2, &diferencia2);
		funcionDos(latam,aerolineas,km,debitoLatam1,creditoLatam1,bitcoinLatam1,precioUnitarioLatam1,debitoAerolineas2,creditoAerolineas2,bitcoinAerolineas2,precioUnitarioAerolineas2,diferencia2);
		flagTres = 1;
		break;
	case 6:
		printf("\nGRACIAS POR UTILIZAR NUESTROS SERVICIOS");
		break;
	default:
		printf("\nERROR,La opcion no es valida");
		if(latam == 0 && aerolineas == 0 && km == 0)
		{
			flag = 0;
		}
		if(latam == 0 && aerolineas == 0 && km != 0)
		{
			flagDos = 1;
		}
	}
}while(opcion != 6);
	return 0;
}
