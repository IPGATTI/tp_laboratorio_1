/*
ALUMNO: IGNACIO PABLO GATTI
ASIGNATURA: PROGRAMACION I - LABORATORIO I
BIBLIOTECA CON CALCULOS
*/

#include "BibliotecaCalculos.h"

float Descontar(float valor, float descuento)
{
	float resultado;
	resultado = valor - (valor * descuento / 100);
	return resultado;
}

float Aumentar(float valor, float aumento)
{
	float resultado;
	resultado = valor + (valor * aumento / 100);
	return resultado;
}

float Dividir(float dividendo, float divisor)
{
	float resultado;
	resultado = dividendo / divisor;
	return resultado;
}

float Restar(float valor1, float valor2)
{
	float resultado;
	if(valor1 > valor2)
	{
		resultado = valor1 - valor2;
	}
	else
	{
		if(valor2 > valor1)
		{
			resultado = valor2 - valor1;
		}
		else
		{
			resultado = 0;
		}
	}
	return resultado;
}

