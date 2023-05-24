#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* getRevertText(const char* palabra) {
    int longitud = strlen(palabra);
    char* revert = (char*) malloc((longitud + 1) * sizeof(char)); 
    
    for (int i = 0; i < longitud; i++) {
        revert[i] = palabra[longitud - 1 - i]; 
    }
    
    revert[longitud] = '\0'; 
    
    return revert; 
}

int main() {
    char texto[100];
    printf("Ingresa una palabra: ");
    scanf("%s", palabra);
    
    char* reversedText = getRevertText(palabra);

    return 0;
}