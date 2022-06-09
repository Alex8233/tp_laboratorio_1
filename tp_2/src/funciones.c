/*
 * funciones.c
 *
 *  Created on: 30 may. 2022
 *      Author: fatim
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ArrayPassenger.h"
#include "funciones.h"
void minusculas(char* array, int tam)
{


	if(array != NULL && tam >0)
	{
		for(int i=0;i<tam;i++)
		{
			array[i]=tolower(array[i]);
		}
	}
}

void opciones(int* opciones)
{
	*opciones =0;
	printf("\nMenu principal: \n"
			"1- ALTA de pasajero.\n"
			"2- MODIFICAR pasajero.\n"
			"3- BAJA de pasajero.\n"
			"4- INFORMAR.\n"
			"5- Carga Forzada.\n"
			"6- Salir.\n"
			"Elija una opción: ");
			fflush(stdin);
			scanf("%d",opciones);
			while(!(*opciones > 0 && *opciones < 7))
			{
				printf("\nERROR!!!,INGRESE UNA OPCION CORRECTA."
						"\nMenu principal: \n"
						"1- ALTA de pasajero.\n"
						"2- MODIFICAR pasajero.\n"
						"3- BAJA de pasajero.\n"
						"4- INFORMAR.\n"
						"5- Carga Forzada.\n"
						"6- Salir.\n"
						"Elija una opción: ");
						fflush(stdin);
						scanf("%d",opciones);
			}

}
int alta(int id, ePassenger* pasajeros, ePassenger pj, int tam)
{
	int retorno = 1;
	if(pasajeros != NULL && tam > 0)
	{
		pj.id= id;
		nombreYCodigo(pj.name,51,"\nIngrese el nombre:","ERROR!!!,vuelva ingresar el nombre:");
		nombreYCodigo(pj.lastName,51,"\nIngrese el apellido:","ERROR!!!,vuelva ingresar el apellido:");
		minusculas(pj.lastName,51);
		precios(&pj.price,"\nIngrese el precio:","\nError!!!,vuelva a ingresar el precio:");
		nombreYCodigo(pj.flycode,10,"\nIngrese el codigo:","ERROR!!!,vuelva ingresar el codigo:");
		minusculas(pj.flycode,10);
		numeroInt(&pj.typePassenger,"\nIngrese el tipo de pasajero(1-Clase turista, 2-Comercial, 3-Primera clase):","ERROR!!!,vuelva ingresar el tipo de pasajero(1-Clase turista, 2-Comercial, 3-Primera clase):",1,3);
		numeroInt(&pj.statusFlight,"Ingrese 1 si su vuelo esta activo y 0 si no lo esta: ","ERROR!!!, reingrese solo el numero correspondiente al estado del vuelo(0-1): ", 0,1);
		if(addPassenger(pasajeros,tam,pj.id,pj.name,pj.lastName,pj.price,pj.flycode,pj.typePassenger,pj.statusFlight) ==0)
		{
			printf("\nSe ah guardado con exito, el ID de este pasajero es: %d\n",pj.id);
			retorno = 0;
		}

		else
		{
			printf("\nNo se ah podido guardar al pasajero ya que no hay espacio disponible\n");
		}

	}

	return retorno;
}
void nombreYCodigo(char* array,int tamanio,char* mensaje,char* mensajeError)
{
	if(array !=NULL && tamanio >0)
	{
		printf("%s",mensaje);
		fflush(stdin);
		gets(array);
		while(strlen(array) > tamanio)
		{
			printf("%s",mensajeError);
			fflush(stdin);
			gets(array);
		}
		for(int i = 0;i<strlen(array);i++)
		{
			if(isdigit(array[i]) !=0)
			{

				while(isdigit(array[i]) !=0)
				{
					printf("%s",mensajeError);
					fflush(stdin);
					gets(array);
					while(strlen(array) > tamanio)
					{
						printf("%s",mensajeError);
						fflush(stdin);
						gets(array);
					}
				}

			}

		}
	}
}
void numeroInt(int* numero,char* mensaje, char* mensajeError,int minimo,int maximo)
{
	printf("%s",mensaje);
		fflush(stdin);
		scanf("%d",numero);
		while(!(*numero >= minimo && *numero <= maximo))
		{
			printf("%s",mensajeError);
			fflush(stdin);
			scanf("%d",numero);
		}
}
void precios(float* numero,char* mensaje,char* mensajeError)
{
	char array[20];
	int chequear;
	printf("%s",mensaje);
	fflush(stdin);
	gets(array);
	chequear =chequearNumero(array,20);
	while(chequear !=0 || strlen(array)> 20)
	{
		printf("%s",mensajeError);
		fflush(stdin);
		gets(array);
		chequear =chequearNumero(array,20);
	}
	*numero = atof(array);
	while(*numero < 0)
	{
		printf(mensajeError);
		fflush(stdin);
		gets(array);
		chequear =chequearNumero(array,20);
		while(chequear !=0 || strlen(array)> 20)
		{
			printf(mensajeError);
			fflush(stdin);
			gets(array);
			chequear =chequearNumero(array,20);
		}
		*numero=atof(array);
	}
}
int chequearNumero(char* array,int tam)
{
	int resultado=-1;

		if(array!=NULL)
		{
			for(int i=0;i< strlen(array);i++)
			{

				resultado = isalpha(array[i]);

				if(resultado!=0)
				{
					break;
				}
			}
		}
		return resultado;
}
void op2(int* opcion)
{
	*opcion =0;
	printf("\nMenu de modificaciones de datos del pasajero:\n"
		"1- Nombre.\n"
		"2- Apellido.\n"
		"3- Precio.\n"
		"4- Tipo de pasajero.\n"
		"5- Código de vuelo.\n"
		"6- Volver al menú principal.\n"
		"Elija una opción: ");
		fflush(stdin);
		scanf("%d", opcion);
		while(!(*opcion >0 && *opcion < 7))
		{
			printf("\nERROR!!!,Menu de modificaciones de datos del pasajero:\n"
					"1- Nombre.\n"
					"2- Apellido.\n"
					"3- Precio.\n"
					"4- Tipo de pasajero.\n"
					"5- Código de vuelo.\n"
					"6- Volver al menú principal.\n"
					"Elija una opción: ");
					fflush(stdin);
					scanf("%d", opcion);
		}
}
void op3(int* opcion)
{
	printf("\nMenú para informar pasajeros:\n"
			"1- Listado de pasajeros ordenados alfabéticamente por Apellido y Tipo de pasajero.\n"
			"2- Total y promedio de los precios de los pasajes, y cuántos pasajeros superan el precio promedio.\n"
			"3- Listado de los pasajeros por Código de vuelo y estados de vuelos 'ACTIVO'\n"
			"4- Volver al menú principal\n"
			"Elija una opción: ");
	fflush(stdin);
	scanf("%d",opcion);
	while(!(*opcion >0 && *opcion < 5))
	{
		printf("\nERROR, INGRESE UN OPCION VALIDA"
				"\nMenú para informar pasajeros:\n"
				"1- Listado de pasajeros ordenados alfabéticamente por Apellido y Tipo de pasajero.\n"
				"2- Total y promedio de los precios de los pasajes, y cuántos pasajeros superan el precio promedio.\n"
				"3- Listado de los pasajeros por Código de vuelo y estados de vuelos 'ACTIVO'\n"
				"4- Volver al menú principal\n"
				"Elija una opción: ");
		fflush(stdin);
		scanf("%d",opcion);
	}
}
int personasTotal(ePassenger* pasajeros,int tam)
{
	int cantidad =0;
	if(pasajeros !=NULL && tam > 0)
	{
		for(int i = 0;i<tam ;i++)
		{
			if(pasajeros[i].isEmpty == 0)
			{
				cantidad++;
			}
		}
	}
	return cantidad;
}
float preciTotales(ePassenger* pasajeros,int tam)
{
	float precioTotal = 0;
	if(pasajeros !=NULL && tam > 0)
		{
			for(int i = 0;i<tam ;i++)
			{
				if(pasajeros[i].isEmpty == 0)
				{
					precioTotal = precioTotal + pasajeros[i].price;
				}
			}
		}
	return precioTotal;
}
int promedioSuperado(ePassenger* pasajeros,int tam,float promedio)
{
	int cantidad=0;
	if(pasajeros != NULL && tam > 0)
	{
		for(int i =0; i<tam;i++)
		{
			if(pasajeros[i].price > promedio && pasajeros[i].isEmpty == 0)
			{
				cantidad++;
			}
		}
	}
	return cantidad;
}
