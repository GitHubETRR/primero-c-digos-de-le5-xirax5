#include <stdio.h>

int main(){
    int anio_actual, mes_actual, dia_actual;
    int anio_nac, mes_nac, dia_nac, edad, limite;
    do{
        printf("ingrese el año actual, mes actual y dia actual, todo en numeros\n");
        scanf ("%d",&anio_actual);
        scanf ("%d",&mes_actual);
        scanf ("%d",&dia_actual);
        if (mes_actual==1||mes_actual==3||mes_actual==5||mes_actual==7||mes_actual==8||mes_actual==10||mes_actual==12)
            limite=31;
        else{
            if (mes_actual==2)
                limite=28;
            else
                limite=30;
    // para corregir si se ingresa un dia no valido
        }
        if (anio_actual<=0||mes_actual<=0||dia_actual<=0||mes_actual>12 ||dia_actual>limite){  
            printf("Ingrese respuestas validas para continuar, intentelo de nuevo");    
        }
    }
    while (anio_actual<=0||mes_actual<=0||dia_actual<=0||mes_actual>12||dia_actual>limite);
        do{
            
            printf("ingrese su año de nacimiento, mes y dia, todo en numeros\n");
            scanf ("%d",&anio_nac);
            scanf ("%d",&mes_nac);
            scanf ("%d",&dia_nac);
            if (mes_nac==1||mes_nac==3||mes_nac==5||mes_nac==7||mes_nac==8||mes_nac==10||mes_nac==12){
                limite=31;}
            else {
                if (mes_nac==2){
                    limite=28;}
                else{
                    limite=30;}}
        // para corregir si se ingresa un dia no valido
            if (anio_nac<=0||mes_nac<=0||dia_nac<=0||mes_nac>12 ||dia_nac>limite){
                printf("Ingrese respuestas validas para continuar, intentelo de nuevo");
            }
        }
        while (anio_nac<=0||mes_nac<=0||dia_nac<=0||mes_nac>12||dia_nac>limite);
        edad=anio_actual-anio_nac;
        if (mes_actual<mes_nac){  
            edad--;
        }
        if (mes_actual==mes_nac){
            if (dia_actual<dia_nac){
                edad--;
            }
        }
        printf ("su edad es %d", edad);
        if(mes_actual==mes_nac && dia_actual==dia_nac){
             printf ("Feliz Cumpleaños");
        }
    return 0;  
}