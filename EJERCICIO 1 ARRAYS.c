#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 5
#define INFERIOR 1
#define SUPERIOR 10

int SumaVector(int vector[]);
int Random (int inf, int sup);
void VectorRandom (int vector [], int tam, int inf, int sup);

int main() {
    int suma, vector[TAM];
    srand(time(NULL));
    VectorRandom(vector, TAM, INFERIOR, SUPERIOR);
	suma = SumaVector(vector);
	printf("La suma de los elementos del vector es: %d\n", suma);
	for (int i = 0; i < TAM; i++){
	    printf ("el elemento %d vale %d \n", (i+1), vector[i]);
	}
	return 0;
}

int SumaVector(int vector[]) {
	int suma = 0;
	for (int i = 0; i < TAM; i++) {
		suma = suma + vector[i];
	}
	return suma;
}
int Random (int inf, int sup) {

    return (inf + rand() % (sup-inf+1));
}
void VectorRandom (int vector [], int tam, int inf, int sup){
    for (int i = 0; i < tam; i++) {
        vector[i] = Random(inf, sup);
    }
}