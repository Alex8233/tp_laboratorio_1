/*
 * funciones.h
 *
 *  Created on: 30 may. 2022
 *      Author: fatim
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
/// \fn void minusculas(char*, int)
/// \brief  cada caracter lo convierto a minuscula
///
/// \param array
/// \param tam
void minusculas(char* array, int tam);
/// \fn void opciones(int*)
/// \brief le pide al usuario un numero de tipo int(se usa para el menu de opciones)
///
/// \param opciones
void opciones(int* opciones);
/// \fn int alta(int, ePassenger*, ePassenger, int)
/// \brief da de alta a los pasajeros
///
/// \param id
/// \param pasajeros
/// \param pj
/// \param tam
/// \return
int alta(int id, ePassenger* pasajeros, ePassenger pj, int tam);
/// \fn void nombreYCodigo(char*, int, char*, char*)
/// \brief pide el nombre, apellido , y codigo
///
/// \param array
/// \param tamanio
/// \param mensaje
/// \param mensajeError
void nombreYCodigo(char* array,int tamanio,char* mensaje,char* mensajeError);
/// \fn void precios(float*, char*, char*)
/// \brief pide un numero float, que va ser el precio del vuelo
///
/// \param numero
/// \param mensaje
/// \param mensajeError
void precios(float* numero,char* mensaje,char* mensajeError);
/// \fn void numeroInt(int*, char*, char*, int, int)
/// \brief pide un numero int, para el tipo de vuelo o pasajero
///
/// \param numero
/// \param mensaje
/// \param mensajeError
/// \param minimo
/// \param maximo
void numeroInt(int* numero,char* mensaje, char* mensajeError,int minimo,int maximo);
/// \fn void op2(int*)
/// \brief le pide al usuario un numero de tipo int(se usa para el menu de opciones para modificar)
///
/// \param opcion
void op2(int* opcion);
/// \fn void op3(int*)
/// \brief le pide al usuario un numero de tipo int(se usa para el menu de opciones para muestra de pasajeros ordenados)
///
/// \param opcion
void op3(int* opcion);
/// \fn int personasTotal(ePassenger*, int)
/// \brief acomula la  cantidad de pasajeros que hay en total
///
/// \param pasajeros
/// \param tam
/// \return retorna la cantidad de pasajeros
int personasTotal(ePassenger* pasajeros,int tam);
/// \fn float preciTotales(ePassenger*, int)
/// \brief saca la suma de todos los precios
///
/// \param pasajeros
/// \param tam
/// \return retorna el precio en total
float preciTotales(ePassenger* pasajeros,int tam);
/// \fn int promedioSuperado(ePassenger*, int, float)
/// \brief busca la cantidad de pasajeros que supera el  precio promedio
///
/// \param pasajeros
/// \param tam
/// \param promedio
/// \return retorna la cantidad de pasajeros
int promedioSuperado(ePassenger* pasajeros,int tam,float promedio);
/// \fn int chequearNumero(char*, int)
/// \brief chequea que no se ingreso una letra
///
/// \param array
/// \param tam
/// \return retorna un numero 1 error que se ingreso una letra, 0 si no hay letras
int chequearNumero(char* array,int tam);
#endif /* FUNCIONES_H_ */
