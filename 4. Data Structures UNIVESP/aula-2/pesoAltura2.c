#include <stdio.h>
#include <malloc.h>
#define alturaMaxima 225

typedef struct {
	int peso;
    int altura;
} PesoAltura;

int main(){
	PesoAltura* pessoa1 = (PesoAltura*) malloc(sizeof(PesoAltura));
    pessoa1->peso = 80;
    pessoa1->altura = 190;
    printf("Peso %i, Altura %i. ", pessoa1->peso, pessoa1->altura);
    if (pessoa1->altura > alturaMaxima) printf("Acima da altura máxima.\n");
    else printf("Abaixo da altura máxima.\n");
    return 0;
}