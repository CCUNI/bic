Proceso potencia
	Definir exponente, base, resultado Como Real;
	Escribir "Ingrese la base";
	Leer base;
	
	Escribir "Ingrese el exponente";
	Leer exponente;
	
	//Estructuras considionales sin ANIDAR
	Si (exponente > 0) Entonces
		resultado <- base^exponente;
		Escribir "El resultado es: ", resultado;
	FinSi
	
	Si (exponente = 0 ) Entonces
		resultado <- 1;
		Escribir "El resutado es: ", resultado;
	FinSi
	
	Si (exponente < 0) Entonces
		resultado <- 1/base^(-exponente);
		Escribir "El resultado es: ", resultado;
	FinSi
	
	
	//Estructuras condicionales ANIDADAS
	Si (exponente > 0) Entonces
		resultado <- base^exponente;
		Escribir "El resultado es: ", resultado;
	SiNo
		Si (exponente = 0) Entonces
			resultado <- 1;
			Escribir "El resutado es: ", resultado;
		SiNo
			resultado <- 1/base^(-exponente);
			Escribir "El resultado es: ", resultado;
		FinSi
	FinSi
	
	
	
FinProceso
