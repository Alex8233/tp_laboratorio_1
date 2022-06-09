/*
 ============================================================================
 Name        : TP_2.c
 Author      : alex zalazar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ArrayPassenger.h"
#include "funciones.h"
#define TAMPASAJEROS 2000
int main(void)
{
	setbuf(stdout,NULL);
	int opcion;
	int id =0;
	int ingresos = 0;
	int buscarId;
	int opciones2;
	int modificar;
	int baja;
	int opciones3;
	int cantidadPasajeros;
	float promedio;
	int cantidad;
	float precioTotal;
	ePassenger pj;
	ePassenger pasajeros[TAMPASAJEROS];
	if( initPassengers(pasajeros, TAMPASAJEROS) != 0)
	{
		printf("\nERROR AL INICIALIZAR");
	}
	do
	{
		opciones(&opcion);
		switch(opcion)
		{
		case 1:

			if(alta(id,pasajeros,pj,TAMPASAJEROS)==0)
			{
				id++;
				ingresos++;

			}

			break;
		case 2:
			if(ingresos > 0)
			{
				printf("\nIngrese el id que desea modificar:");
				fflush(stdin);
				scanf("%d", &buscarId);
				while(!(buscarId >= 0 && buscarId <=20000))
				{
					printf("\nERROR!!!,Ingrese el id que desea modificar:");
					fflush(stdin);
					scanf("%d", &buscarId);
				}
				modificar = findPassengerById(buscarId,pasajeros,TAMPASAJEROS);

				if(modificar >= 0)
				{
					op2(&opciones2);
					switch(opciones2)
					{
						case 1:
							nombreYCodigo(pj.name,51,"\nIngrese el nombre:","ERROR!!!,vuelva ingresar el nombre:");
							strcpy(pasajeros[modificar].name, pj.name);
							break;
						case 2:
							nombreYCodigo(pj.lastName,51,"\nIngrese el apellido:","ERROR!!!,vuelva ingresar el apellido:");
							strcpy(pasajeros[modificar].lastName, pj.lastName);
							break;
						case 3:
							precios(&pj.price,"\nIngrese el precio:","\nError!!!,vuelva a ingresar el precio:");
							pasajeros[modificar].price = pj.price;
							break;
						case 4:
							numeroInt(&pj.typePassenger,"\nIngrese el tipo de pasajero(1-Clase turista, 2-Comercial, 3-Primera clase):","ERROR!!!,vuelva ingresar el tipo de pasajero(1-Clase turista, 2-Comercial, 3-Primera clase):",1,3);
							pasajeros[modificar].typePassenger = pj.typePassenger;
							break;
						case 5:
							nombreYCodigo(pj.flycode,10,"\nIngrese el codigo:","ERROR!!!,vuelva ingresar el codigo:");
							minusculas(pj.flycode,10);
							strcpy(pasajeros[modificar].flycode, pj.flycode);
							break;
						case 6:
							printf("\nVOLVIENDO AL MENU");
							break;

					}
				}
				else
				{
					printf("\nERROR,ID NO ENCONTRADO");
				}
			}
			else
			{
				printf("\nHaga el alta de pasajeros.");
			}
			break;
		case 3:
			if(ingresos > 0)
			{
				printf("\nIngrese el id que desea modificar:");
				fflush(stdin);
				scanf("%d", &buscarId);
				while(!(buscarId >= 0))
				{
					printf("\nERROR!!!,Ingrese el id que desea modificar:");
					fflush(stdin);
					scanf("%d", &buscarId);
				}
				baja = findPassengerById(buscarId,pasajeros,TAMPASAJEROS);
				if(baja >= 0)
				{
					if(removePassenger(baja,pasajeros,TAMPASAJEROS)  ==0)
					{
						printf("\nse dio de baja con excito");
					}
					else
					{
						printf("\nError al dar de baja.");
					}
				}
				else
				{
					printf("\nERROR, id no encontrado");
				}
			}
			else
			{
				printf("\nHaga el alta de pasajeros.");
			}
			break;
		case 4:
			if(ingresos > 0)
			{
				op3(&opciones3);
				switch(opciones3)
				{
					case 1:
						if(sortPassengers(pasajeros, TAMPASAJEROS, 1) == 0)
						{

							printPassengers(pasajeros,TAMPASAJEROS);
						}
						else
						{
							printf("\nError en el ordenamiento:");
						}
						break;
					case 2:
						 cantidadPasajeros= personasTotal(pasajeros,TAMPASAJEROS);
						 precioTotal = preciTotales(pasajeros,TAMPASAJEROS);
						 promedio = precioTotal/cantidadPasajeros;
						 cantidad = promedioSuperado(pasajeros, TAMPASAJEROS, promedio);
						 printf("\nEl precio total de los pasajes es de: %.2f\n"
								"El precio promedio de los pasajes es de: %.2f\n"
								"La cantidad de pasajeros que superan el precio promedio de los pasaje es de: %d\n",precioTotal, promedio,cantidad);
						break;
					case 3:
						if(sortPassengersByCode(pasajeros, TAMPASAJEROS, 1) == 0)
						{
							printPassengers(pasajeros,TAMPASAJEROS);
						}
						else
						{
							printf("\nError en el ordenamiento:");
						}
						break;
					default:
						printf("\nVolviendo al menú principal.\n");

				}
			}
			else{
				printf("\nHaga el alta de pasajeros.");
			}
		break;
		case 5:
			ingresos++;
			id++;
			addPassenger(pasajeros,  TAMPASAJEROS,  id, "Alex", "Zalazar", 16345.23,"dsasf" ,3, 1);
			id++;
			addPassenger(pasajeros,  TAMPASAJEROS,  id,  "Melany", "Romero", 14234.45, "qwqwe",2, 3);
			id++;
			addPassenger(pasajeros,  TAMPASAJEROS,  id,  "Luis", "Tulis", 20123.43,"sdafsa", 1,  2);
			id++;
			addPassenger(pasajeros,  TAMPASAJEROS,  id,  "Mabel", "Rojas", 17234.23,"cxzcv", 3,  1);
			id++;
			addPassenger(pasajeros,  TAMPASAJEROS,  id,  "Ignacio", "Almiron", 26123.23,"xczvxv", 1,  1);

			printf("\nSe han cargado con exito todos los usuarios de la carga forzada.\n");
			break;
		default:
			printf("\nSaliendo");
			break;
		}
	}while(opcion !=6);
	return EXIT_SUCCESS;
}
