#include <stdio.h>
#define SUMAS 1
#define DETECTOR 2
#define SALIDA 3 

void sumador (void);
void primo (void);
int calculo_primo (int);
int menu (void);

void main (void){
    
    int opcion;
    printf("\nBienvenido\n");
    opcion=menu();
    switch (opcion){
         case SUMAS:
            sumador();
            break;
         case DETECTOR:
            primo();
            break;
         case SALIDA:
            printf("gracias por visitarnos");
            break;
    }
}

int  menu (void){
    int opcion;
    printf("seleccione una opcion ingresando su numero\n");
    do{
        printf("%d- escribir y sumar todos los divisores de un numero\n",SUMAS);
        printf("%d- decidir si un numero es primo\n",DETECTOR);
        printf("%d- salir del programa\n",SALIDA);
        scanf ("%d",&opcion);
        if (opcion<SUMAS || opcion>SALIDA){
            printf("seleccione una opcion entre las indicadas, intente de nuevo\n");
        }
    }
    while (opcion<SUMAS || opcion>SALIDA);
    return opcion;
}


void sumador (void){
    int divisor, modelo, suma_total=0;
    do {
        printf("ingrese el numero del cual desea obtener sus divisores\n");
        scanf ("%d",&modelo);
        if (modelo<0){
            printf("ingrese un valor positivo");
        }
    }
    while (modelo<0);
    printf ("los divisores son\n");
    for (divisor=1; divisor<=modelo; divisor++){
        if (modelo % divisor == 0){
            suma_total=(suma_total+divisor);
            printf ("%d\n",divisor);
        }
    }
    printf("la suma de todos sus divisores es %d \n",suma_total);
    main ();
}
void primo (void){
    int modelo, respuesta;

    do {
        printf("ingrese el numero del cual desea saber si es primo\n");
        scanf ("%d",&modelo);
        if (modelo<=0){
            printf("ingrese un valor positivo\n");
        }
    }
    while (modelo<=0);
    respuesta=calculo_primo(modelo);
    if (respuesta){
        printf("el numero es primo\n");
    }
    else {
        printf ("el numero no es primo\n");
    }
    main();
}
int calculo_primo (int modelo){
    int suma_total=0, divisor=1, respuesta; 
    do {
        if (modelo % divisor == 0){
            suma_total=(suma_total+divisor);
        }
        divisor++;
    }
    while (divisor<=modelo);
    if (suma_total == (modelo+1)){
        respuesta=1;
    }
    else {
       respuesta=0;
    }
    return respuesta;
}