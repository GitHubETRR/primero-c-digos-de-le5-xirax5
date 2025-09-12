/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define SUMAS 1
#define OTRO 2
#define SALIDA 3
int sumador (void);

int main(){

    int opcion;
    printf("Bienvenido\n");
    printf("seleccione una opcion ingresando su numero\n");
    do{
        printf("1- sumar todos los divisores de un numero menor a diez mil\n");
        printf("2- calcular el cuadrado de una cantidad de numeros\n");
        printf("3- salir del programa\n");
        scanf ("%d",&opcion);
        if (opcion<1 || opcion>3){
            printf("seleccione una opcion entre las indicadas, intente de nuevo\n");
        }
    }
    while (opcion<1 || opcion>3);
    switch (opcion){
         case SUMAS:
            sumador();
            break;
         case OTRO:
            break;
         case SALIDA:
            break;
    }
    return 0;
}

int sumador (void){
    int divisor=1, modelo, suma_total=0;
    do {
        printf("ingrese el numero del cual desea sumar sus divisores\n");
        scanf ("%d",&modelo);
        if (modelo<0 || modelo>10000){
            printf("ingrese un valor dentro del rango entre 0 y 10 mil");
        }
    }
    while (modelo<0 || modelo>10000);
    do{ 
        if (modelo % divisor == 0){
            suma_total=suma_total+divisor;
        }
        divisor++;
    }
    while (divisor <=modelo);
    printf("la suma de todos sus divisores es %d") ,suma_total;
    
    return 0;
}