#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define TAM 51

void pasaMinuscula (char str1 []);

int main(){
    char str1 [TAM];
    printf ("Escriba su cadena, menor a 50 caracteres\n");
    scanf ("%[^\n]", str1);
    pasaMinuscula(str1);
    printf ("la cadena en minuscula es %s", str1);
    return 0;
}

void pasaMinuscula (char str1[]){
    for (int i = 0; str1[i]; i++) {
        str1[i] = tolower((unsigned char)str1[i]);
    }
}