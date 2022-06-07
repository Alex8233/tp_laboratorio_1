/*
 * funcione.c
 *
 *  Created on: 8 abr. 2022
 *      Author: fatim
 */
#include <stdio.h>
#include <stdlib.h>
float debito(float precio)
{

	float creditoP;
	creditoP = (float)precio * 10 / 100;
	creditoP = precio - creditoP;

	return creditoP;
}


float credito(float precio)
{

	float debitoP;
	debitoP = (float)precio * 25 / 100;
	debitoP = precio + debitoP;

	return debitoP;
}

 float bitcoin(float precio)
{

	float bitcoinP;
	bitcoinP = (float)precio / 4606954.55;
	return bitcoinP;
}

float precioUnitario(float precio,int km)
{

	float precioUnitarioP;

	precioUnitarioP = (float)precio / km;

	return precioUnitarioP;
}

float diferencia(float latam, float aerolineas)
{
	float diferencia;
	if(latam > aerolineas)
	{
		diferencia = latam - aerolineas;
	}
	else
	{
		diferencia = aerolineas - latam;
	}

	return diferencia;
}



