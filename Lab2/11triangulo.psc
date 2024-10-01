Algoritmo triangulo
	// Datos
	Definir x1,y1,x2,y2,x3,y3 Como Real
	Definir perim,p,area Como Real
	Escribir 'Ingrese las coordenadas del punto p1 = (x1,y1): '
	Leer x1,y1
	Escribir 'Ingrese las coordenadas del punto p2 = (x2,y2): '
	Leer x2,y2
	Escribir 'Ingrese las coordenadas del punto p3 = (x3,y3): '
	Leer x3,y3
	// Procesamiento
	d1 <- RC((x1-x2)^2+(y1-y2)^2)
	d2 <- RC((x1-x3)^2+(y1-y3)^2)
	d3 <- RC((x2-x3)^2+(y2-y3)^2)
	perim <- d1+d2+d3
	p <- perim/2
	area <- RC(p*(p-d1)*(p-d2)*(p-d3))
	// Resultado
	Escribir 'El perimetro es: ',perim
	Escribir 'El area es: ',area
FinAlgoritmo
