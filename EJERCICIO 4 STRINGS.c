#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define TAM 51

int dimension (char str1[]);
void invertir (char str1 [], int largo);

int main(){
    char str1 [TAM];
    printf ("Escriba su cadena, menor a 50 caracteres\n");
    scanf ("%[^\n]", str1);
    int largo= dimension (str1);
    invertir(str1, largo);
    
    printf ("La cadena invertida es: %s\n", str1);

    return 0;
}

int dimension (char str1[]){
    
    int i;
    for (i = 0; str1[i]!= 0; i++){}
    return i;
}

void invertir (char str1[], int largo){
    
    char aux [TAM];
    aux[largo]= '\0';
    for (int i = 0; i < largo; i++) {
        aux[i] = str1[i];
    }    
    for (int i = 0; i<largo ; i++) {
        str1[i]= aux [(largo-i-1)];
    }
}