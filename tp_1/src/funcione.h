/*
 * funcione.h
 *
 *  Created on: 8 abr. 2022
 *      Author: fatim
 */

#ifndef FUNCIONE_H_
#define FUNCIONE_H_
#include <stdio.h>
#endif /* FUNCIONE_H_ */
/// \fn float credito(float)
/// \brief calculo para saber cuanto hay que pagar con credito
///
/// \pre
/// \post
/// \param precio
/// \return	precio pagando con credito
float credito(float precio);

/// \fn float debito(float)
/// \brief calculo para saber cuanto hay que pagar con debito
///
/// \pre
/// \post
/// \param precio
/// \return precio pagando con debito
float debito(float precio);

/// \fn float bitcoin(float)
/// \brief calculo para saber cuanto hay que pagar con bitcoin
///
/// \pre
/// \post
/// \param precio
/// \return precio pagando con bitcoin
float bitcoin(float precio);
/// \fn float precioUnitario(float, int)
/// \brief saco el precio que cuesta cada km
///
/// \pre
/// \post
/// \param precio
/// \param km
/// \return precio por km
float precioUnitario(float precio,int km);

/// \fn float diferencia(float, float)
/// \brief saco la diferencia de precio entre Aerolinea latam y Aerolineas Argentina
///
/// \pre
/// \post
/// \param latam
/// \param aerolineas
/// \return diferencia de precio
float diferencia(float latam, float aerolineas);



