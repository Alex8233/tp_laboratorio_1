/*
 * datos.h
 *
 *  Created on: 10 abr. 2022
 *      Author: fatim
 */

#ifndef DATOS_H_
#define DATOS_H_
#include <stdio.h>
/// \fn int funcionDos(float, float, int, float, float, float, float, float, float, float, float, float)
/// \brief muestro los resutaldos
///
/// \pre
/// \post
/// \param latam
/// \param aerolineas
/// \param km
/// \param debitoLatam1
/// \param creditoLatam1
/// \param bitcoinLatam1
/// \param precioUnitarioLatam1
/// \param debitoAerolineas2
/// \param creditoAerolineas2
/// \param bitcoinAerolineas2
/// \param precioUnitarioAerolineas2
/// \param diferencia2
/// \return 0
int funcionDos(float latam,float aerolineas,int km,float debitoLatam1,float creditoLatam1,float bitcoinLatam1,float precioUnitarioLatam1,float debitoAerolineas2,float creditoAerolineas2,float bitcoinAerolineas2,float precioUnitarioAerolineas2,float diferencia2);

/// \fn int opciones(int, int*, int*, int*, float, float, int)
/// \brief pido la opcion
///
/// \pre
/// \post
/// \param opcion
/// \param flagDos
/// \param flagTres
/// \param flag
/// \param latam
/// \param aerolineas
/// \param km
/// \return opciones
int opciones(int opcion, int* flagDos, int* flagTres, int* flag, float latam, float aerolineas, int km);
/// \fn int pedirUno(int)
/// \brief ingreso los km
///
/// \pre
/// \post
/// \param km
/// \return cantindad de km
int pedirUno(int km);
/// \fn float pedirDos(float)
/// \brief ingreso precio de aerolinea latam
///
/// \pre
/// \post
/// \param latam
/// \return precio de aerolinea latam
float pedirDos(float latam);

/// \fn float pedirTres(float)
/// \brief ingreso precio de aerolinea Argentina
///
/// \pre
/// \post
/// \param aerolineas
/// \return precio de aerolinea argentina
float pedirTres(float aerolineas);

/// \fn void funcioncaseTres(float, int, float, float*, float*, float*, float*, float*, float*, float*, float*, float*)
/// \brief realizo los calculos
///
/// \pre
/// \post
/// \param latam
/// \param km
/// \param aerolineas
/// \param debitoLatam1
/// \param creditoLatam1
/// \param bitcoinLatam1
/// \param precioUnitarioLatam1
/// \param debitoAerolineas2
/// \param creditoAerolineas2
/// \param bitcoinAerolineas2
/// \param precioUnitarioAerolineas2
/// \param diferencia2
void funcioncaseTres(float latam,int km,float aerolineas, float* debitoLatam1, float* creditoLatam1, float* bitcoinLatam1, float* precioUnitarioLatam1, float* debitoAerolineas2, float* creditoAerolineas2, float* bitcoinAerolineas2, float* precioUnitarioAerolineas2, float* diferencia2);
#endif /* DATOS_H_ */
