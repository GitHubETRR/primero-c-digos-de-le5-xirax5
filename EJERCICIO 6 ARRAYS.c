#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 20
#define INFERIOR 20
#define SUPERIOR 90
void CargaVector (int []);
void InvertirVector (int [],int[]);
void MostrarVector (int [],int[]);

int main() {
	int vector1[TAM];
	int vector2 [TAM];
	CargaVector(vector1);
	InvertirVector ( vector1, vector2);
	MostrarVector ( vector1, vector2);
	return 0;
}

void CargaVector (int vector1 []) {

	//RANDOMIZA LOS VALORES DEL VECTOR
	srand(time(NULL));
	for (int i = 0; i < TAM; i++) {
		vector1[i] = INFERIOR + rand() % (SUPERIOR-INFERIOR+1);
	}
}
void InvertirVector (int vector1[],int vector2[]) {
	for (int i = 0; i < TAM; i++) {
		vector2[TAM-1-i] = vector1[i];
	}
}
void MostrarVector (int vector1[],int vector2[]) {
	for (int i = 0; i < TAM; i++) {
		printf ("%d ",vector1[i] );
	}
	printf ("\n");
	for (int i = 0; i < TAM; i++) {
		printf ("%d ",vector2[i] );
	}
}