#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 100
#define INFERIOR 10
#define SUPERIOR 40

int Random (int inf, int sup);
void VectorRandom (int vector [], int tam, int inf, int sup);
int RepeticionMayor (int vector[], int tam, int inf);
int DetectorMayor (int vector[], int tam, int inf);
int DetectorMenor (int vector[], int tam, int sup);
void PosicionMayor (int vector[], int tam, int mayor);

int main() {
    int vector[TAM];
    srand(time(NULL));
    VectorRandom(vector, TAM, INFERIOR, SUPERIOR);
    
    int repeticion = RepeticionMayor(vector, TAM, INFERIOR);
    printf ("el mayor se repite %d veces \n", repeticion);
    
    int mayor = DetectorMayor (vector, TAM, INFERIOR);
    int menor = DetectorMenor (vector, TAM, SUPERIOR);
    printf("El menor es %d y el mayor es %d\n", menor, mayor);
    
    PosicionMayor (vector,TAM, mayor);
    
    for (int i = 0; i < TAM; i++){
        printf ("%d ",vector[i]);
    }
	return 0;
}


int Random (int inf, int sup) {
    return (inf + rand() % (sup-inf+1));
}

void VectorRandom (int vector [], int tam, int inf, int sup){
    for (int i = 0; i < tam; i++) {
        vector[i] = Random(inf, sup);
    }
}

int DetectorMayor (int vector[], int tam, int inf){
    int mayor=inf;
    for (int i = 0; i < tam; i++) {
		if (vector[i]>mayor) {
			mayor=vector[i];
		}
	}
return mayor;
}

int DetectorMenor (int vector[], int tam, int sup){
    int menor=sup;
    for (int i = 0; i < tam; i++) {
		if (vector[i]<menor) {
			menor=vector[i];
		}
	}
return menor;
}

int RepeticionMayor (int vector[], int tam, int inf){
    int repeticion=0;
    int mayor= DetectorMayor(vector, tam, inf);
   
    for (int i = 0; i < TAM; i++) {
		if (vector[i]==mayor){
			repeticion++;
		}
	}
return repeticion;
}

void PosicionMayor (int vector[], int tam, int mayor){
    for (int i = 0; i < tam; i++){
        if (vector[i]==mayor) 
        printf ("el mayor se encuentra en la posicion %d \n",i );
    }
}