//Direnzo, Juan Marcos

/*
 * Operaciones.h
 */

#ifndef OPERACIONES_H_
#define OPERACIONES_H_

/// \fn int PedirEntero(char[])
/// \brief Se pide a trav�s de un mensaje que se ingrese un n�mero entero
/// \param mensaje Mensaje para pedir el ingreso del n�mero
/// \return N�mero entero
int PedirEntero(char mensaje[]);

/// \fn float PedirFLoat(char[])
/// \brief Se pide un n�mero flotante con un mensaje
/// \param mensaje Mensaje para pedir el ingreso del n�mero
/// \return N�mero flotante
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
/// \return Resultado de la multiplicaci�n
float MultiplicarNumeros(float a, float b);

/// \fn float DividirNumeros(float, float)
/// \brief Se multiplican dos operandos
/// \param a Primer operando
/// \param b Segundo operando
/// \return Resultado de la divisi�n
float DividirNumeros(float a, float b);

/// \fn int Factorial(int)
/// \brief Se factoriza el n�mero ingresado
/// \param a Operando a factorizar
/// \return N�mero factoriado
int Factorial(int a);

/// \fn void IniciarVector(char[], int[], int)
/// \brief Se carga un vector con n�meros puestos por el usuario
/// \param mensaje Un mensaje para dar la condici�n de la carga de n�meros
/// \param numeros El array que est� declarado en el main
/// \param size El tama�o del vector
void IniciarVector(char mensaje[], int numeros[], int size);

/// \fn void IniciarVectorRango(char[], char[], int[], int, int, int)
/// \brief Se carga un vector con n�meros puestos por el usuario dentro de un rango
/// \param mensaje Un mensaje para dar la condici�n de la carga de n�meros
/// \param error Un mensaje de error si se carga fuera del rango
/// \param numeros El array que est� declarado en el main
/// \param size El tama�o del vector
/// \param min Numero m�nimo del rango
/// \param max Numero m�ximo del rango
void IniciarVectorRango(char mensaje[], char error[], int numeros[], int size,
		int min, int max);

/// \fn int ContadorPositivos(int[], int)
/// \brief Se cuentan los n�meros positivos dentro de un vector
/// \param numeros El array que est� declarado en el main
/// \param size El tama�o del vector
/// \return Retorna el contador
int ContadorPositivos(int numeros[], int size);

/// \fn int ContadorNegativos(int[], int)
/// \brief Se cuentan los n�meros negativos dentro de un vector
/// \param numeros El array que est� declarado en el main
/// \param size El tama�o del vector
/// \return Retorna el contador
int ContadorNegativos(int numeros[], int size);

/// \fn int SumarPar(int[], int)
/// \brief Suma la lista de pares que hay dentro del vector
/// \param numeros El array que est� declarado en el main
/// \param size El tama�o del vector
/// \return Retorna el acumulador
int SumarPar(int numeros[], int size);

/// \fn int MayorImpar(int[], int)
/// \brief Se busca al mayor impar dentro del vector
/// \param numeros El array que est� declarado en el main
/// \param size El tama�o del vector
/// \return Retorna el valor m�ximo encontrado
int MayorImpar(int numeros[], int size);

/// \fn void MostrarNumeros(int[], int)
/// \brief Muestra el listado de n�meros ingresados en el vector
/// \param numeros El array que est� declarado en el main
/// \param size El tama�o del vector
void MostrarNumeros(int numeros[], int size);

/// \fn void MostrarPares(int[], int)
/// \brief Muestra el listado de n�meros pares ingresados en el vector
/// \param numeros El array que est� declarado en el main
/// \param size El tama�o del vector
void MostrarPares(int numeros[], int size);

/// \fn void MostrarImpares(int[], int)
/// \brief Muestra el listado de n�meros impares ingresados en el vector
/// \param numeros El array que est� declarado en el main
/// \param size El tama�o del vector
void MostrarImpares(int numeros[], int size);

#endif /* OPERACIONES_H_ */
