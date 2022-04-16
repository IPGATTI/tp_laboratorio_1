/*
ALUMNO: IGNACIO PABLO GATTI
DNI: 38843351
ASIGNATURA: PROGRAMACION I - LABORATORIO I
EJERCICIO : TP_1
FECHA : 16-04-2022
*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include "BibliotecaCalculos.h"
#include "BibliotecaEntradas.h"
#include "BibliotecaCargaForzada.h"

int main(void)
{
	setbuf(stdout,NULL);
    //declaracion de variables
	int opcion;
	int opcion2;
	int flag;
	float kmIngresados;
	float precioLatam;
	float precioAerolineas;
	float descuentoDebito;
	float precioDescuentoDebitoLatam;
	float precioDescuentoDebitoAerolineas;
	float aumentoCredito;
	float precioAumentoCreditoLatam;
	float precioAumentoCreditoAerolineas;
	float valorBitcoin;
	float precioLatamEnBitcoin;
	float precioAerolineasEnBitcoin;
	float precioUnitarioLatam;
	float precioUnitarioAerolineas;
	float diferenciaDePrecio;
    //inicializacion variables
	descuentoDebito = 10;
	aumentoCredito = 25;
	valorBitcoin = 4606954.55;
	kmIngresados = 0;
	precioLatam = 0;
	precioAerolineas = 0;
	flag = 0;
    //menu
	while(opcion != 6)
	{
		printf("1. INGRESE LOS KM : %.2f \n",kmIngresados);
		printf("2. INGRESE PRECIO DE VUELOS : LATAM = %.2f , AEROLINEAS = %.2f\n", precioLatam, precioAerolineas);
		printf("3. CALCULAR TODOS LOS COSTOS\n");
		printf("4. INFORMAR RESULTADOS\n");
		printf("5. CARGA FORZADA\n");
		printf("6. SALIR\n");
		printf("INGRESE UNA OPCI%cN: ", 224);
		scanf("%d", &opcion);
		while(opcion < 1 || opcion > 6)
		{
			printf("ERROR. INGRESE UNA OPCI%cN DEL MEN%c ENTRE 1 Y 6: ", 224, 233);
			scanf("%d", &opcion);
		}
        //estructura menu
		switch(opcion)
		{
		    //entrada de datos
			case 1:
				system("cls");
				kmIngresados = PedirNumero("INGRESE LOS KM DEL VUELO: ","ERROR!!! REINGRESE UN VALOR ENTRE 20KM Y 20000KM: ",20,20000);
				printf("KILOMETROS INGRESADOS: %.2f\n",kmIngresados);
				printf("\n");
				flag = 0;
			break;
            //entrada de datos
			case 2:
				system("cls");
				printf("1. INGRESE PRECIO LATAM\n");
				printf("2. INGRESE PRECIO AEROLINEAS\n");
				printf("INGRESE UNA OPCION O PRESIONE OTRO NUMERO PARA VOLVER AL MENU: ");
				scanf("%d", &opcion2);
				system("cls");
				switch(opcion2)
				{
					case 1:
						system("cls");
						precioLatam = PedirNumero("INGRESE EL PRECIO DE LATAM: ","ERROR!!! REINGRESE UN VALOR ENTRE $ 4000 Y $ 20000000: ",4000,20000000);
						printf("LATAM PRECIO INGRESADO: %.2f\n", precioLatam);
						printf("\n");
						flag = 0;
					break;

					case 2:
						system("cls");
						precioAerolineas = PedirNumero("INGRESE EL PRECIO DE AEROLINEAS: ","ERROR!!! REINGRESE UN VALOR ENTRE $ 4000 Y $ 20000000: ",4000,20000000);
						printf("AEROLINEAS PRECIO INGRESADO: %.2f\n", precioAerolineas);
						printf("\n");
						flag = 0;
					break;
				}
			break;
            //calculos
			case 3:
				system("cls");
				if(kmIngresados != 0 && precioLatam != 0 && precioAerolineas != 0)
				{
					precioDescuentoDebitoLatam = Descontar(precioLatam, descuentoDebito);
					precioDescuentoDebitoAerolineas = Descontar(precioAerolineas, descuentoDebito);

					precioAumentoCreditoLatam = Aumentar(precioLatam, aumentoCredito);
					precioAumentoCreditoAerolineas = Aumentar(precioAerolineas, aumentoCredito);

					precioLatamEnBitcoin = Dividir(precioLatam,valorBitcoin);
					precioAerolineasEnBitcoin = Dividir(precioAerolineas,valorBitcoin);

					precioUnitarioLatam = Dividir(precioLatam,kmIngresados);
					precioUnitarioAerolineas = Dividir(precioAerolineas,kmIngresados);

					diferenciaDePrecio = Restar(precioLatam, precioAerolineas);

					flag = 1;
					printf("LOS CALCULOS FUERON REALIZADOS\n");
					printf("\n");
				}
				else
				{
					system("cls");
					printf("ERROR. LE FALTA COMPLETAR INFORMACION\n");
					printf("\n");
				}
			break;
            //salida de datos
			case 4:
				if(flag != 0)
				{
					system("cls");
					printf("KM INGRESADOS: %.2f\n", kmIngresados);
                    printf("\n");
					printf("Precio Latam: $ %.2f\n", precioLatam);

					printf("a) PRECIO CON TARJETA DE DEBITO: $ %.2f\n", precioDescuentoDebitoLatam);
					printf("b) PRECIO CON TARJETA DE CREDITO: $ %.2f\n", precioAumentoCreditoLatam);
					printf("c) PRECIO EN BITCOIN: BTC %f\n", precioLatamEnBitcoin);
					printf("d) PRECIO UNITARIO (PRECIO POR KM): $ %.2f\n\n", precioUnitarioLatam);

					printf("Precio Aerolineas: $ %.2f\n", precioAerolineas);
					printf("a) PRECIO CON TARJETA DE DEBITO: $ %.2f\n", precioDescuentoDebitoAerolineas);
					printf("b) PRECIO CON TARJETA DE CREDITO: $ %.2f\n", precioAumentoCreditoAerolineas);
					printf("c) PRECIO EN BITCOIN: BTC %f\n", precioAerolineasEnBitcoin);
					printf("d) PRECIO UNITARIO (PRECIO POR KM): $ %.2f\n\n", precioUnitarioAerolineas);

					printf("DIFERENCIA DE PRECIO: $ %.2f\n\n", diferenciaDePrecio);
					//las entradas vuelven a valor nulo
					kmIngresados = 0;
					precioLatam = 0;
					precioAerolineas = 0;
					flag = 0;
				}
				else
				{
					system("cls");
					printf("ERROR. LE FALTA COMPLETAR INFORMACION\n");
					printf("\n");
				}
			break;
            //carga forzada
			case 5:
					EjecutarFuncionMenu5(7090, 159339, 162965);
					kmIngresados = 0;
					precioLatam = 0;
					precioAerolineas = 0;
					flag = 0;
			break;
		}
	}
	return EXIT_SUCCESS;
}
