Algoritmo numeroinvertido
	Definir n,b Como Entero
	definir a,x Como Caracter
	escribir "Digite un numero"
	leer n
	a = ConvertirATexto(n)
	b = longitud(a)
	x = ""
	Mientras b > 0 hacer 
		x = x + subcadena(a,b,b)
		b = b - 1
		
	FinMientras
	Escribir "Su numero invertido es: " ConvertirANumero(x)
	
FinAlgoritmo
