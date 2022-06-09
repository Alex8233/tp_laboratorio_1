/*
 * ArrayPassenger.c
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

int  initPassengers(ePassenger* pasajeros,int tam)
{
	int retorno = -1;
	if(pasajeros !=NULL && tam >0)
	{
		for(int i = 0; i< tam;i++)
		{
			pasajeros[i].isEmpty = -1;
			pasajeros[i].id=-1;
			retorno =0;
		}
	}
	return retorno;
}




int addPassenger(ePassenger* pasajeros,int tam,int id,char* name,char* lastName,float price,char* flycode,int typePassenger, int statusFlight)
{
	int retorno = 1;
	if(pasajeros != NULL && tam>0)
		{
			retorno=0;
			for(int i=0;i<tam;i++)
			{
				if(pasajeros[i].isEmpty == -1)
				{
					pasajeros[i].id = id;
					strcpy(pasajeros[i].name, name);
					strcpy(pasajeros[i].lastName, lastName);
					pasajeros[i].price = price;
					strcpy(pasajeros[i].flycode, flycode);
					pasajeros[i].typePassenger = typePassenger;
					pasajeros[i].statusFlight = statusFlight;
					pasajeros[i].isEmpty = 0;

					break;
				}
			}
		}
	return retorno;
}

int removePassenger(int baja,ePassenger* pasajeros,int tam)
{
	int retorno =1;
	if(pasajeros != NULL && tam > 0)
	{
		pasajeros[baja].isEmpty=-1;
		retorno =0;
	}
	return retorno;
}
int findPassengerById(int id,ePassenger* pasajeros,int tam)
{
	int retorno = -1;
	if(pasajeros != NULL && tam >0)
	{
		for(int i=0;i<tam;i++)
				{
					if(pasajeros[i].id == id)
					{

						retorno = i;
						break;
					}
				}
	}
	return retorno;
}
int sortPassengers(ePassenger* pasajeros, int tam, int order)
{
	int retorno = 1;
	ePassenger aux;
	if(pasajeros != NULL && tam > 0  )
	{
		if(order == 1)
		{
			retorno = 0;
			for(int i=0;i< tam -1;i++)
			{
				for(int x =i+1; x<tam;x++)
				{

					if (strcmp(pasajeros[i].lastName, pasajeros[x].lastName) > 0)
					{
						aux= pasajeros[x];
						pasajeros[x] = pasajeros[i];
						pasajeros[i] = aux;
					}
					if(strcmp(pasajeros[i].lastName, pasajeros[x].lastName) == 0)
					{
						if(pasajeros[i].typePassenger > pasajeros[x].typePassenger)
						{
							aux = pasajeros[x];
							pasajeros[x] = pasajeros[i];
							pasajeros[i] = aux;
						}
					}
				}
			}
		}
		else
		{
			retorno =0;
			for(int i=0;i< tam -1;i++)
			{
				for(int x =i+1; x<tam;x++)
				{

					if (strcmp(pasajeros[i].lastName, pasajeros[x].lastName) < 0)
					{
						aux= pasajeros[x];
						pasajeros[x] = pasajeros[i];
						pasajeros[i] = aux;
					}
					if(strcmp(pasajeros[i].lastName, pasajeros[x].lastName) == 0)
					{
						if(pasajeros[i].typePassenger < pasajeros[x].typePassenger)
						{
							aux = pasajeros[x];
							pasajeros[x] = pasajeros[i];
							pasajeros[i] = aux;
						}
					}
				}
			}
		}
	}


	return retorno;
}
void printPassengers(ePassenger* pasajeros, int tam)
{
	if(pasajeros !=NULL && tam > 0)
	{
		printf("\nId\tNombre \t\tApellido \t\t Precio \t\tCodigo del vuelo \t\tTipo de pasajero\t\t Estado del vuelo: ");
		for(int i=0; i < tam; i ++)
		{
			if(pasajeros[i].isEmpty == 0)
			{
				printf("\n%-7d %-15s %-24s %-22.2f %-31s %-32d %d", pasajeros[i].id, pasajeros[i].name, pasajeros[i].lastName, pasajeros[i].price, pasajeros[i].flycode,pasajeros[i].typePassenger, pasajeros[i].statusFlight);
			}

		}
	}
}
int sortPassengersByCode(ePassenger* pasajeros, int tam, int order)
{
	int retorno = 1;
	ePassenger aux;
	if(pasajeros != NULL && tam > 0  )
	{
		if(order == 1)
		{
			retorno = 0;
			for(int i=0;i< tam -1;i++)
			{
				for(int x =i+1; x<tam;x++)
				{

					if (strcmp(pasajeros[i].flycode, pasajeros[x].flycode) > 0)
					{
						aux= pasajeros[x];
						pasajeros[x] = pasajeros[i];
						pasajeros[i] = aux;
					}
					if(strcmp(pasajeros[i].flycode, pasajeros[x].flycode) == 0)
					{
						if(pasajeros[i].statusFlight > pasajeros[x].statusFlight)
						{
							aux = pasajeros[x];
							pasajeros[x] = pasajeros[i];
							pasajeros[i] = aux;
						}
					}
				}
			}
		}
		else
		{
			retorno =0;
			for(int i=0;i< tam -1;i++)
			{
				for(int x =i+1; x<tam;x++)
				{

					if (strcmp(pasajeros[i].flycode, pasajeros[x].flycode) < 0)
					{
						aux= pasajeros[x];
						pasajeros[x] = pasajeros[i];
						pasajeros[i] = aux;
					}
					if(strcmp(pasajeros[i].flycode, pasajeros[x].flycode) == 0)
					{
						if(pasajeros[i].statusFlight < pasajeros[x].statusFlight)
						{
							aux = pasajeros[x];
							pasajeros[x] = pasajeros[i];
							pasajeros[i] = aux;
						}
					}
				}
			}
		}
	}
	else
	{
		printf("error");
	}

	return retorno;
}
