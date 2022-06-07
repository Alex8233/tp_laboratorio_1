/*
 * ArrayPassenger.h
 *
 *  Created on: 30 may. 2022
 *      Author: fatim
 */

#ifndef ARRAYPASSENGER_H_
#define ARRAYPASSENGER_H_
typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float price;
	char flycode[10];
	int typePassenger;
	int statusFlight;
	int isEmpty;
} ePassenger;
#endif /* ARRAYPASSENGER_H_ */
int  initPassengers(ePassenger* pasajeros,int tam);
int addPassenger(ePassenger* pasajeros,int tam,int id,char* name,char* lastName,float price,char* flycode,int typePassenger, int statusFlight);
int findPassengerById(int id,ePassenger* pasajeros,int tam);
int removePassenger(int baja,ePassenger* pasajeros,int tam);
int sortPassengers(ePassenger* pasajeros, int tam, int order);
void printPassengers(ePassenger* pasajeros, int tam);
int sortPassengersByCode(ePassenger* pasajeros, int tam, int order);
