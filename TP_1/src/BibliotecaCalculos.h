/*
ALUMNO: IGNACIO PABLO GATTI
ASIGNATURA: PROGRAMACION I - LABORATORIO I
BIBLIOTECA CON CALCULOS
*/

#ifndef BIBLIOTECACALCULOS_H_
#define BIBLIOTECACALCULOS_H_
#include <stdio.h>
#include <stdlib.h>

/// @fn float Descontar(float, float)
/// @brief permite realizar un descuento porcentual entre dos flotantes
/// @param valor al cual se le va aplicar el descuento
/// @param descuento a realizar
/// @return el valor ya descontando en flotante
float Descontar(float valor, float descuento);

/// @fn float Aumentar(float, float)
/// @brief permite realizar un aumento porcentual entre dos flotantes
/// @param valor al cual se le va aplicar el aumento
/// @param aumento a realizar
/// @return el valor ya descontando en flotante
float Aumentar(float valor, float aumento);

/// @fn float Dividir(float, float)
/// @brief divide dos flotantes entre si
/// @param dividendo flotante
/// @param divisor flotante
/// @return resultado flotante de la division
float Dividir(float dividendo, float divisor);

/// @fn float Restar(float, float)
/// @brief resta dos flotantes entre si
/// @param flotante a restar
/// @param flotante
/// @return resultado flotante de la resta
float Restar(float valor1, float valor2);

#endif /* BIBLIOTECACALCULOS_H_ */
