#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 5
#define INFERIOR 1
#define SUPERIOR 10

int SumaVector(int vector[], int tam);
int Random (int inf, int sup);
void VectorRandom (int vector [], int tam, int inf, int sup);
float PromedioVector (int suma, int tam);

int main() {
    int suma, vector[TAM];
    float prom;
    srand(time(NULL));
    VectorRandom(vector, TAM, INFERIOR, SUPERIOR);
	suma = SumaVector(vector, TAM);
	printf("La suma de los elementos del vector es: %d\n", suma);
	for (int i = 0; i < TAM; i++){
	    printf ("el elemento %d vale %d \n", (i+1), vector[i]);
	}
	prom = PromedioVector(suma, TAM);
	printf("El promedio de los elementos del vector es: %2.1f\n", prom);
	return 0;
}

int SumaVector(int vector[], int tam) {
	int suma = 0;
	for (int i = 0; i < tam; i++) {
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

float PromedioVector(int suma, int tam) {
	return ((float)suma/tam);
}