/*
ALUMNO: IGNACIO PABLO GATTI
ASIGNATURA: PROGRAMACION I - LABORATORIO I
BIBLIOTECA CON ENTRADAS
*/

#include "BibliotecaEntradas.h"

float PedirNumero(char mensaje[], char mensajeError[], float limiteInferior, float limiteSuperior)
{
	float numeroIngresado;

	printf("%s", mensaje);
	scanf("%f", &numeroIngresado);
	while(numeroIngresado < limiteInferior || numeroIngresado > limiteSuperior)
	{
		printf("%s", mensajeError);
		scanf("%f", &numeroIngresado);
	}

	return numeroIngresado;
}
