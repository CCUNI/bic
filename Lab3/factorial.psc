//Realice un algoritmo que pida un número y calcule su factorial. 
//Recuerde que el factorial de un número es el producto de todos
//los enteros entre 1 y el propio número

Proceso factorial
	Definir i, n, acum_productos Como Entero;
	Escribir "Ingrese un numero entero positivo";
	Leer n;
	
	acum_productos <- 1;
	//Utilizando Para (for)
	Para i<-1 Hasta n Hacer
		acum_productos <- acum_productos * i;
	FinPara
	
	Escribir  "El factorial de ", n, " es ", acum_productos;
	
	//Utilizando REPETIR (do-while)
	Definir j, acum1 Como Entero;
	j <- 1;
	acum1 <- 1;
	Repetir
		acum1 <- acum1 *j;
		j <- j+1;
	Hasta Que (j>n)
	Escribir "El factorial de ", n, " es ", acum1;
	
	
	//UTILIZANDO MIENTRAS (while)
	Definir k, acum2 Como Entero;
	k<-1;
	acum2 <- 1;
	Mientras (k <= n) Hacer
		acum2 <- acum2*k;
		k <- k+1; 
	FinMientras
	
	Escribir "El factorial de  ", n , " es ", acum2;
	
	
FinProceso
