/*
 * funciones.h
 *
 *  Created on: 30 may. 2022
 *      Author: fatim
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
void minusculas(char* array, int tam);

void opciones(int* opciones);
int alta(int id, ePassenger* pasajeros, ePassenger pj, int tam);
void nombreYCodigo(char* array,int tamanio,char* mensaje,char* mensajeError);
void precios(float* numero,char* mensaje,char* mensajeError);
void numeroInt(int* numero,char* mensaje, char* mensajeError,int minimo,int maximo);
void op2(int* opcion);
void op3(int* opcion);
int personasTotal(ePassenger* pasajeros,int tam);
float preciTotales(ePassenger* pasajeros,int tam);
int promedioSuperado(ePassenger* pasajeros,int tam,float promedio);
#endif /* FUNCIONES_H_ */
