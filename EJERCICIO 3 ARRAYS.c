#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 50
#define INFERIOR 10
#define SUPERIOR 20

int Random (int inf, int sup);
void VectorRandom (int vector [], int tam, int inf, int sup);
int RepeticionMayor (int vector[], int tam);
int DetectorMayor (int vector[], int tam);

int main() {
    int vector[TAM];
    srand(time(NULL));
    VectorRandom(vector, TAM, INFERIOR, SUPERIOR);
    int repeticion = RepeticionMayor(vector, TAM);
    printf ("el mayor se repite %d veces \n", repeticion);
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

int DetectorMayor (int vector[], int tam){
    int mayor=0;
    for (int i = 0; i < tam; i++) {
		if (vector[i]>mayor) {
			mayor=vector[i];
		}
	}
return mayor;
}

int RepeticionMayor (int vector[], int tam){
    int repeticion=0;
    int mayor= DetectorMayor(vector, tam);
    for (int i = 0; i < TAM; i++) {
		if (vector[i]==mayor)
			repeticion++;
	}
return repeticion;
}
