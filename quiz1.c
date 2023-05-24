#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int p_i, p_f, contador;
    char getRevertText[20], palabra, aux;
    int i;
    printf("Ingrese un palabra: ");
    scanf("%c",palabra);
    i=0;
    while(i<20 && palabra!='.');
    {
    getRevertText[i]= palabra;
    i++;
    scanf("%c",palabra);
    }
    p_i=0; p_f=i-1;
    while(p_i<p_f)
    {
        aux=getRevertText[p_i];
        getRevertText[p_i]=getRevertText[p_f];
        getRevertText[p_f]=aux;
        p_i++; p_f--;
    }

    printf("\n");
    for(contador=0; contador<i; contador ++)
    {
        //printf("%c", getRevertText[contador]);
    }
    system("pause");
    printf("\n\n");
    return printf("%c", getRevertText[contador]);;
}
    