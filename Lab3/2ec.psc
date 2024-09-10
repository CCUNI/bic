//Escribir un algoritmo que pida un nombre de usuario y una contraseña y si se ha
//introducido "Turing" y "asdasd" se indica "Has entrado al sistema", sino se da un error.

Proceso ingreso_sistema     
	
	Definir usuario, contrasenia como Cadena;
	
	Escribir "ingrese el usuario: ";
	Leer usuario;
	
	Escribir "Ingrese su contraseña: ";
	Leer contrasenia;
	
	Si ((usuario = "Turing") Y (contrasenia = "asdasd" )) Entonces
		Escribir "Has entrado al sistema";
	SiNo
		Escribir "Error!, usuario o contraseña incorrecta";
	FinSi
	
	
FinProceso
