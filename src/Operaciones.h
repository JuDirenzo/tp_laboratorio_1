//Direnzo, Juan Marcos

/*
 * Operaciones.h
 */

#ifndef OPERACIONES_H_
#define OPERACIONES_H_

/// \fn int PedirEntero(char[])
/// \brief Se pide a través de un mensaje que se ingrese un número entero
/// \param mensaje Mensaje para pedir el ingreso del número
/// \return Número entero
int PedirEntero(char mensaje[]);

/// \fn float PedirFLoat(char[])
/// \brief Se pide un número flotante con un mensaje
/// \param mensaje Mensaje para pedir el ingreso del número
/// \return Número flotante
float PedirFLoat(char mensaje[]);

/// \fn float SumarNumeros(float, float)
/// \brief Se suman dos operandos
/// \param a Primer operando
/// \param b Segundo operando
/// \return Resultado de la suma
float SumarNumeros(float a, float b);

/// \fn float RestarNumeros(float, float)
/// \brief Se restan dos operandos
/// \param a Primer operando
/// \param b Segundo operando
/// \return Resultado de la resta
float RestarNumeros(float a, float b);

/// \fn float MultiplicarNumeros(float, float)
/// \brief Se multiplican dos operandos
/// \param a Primer operando
/// \param b Segundo operando
/// \return Resultado de la multiplicación
float MultiplicarNumeros(float a, float b);

/// \fn float DividirNumeros(float, float)
/// \brief Se multiplican dos operandos
/// \param a Primer operando
/// \param b Segundo operando
/// \return Resultado de la división
float DividirNumeros(float a, float b);

/// \fn int Factorial(int)
/// \brief Se factoriza el número ingresado
/// \param a Operando a factorizar
/// \return Número factoriado
int Factorial(int a);

/// \fn void IniciarVector(char[], int[], int)
/// \brief Se carga un vector con números puestos por el usuario
/// \param mensaje Un mensaje para dar la condición de la carga de números
/// \param numeros El array que está declarado en el main
/// \param size El tamaño del vector
void IniciarVector(char mensaje[], int numeros[], int size);

/// \fn void IniciarVectorRango(char[], char[], int[], int, int, int)
/// \brief Se carga un vector con números puestos por el usuario dentro de un rango
/// \param mensaje Un mensaje para dar la condición de la carga de números
/// \param error Un mensaje de error si se carga fuera del rango
/// \param numeros El array que está declarado en el main
/// \param size El tamaño del vector
/// \param min Numero mínimo del rango
/// \param max Numero máximo del rango
void IniciarVectorRango(char mensaje[], char error[], int numeros[], int size,
		int min, int max);

/// \fn int ContadorPositivos(int[], int)
/// \brief Se cuentan los números positivos dentro de un vector
/// \param numeros El array que está declarado en el main
/// \param size El tamaño del vector
/// \return Retorna el contador
int ContadorPositivos(int numeros[], int size);

/// \fn int ContadorNegativos(int[], int)
/// \brief Se cuentan los números negativos dentro de un vector
/// \param numeros El array que está declarado en el main
/// \param size El tamaño del vector
/// \return Retorna el contador
int ContadorNegativos(int numeros[], int size);

/// \fn int SumarPar(int[], int)
/// \brief Suma la lista de pares que hay dentro del vector
/// \param numeros El array que está declarado en el main
/// \param size El tamaño del vector
/// \return Retorna el acumulador
int SumarPar(int numeros[], int size);

/// \fn int MayorImpar(int[], int)
/// \brief Se busca al mayor impar dentro del vector
/// \param numeros El array que está declarado en el main
/// \param size El tamaño del vector
/// \return Retorna el valor máximo encontrado
int MayorImpar(int numeros[], int size);

/// \fn void MostrarNumeros(int[], int)
/// \brief Muestra el listado de números ingresados en el vector
/// \param numeros El array que está declarado en el main
/// \param size El tamaño del vector
void MostrarNumeros(int numeros[], int size);

/// \fn void MostrarPares(int[], int)
/// \brief Muestra el listado de números pares ingresados en el vector
/// \param numeros El array que está declarado en el main
/// \param size El tamaño del vector
void MostrarPares(int numeros[], int size);

/// \fn void MostrarImpares(int[], int)
/// \brief Muestra el listado de números impares ingresados en el vector
/// \param numeros El array que está declarado en el main
/// \param size El tamaño del vector
void MostrarImpares(int numeros[], int size);

#endif /* OPERACIONES_H_ */
