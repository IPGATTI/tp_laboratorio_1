/*
ALUMNO: IGNACIO PABLO GATTI
ASIGNATURA: PROGRAMACION I - LABORATORIO I
BIBLIOTECA CARGA FORZADA
*/

#include "BibliotecaCargaForzada.h"
#include "BibliotecaCalculos.h"

void EjecutarFuncionMenu5 (float km, float valorLatam, float valorAerolineas)
{
	float debitoLatam;
	float debitoAerolineas;
	float creditoLatam;
	float creditoAerolineas;
	float descuentoDebito;
	float aumentoCredito;
	float valorBitcoin;
	float valorBitcoinLatam;
	float valorBitcoinAerolineas;
	float precioUnitarioLatam;
	float precioUnitarioAerolineas;
	float resultadoDiferenciaPrecio;

	descuentoDebito = 10;
	aumentoCredito = 25;
	valorBitcoin = 4606954.55;

	debitoLatam = Descontar(valorLatam, descuentoDebito);
	debitoAerolineas = Descontar(valorAerolineas, descuentoDebito);

	creditoLatam = Aumentar(valorLatam, aumentoCredito);
	creditoAerolineas = Aumentar(valorAerolineas, aumentoCredito);

	valorBitcoinLatam = Dividir(valorLatam,valorBitcoin);
	valorBitcoinAerolineas = Dividir(valorAerolineas, valorBitcoin);

	precioUnitarioLatam = Dividir(valorLatam, km);
	precioUnitarioAerolineas = Dividir(valorAerolineas, km);

	resultadoDiferenciaPrecio = Restar(valorLatam, valorAerolineas);

	system("cls");
	printf("KM INGRESADOS: %.2f\n\n", km);

	printf("Precio Latam: $ %.2f\n", valorLatam);

	printf("a) PRECIO CON TARJETA DE DEBITO: $ %.2f\n", debitoLatam);
	printf("b) PRECIO CON TARJETA DE CREDITO: $ %.2f\n", creditoLatam);
	printf("c) PRECIO EN BITCOIN: BTC %f\n", valorBitcoinLatam);
	printf("d) PRECIO UNITARIO (PRECIO POR KM): $ %.2f\n\n", precioUnitarioLatam);

	printf("Precio Aerolineas: $ %.2f\n", valorAerolineas);
	printf("a) PRECIO CON TARJETA DE DEBITO: $ %.2f\n", debitoAerolineas);
	printf("b) PRECIO CON TARJETA DE CREDITO: $ %.2f\n", creditoAerolineas);
	printf("c) PRECIO EN BITCOIN: BTC %f\n", valorBitcoinAerolineas);
	printf("d) PRECIO UNITARIO (PRECIO POR KM): $ %.2f\n\n", precioUnitarioAerolineas);

	printf("DIFERENCIA DE PRECIO: $ %.2f\n\n", resultadoDiferenciaPrecio);
}
