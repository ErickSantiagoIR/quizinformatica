#include <stdio.h>
#include<stdlib.h>

int getInvertNumber(int numero);

int main() {
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    int invertedNumber = getInvertNumber(numero);

    printf("Número invertido: %d\n", invertedNumber);

    return 0;
}

int getInvertNumber(int numero) {
    int invertedNumber = 0;

    while (numero != 0) {
        invertedNumber = invertedNumber * 10 + numero % 10;
        numero /= 10;
    }

    return invertedNumber;
}
