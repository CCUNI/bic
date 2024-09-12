Proceso distancia_dos_puntos
	//Datos
	Definir x1,y1, x2,y2, distancia Como Real;
	Escribir "Ingrese las coordenadas del primer punto p = (x1,y1) ";
	Leer x1,y1;
	Escribir "Ingrese las coordenadas del segundo punto p = (x2,y2) ";
	Leer x2,y2;
	
	//Procesamiento
	distancia <- RC((x1-x2)^2 + (y1-y2)^2);
	
	//Salida
	Escribir "La distancia entre los puntos es: ", distancia;
	
FinProceso
