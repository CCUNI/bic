//Escribir un algoritmo que pida n�meros hasta que se introduzca un cero. Debe imprimir
//la suma y la media de todos los n�meros introducidos.

Proceso estructura_repetitiva
	
	//Datos
	Definir n, suma, contador Como Entero;
	Definir promedio Como Real; 
	
	
	//Procesamiento
	suma <- 0;
	contador <- 0;
	
	Repetir
		Escribir "Ingrese un entero: ";
		Leer n;
		Si (n <> 0) Entonces
			contador <- contador +1;
			suma <- suma + n;
		FinSi
	Hasta Que (n = 0) // no considerar el 0 en los c�lculos
	
	Si contador = 0 Entonces
		Escribir "No ingreso ning�n n�mero distinto de cero";
	SiNo
		promedio <- suma /(contador);
		Escribir "La suma es: ", suma;
		Escribir "El promedio es: ", promedio;
	FinSi
	
	
	
	
	
FinProceso
