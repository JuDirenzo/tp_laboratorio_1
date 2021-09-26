//Direnzo, Juan Marcos

/*
 * Operaciones.c
 */

#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

int PedirEntero(char mensaje[]) {
	int numero;

	printf(mensaje);
	scanf("%d", &numero);

	return numero;
}

float PedirFloat(char mensaje[]) {
	float numero;

	printf(mensaje);
	scanf("%f", &numero);

	return numero;
}

float SumarNumeros(float a, float b) {
	int suma;

	suma = a + b;

	return suma;
}

float RestarNumeros(float a, float b) {
	float resta;

	resta = a - b;

	return resta;
}

float MultiplicarNumeros(float a, float b) {
	float multiplicacion;

	multiplicacion = a * b;

	return multiplicacion;
}

float DividirNumeros(float a, float b) {
	float division;

	division = a / b;

	return division;
}

int Factorial(int numero) {
	int factorial = 1;
	if (numero == 0) {
		return 1;
	} else if (numero < 0) {
		return 0;
	} else {
		for (int i = 0; i < numero; i++) {
			factorial *= i;
		}
	}

	return factorial;
}

void IniciarVector(char mensaje[], int numeros[], int size) {

	int i;

	for (i = 0; i < size; i++) {
		printf(mensaje);
		scanf("%d", &numeros[i]);
	}
}

void IniciarVectorRango(char mensaje[], char error[], int numeros[], int size,
		int min, int max) {

	int i;

	for (i = 0; i < size; i++) {
		printf(mensaje);
		scanf("%d", &numeros[i]);

		while (numeros[i] < min || numeros[i] > max) {
			printf(error);
			scanf("%d", &numeros[i]);
		}
	}
}

int ContadorPositivos(int numeros[], int size) {

	int i;
	int contadorPositivo = 0;

	for (i = 0; i < size; i++) {
		if (numeros[i] > 0) {
			contadorPositivo++;
		}
	}

	return contadorPositivo;

}

int ContadorNegativos(int numeros[], int size) {

	int i;
	int contadorNegativo = 0;

	for (i = 0; i < size; i++) {
		if (numeros[i] < 0) {
			contadorNegativo++;
		}
	}

	return contadorNegativo;

}

int SumarPar(int numeros[], int size) {
	int i;
	int sumaPares = 0;

	for (i = 0; i < size; i++) {
		if (numeros[i] % 2 == 0) {
			sumaPares += numeros[i];
		}
	}

	return sumaPares;
}

int MayorImpar(int numeros[], int size) {
	int i;
	int flag = 1;
	int mayorImpar;

	for (i = 0; i < size; i++) {
		if (numeros[i] % 2 == 1) {
			if (flag || numeros[i] > mayorImpar) {
				flag = 0;
				mayorImpar = numeros[i];
			}
		}
	}

	return mayorImpar;

}

void MostrarNumeros(int numeros[], int size) {
	int i;

	for (i = 0; i < size; i++) {
		printf("\nNúmeros ingresados del vector: %d", numeros[i]);
	}
}

void MostrarPares(int numeros[], int size) {
	int i;

	for (i = 0; i < size; i++) {
		if (numeros[i] % 2 == 0) {
			printf("\nNúmeros pares del vector: %d", numeros[i]);
		}
	}
}

void MostrarImpares(int numeros[], int size) {
	int i;

	for (i = 0; i < size; i++) {
		if (numeros[i] % 2 == 1) {
			printf("\nNúmeros impares del vector: %d", numeros[i]);
		}
	}
}
