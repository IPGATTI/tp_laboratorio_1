/*
ALUMNO: IGNACIO PABLO GATTI
ASIGNATURA: PROGRAMACION I - LABORATORIO I
BIBLIOTECA CON ENTRADAS
*/

#ifndef BIBLIOTECAENTRADAS_H_
#define BIBLIOTECAENTRADAS_H_
#include <stdio.h>
#include <stdlib.h>

/// @fn float PedirNumero(char[], char[], float, float)
/// @brief Permite ingresar y devolver un flotante validado en rango
/// @param Mensaje de entrada
/// @param Mensaje de error
/// @param Limite inferior
/// @param Limite superior
/// @return El flotante ingresado y validado
float PedirNumero(char mensaje[], char mensajeError[], float limiteInferior, float limiteSuperior);

#endif /* BIBLIOTECAENTRADAS_H_ */
