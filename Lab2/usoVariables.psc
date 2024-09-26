Algoritmo usoVariables
	//Datos
	Definir cont_pares, acum_suma, acum_producto, n Como Entero;
	Definir indic_impar Como Logico
	cont_pares = 0;
	acum_suma = 0;
	acum_producto = 1;
	indic_impar = Falso;
	Escribir "Ingrese 10 enteros";
	
	//Procesamiento
	
	Para i<-1 Hasta 10  Hacer
		Escribir "Ingrese el ", i "° numero: ";
		Leer n;
		Si n % 2 == 0 Entonces
			cont_pares = cont_pares + 1;
			//acumulando la suma
			acum_suma = acum_suma + n;
			acum_producto = acum_producto * n;
		SiNo
			indic_impar = Verdadero;
		FinSi
		
	Fin Para
	
	//Resultados
	Escribir "S eha ingresado ", cont_pares, " numeros pares.";
	Escribir "La suma de los pares ingresados es: ", acum_suma;
	Escribir "El productro de los pares ingresados es: ", acum_producto;
	
	Si indic_impar == Verdadero Entonces
		Escribir "Se ha ingresado un numero impar";
	SiNo
		Escribir "No se ingreso ningún impar";
	FinSi
	


	
	
FinAlgoritmo
