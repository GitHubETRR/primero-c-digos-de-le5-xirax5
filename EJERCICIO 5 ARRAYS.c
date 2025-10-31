#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 5
#define INFERIOR 0
#define SUPERIOR 4
int CalculoEscalar (int vector1[], int vector2[],int tam);
int Random (int inf, int sup);
void VectorRandom (int vector1 [], int vector2[], int tam, int inf, int sup);

int main(){
    int vector1[TAM];
    int vector2 [TAM];
    srand(time(NULL));
    VectorRandom (vector1, vector2, TAM, INFERIOR, SUPERIOR);
    
    int productoEscalar= CalculoEscalar(vector1, vector2, TAM);
    
    printf ("el producto escalar es %d\n", productoEscalar);
    
     for (int i = 0; i < TAM; i++){
    printf ("par %d° %d_%d\n",(i+1), vector1[i],vector2[i] );
    }
    return 0;
}

int CalculoEscalar (int vector1[], int vector2[],int tam){
    int productoEscalar=0;
    for (int i = 0; i < tam; i++){
    productoEscalar = productoEscalar + vector1[i]*vector2[i];
    }
return productoEscalar;
}

    
void VectorRandom (int vector1 [], int vector2[], int tam, int inf, int sup){
    for (int i = 0; i < tam; i++) {
        vector1[i] = Random(inf, sup);
        vector2[i] = Random(inf, sup);
    }
}

int Random (int inf, int sup) {
    return (inf + rand() % (sup-inf+1));
}