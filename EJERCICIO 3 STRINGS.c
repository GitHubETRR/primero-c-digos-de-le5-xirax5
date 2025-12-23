#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define TAM 51
int vocales (char str1[]);
void pasaMinuscula (char str1 []);

int main(){
    char str1 [TAM];
    int cantidad;
    printf ("Escriba su cadena, menor a 50 caracteres\n");
    scanf ("%[^\n]", str1);
    pasaMinuscula(str1);
    cantidad= vocales (str1);
    printf ("La cadena en minuscula es: %s\n", str1);
    printf ("La cantidad de vocales es: %d", cantidad);
    return 0;
}

int vocales (char str1[]){
    int cantidad=0;
    for (int i = 0; str1[i]; i++){
        if (str1[i] =='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u'){
            cantidad++;
        }
    }
    return cantidad;
}

void pasaMinuscula (char str1[]){
    for (int i = 0; str1[i]; i++) {
        str1[i] = tolower((unsigned char)str1[i]);
    }
}