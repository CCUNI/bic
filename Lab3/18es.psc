Proceso presupuesto_hospital
	
	//Datos
	Definir presupuesto_anual, ginecologia, pediatria, traumatologia Como Real;
	
	Escribir "Ingrese el presupuesto anual: ";
	Leer presupuesto_anual;
	
	//Procesar datos
	ginecologia <- 0.4 * presupuesto_anual;
	pediatria <- 0.3 * presupuesto_anual;
	traumatologia <- 0.3 * presupuesto_anual;
	
	//Resultados
	Escribir "El presupuesto anual para ginecolig�a es: ", ginecologia;
	Escribir "El presupuesto anual para pediatr�a es: ", pediatria;
	Escribir "El presupuesto anual para traumatolog�a es: ", traumatologia;


FinProceso
