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
/// \fn int initPassengers(ePassenger*, int)
/// \brief indica que todas las posiciones del array están vacías,
///
/// \param pasajeros
/// \param tam
/// \return retorna 0 si se realizo correctamente, -1 Error
int  initPassengers(ePassenger* pasajeros,int tam);
/// \fn int addPassenger(ePassenger*, int, int, char*, char*, float, char*, int, int)
/// \brief Agrega en un array los pasajeros en una posicion libre
///
/// \param pasajeros
/// \param tam
/// \param id
/// \param name
/// \param lastName
/// \param price
/// \param flycode
/// \param typePassenger
/// \param statusFlight
/// \return retorna 0 si se realizo correctamente, 1 Error
int addPassenger(ePassenger* pasajeros,int tam,int id,char* name,char* lastName,float price,char* flycode,int typePassenger, int statusFlight);
/// \fn int findPassengerById(int, ePassenger*, int)
/// \brief Busca un pasajero recibiendo como parámetro de búsqueda su Id.
///
/// \param id
/// \param pasajeros
/// \param tam
/// \return retorna 0 si se realizo correctamente, -1 Error
int findPassengerById(int id,ePassenger* pasajeros,int tam);
/// \fn int removePassenger(int, ePassenger*, int)
/// \brief Elimina de manera lógica (isEmpty Flag en -1) un pasajero recibiendo como parámetro su Id.
///
/// \param baja
/// \param pasajeros
/// \param tam
/// \return retorna 0 si se realizo correctamente, 1 Error
int removePassenger(int baja,ePassenger* pasajeros,int tam);
/// \fn int sortPassengers(ePassenger*, int, int)
/// \brief Ordena el array de pasajeros por apellido y tipo de pasajero de manera ascendente o descendente.
///
/// \param pasajeros
/// \param tam
/// \param order
/// \return retorna 0 si se realizo correctamente, 1 Error
int sortPassengers(ePassenger* pasajeros, int tam, int order);
/// \fn void printPassengers(ePassenger*, int)
/// \brief Imprime el array de pasajeros de forma encolumnada.
///
/// \param pasajeros
/// \param tam
void printPassengers(ePassenger* pasajeros, int tam);
///\fn int sortPassengersByCode(ePassenger*, int, int)
/// \brief Ordena el array de pasajeros por código de vuelo y estado de vuelo de manera ascendente o descendente.
///
/// \param pasajeros
/// \param tam
/// \param order
/// \return retorna 0 si se realizo correctamente, 1 Error
int sortPassengersByCode(ePassenger* pasajeros, int tam, int order);
