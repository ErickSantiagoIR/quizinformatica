#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char getRevertText, palabra[21];
    int i;
    printf("Ingrese un palabra");
    scanf("%s",palabra);
    i=0;
    while(palabra[i++]!= '\0');
    printf("%s al reves es: ",palabra);
    
    while(i>=0)
        printf("%s",palabra[i--]);
        printf("\n");
        system("pause");
return 0;
}