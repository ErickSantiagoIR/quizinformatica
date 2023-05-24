#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* getRevertText(const char* texto) {
    int longitud = strlen(texto);
    char* rever = (char*) malloc((longitud + 1) * sizeof(char)); 
    
    for (int i = 0; i < longitud; i++) {
        rever[i] = texto[longitud - 1 - i]; 
    }
    
    rever[longitud] = '\0'; 
    
    return rever; 
}

int main() {
    char texto[100];
    printf("Ingresa una palabra: ");
    scanf("%s", texto);
    
    char* reversedText = getRevertText(texto);

    return 0;
}