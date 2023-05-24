#include <stdio.h>
#include <string.h>

void getRevertText(char *palabra) {
    int longitudpalabra = strlen(palabra);
    int i, j;
    char temp;

    for (i = 0, j = longitudpalabra - 1; i < j; i++, j--) {
        temp = palabra[i];
        palabra[i] = palabra[j];
        palabra[j] = temp;
    }
}

int main() {
    char palabra[100];

    printf("Escriba una palabra: ");
    scanf("%s", palabra);

    getRevertText(palabra);

    //printf("Palabra invertida: %s\n", palabra);

    system("pause");
    return printf("La palabra invertida es: %s\n", palabra);
}
