//Escribir un algoritmo que pida un nombre de usuario y una contraseņa y si se ha
//introducido "Turing" y "asdasd" se indica "Has entrado al sistema", sino se da un error.

Proceso ingreso_sistema     
	
	Definir usuario, contrasenia como Cadena;
	
	Escribir "ingrese el usuario: ";
	Leer usuario;
	
	Escribir "Ingrese su contraseņa: ";
	Leer contrasenia;
	
	Si ((usuario = "Turing") Y (contrasenia = "asdasd" )) Entonces
		Escribir "Has entrado al sistema";
	SiNo
		Escribir "Error!, usuario o contraseņa incorrecta";
	FinSi
	
	
FinProceso
