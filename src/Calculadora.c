/*
 ============================================================================
 Name        : Calculadora.c
 Author      : Direnzo, Juan Marcos
 Version     : 1.0
 Copyright   : -
 Description :
 Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
 1. Ingresar 1er operando (A=x)
 2. Ingresar 2do operando (B=y)
 3. Calcular todas las operaciones
 a) Calcular la suma (A+B)
 b) Calcular la resta (A-B)
 c) Calcular la division (A/B)
 d) Calcular la multiplicacion (A*B)
 e) Calcular el factorial (A!)
 4. Informar resultados
 a) “El resultado de A+B es: r”
 b) “El resultado de A-B es: r”
 c) “El resultado de A/B es: r” o “No es posible dividir por cero”
 d) “El resultado de A*B es: r”
 e) “El factorial de A es: r1 y El factorial de B es: r2”
 5. Salir
 • Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
 que contenga las funciones para realizar las cinco operaciones.
 • En el menú deberán aparecer los valores actuales cargados en los operandos A y B
 (donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
 • Deberán contemplarse los casos de error (división por cero, etc)
 • Documentar todas las funciones

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

int main(void) {

	setbuf(stdout, NULL);

	float x;
	float y;
	int flagUno = 0;
	int flagDos = 0;
	int flagTres = 0;
	int opcion;

	do {
		printf("Seleccione una opción\n");
		if (flagUno == 0) {
			printf("1. Ingresar el primer operando (A=x)\n");
		} else {
			printf("1. Ingrese el primer operando (A=%.2f)\n", x);
		}
		if (flagDos == 0) {
			printf("2. Ingresar el segundo operando (B=y)\n");
		} else {
			printf("2. Ingrese el segundo operando (B=%.2f)\n", y);
		}
		printf( "3. Calcular operaciones: \n"
				"a) Calcular la suma (A+B)\n"
				"b) Calcular la resta (A-B)\n"
				"c) Calcular la division (A/B)\n"
				"d) Calcular la multiplicacion (A*B)\n"
				"e) Calcular el factorial (A!)\n");
		printf("\n4. Mostrar resultados\n");
		printf("5. Salir\n");
		scanf("%d", &opcion);

		switch (opcion) {
		case 1:
			printf("1. Ingrese el primer operando (A=x)\n");
			scanf("%f", &x);
			flagUno = 1;
			break;
		case 2:
			printf("2. Ingrese el segundo operando (B=y)\n");
			scanf("%f", &y);
			flagDos = 1;
			break;
		case 3:
			if (flagUno != 1) {
				printf("Se debe ingresar el operando A\n");
				printf("1. Ingrese el primer operando (A=x)\n");
				scanf("%f", &x);
				flagUno = 1;
			}
			if (flagDos != 1) {
				printf("Se debe ingresar el operando B\n");
				printf("2. Ingrese el segundo operando (B=y)\n)");
				scanf("%f", &y);
				flagDos = 1;
			}
			printf("\nCálculos realizados!\n\n");
			SumarNumeros(x, y);
			RestarNumeros(x, y);
			MultiplicarNumeros(x, y);
			DividirNumeros(x, y);
			Factorial(x);
			Factorial(y);
			flagTres = 1;
			break;

		case 4:
			if (flagTres != 1) {
				printf("Primero se deben hacer los cálculos!\n");
			} else {
				printf("Resultados:\n");
				printf("\n1er operando (A=%.2f)\n", x);
				printf("2do operando (B=%.2f)\n", y);
				printf("El resultado de A+B es: %.2f\n", SumarNumeros(x, y));
				printf("El resultado de A-B es: %.2f", RestarNumeros(x, y));
			}
			if (y == 0) {
				printf("\nEl resultado de A/B es: no es posible dividir por cero!");
			} else {
				printf("\nEl resultado de A/B es: %.2f", DividirNumeros(x, y));
			}
			printf("\nEl resultado de A*B es: %.2f", MultiplicarNumeros(x, y));
			printf("\nEl factorial de A es: %d", Factorial(x));
			printf("\nEl factorial de B es: %d\n\n", Factorial(y));
			break;
		case 5:
			printf("\nGracias por usar la calculadora!\n");
			break;
		}

	} while (opcion != 5);

	return EXIT_SUCCESS;
}
