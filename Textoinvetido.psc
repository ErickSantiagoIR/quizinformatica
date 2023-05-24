Algoritmo Textoinvetido
	Definir n Como Entero
	Definir palabra,x como caracter
	Escribir "Escriba cualquier palabra o frase "
	leer palabra 
	n=longitud(palabra)
	x=""
	mientras n > 0 hacer 
		x = x + subcadena (palabra,n,n)
		n = n - 1
	FinMientras
	Escribir " la inversa de ",palabra," es:", x
FinAlgoritmo
