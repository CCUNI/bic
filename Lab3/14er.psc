//14. Escribir un programa que muestre todos los números primos menores que un número
//N dado por el usuario.

Proceso primos
	
	Definir n,i,j Como Entero;
	Definir esPrimo Como Logico;
	
	Escribir "Ingrese un entero positivo";
	Leer n;
	
	Para i<-2 Hasta n-1 Con Paso 1 Hacer
		esPrimo <- Verdadero;
		Para j<-2 Hasta i-1 Con Paso 1 Hacer
			Si (i%j = 0) Entonces
				esPrimo <- Falso;
			FinSi
		FinPara
		
		Si esPrimo Entonces
			Escribir i, " es primo";
		FinSi
		
		
	FinPara
	
	
FinProceso
