//Escribe un algoritmo que reciba una cadena de texto y cuente el número de vocales
//que contiene. (sugerencia: Utilice una estructura de control repetitiva para iterar sobre
//cada carácter de la cadena y un condicional para verificar si es una vocal)

Algoritmo contar_vocales
	//Datos
	Definir s Como Cadena;
	Definir l, i, cont Como Entero;
	Escribir "Ingrese una cadena: ";
	Leer s;
	s <- Minusculas(s);
	
	//Procesamiento de datos
	l <- Longitud(s);
	i <- 1;
	cont <- 0;
	
	Mientras (i < l) Hacer
		Si(Subcadena(s,i,i) = 'a' o Subcadena(s,i,i) = 'e' o Subcadena(s,i,i) = 'i' o Subcadena(s,i,i) = 'o' o Subcadena(s,i,i) = 'u') Entonces //basta analizar minusculas gracias a la linea 11
			cont <- cont +1;
		FinSi
		i <- i + 1; 
	FinMientras
	
	//Resultodos
	Escribir "La cadena tiene ", cont, " vocales ";
	
	
	
	
	
FinAlgoritmo
