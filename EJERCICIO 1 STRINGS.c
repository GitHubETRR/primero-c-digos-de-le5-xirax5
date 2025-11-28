#include <string.h>
#include <stdio.h>
#define TAM 51
int dimension (char str1 []);

int main(){
    char str1 [TAM];
    printf ("Escriba su cadena, menor a 50 caracteres\n");
    scanf ("%[^\n]", str1);
    int largo= dimension (str1);
    printf ("el largo de la cadena es %d", largo);
    return 0;
}

int dimension (char str1[]){
    int i;
    for (i = 0; str1[i]!= 0; i++){}
    return i;
}