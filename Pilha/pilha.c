#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct pilha{
	struct carta c;
	struct pilha *prox;
};

Pilha *criar(){
	Pilha *pi = (Pilha *)malloc(sizeof(Pilha));
	if(pi != NULL){
		*pi = NULL;
	}
	return pi;
}

int empilhar(Pilha *pi, struct carta novaCarta){
	if(pi == NULL){
		return 0;
	}
	struct pilha *nova = (struct pilha *)malloc(sizeof(struct pilha));
	if(nova == NULL){
		return 0;
	}
	nova->c = novaCarta;
	nova->prox = *pi;
	*pi = nova;
	return 1;
}

int desempilhar(Pilha *pi, struct carta tirarCarta){
	if(pi == NULL){
		return 0;
	}
	if(*pi == NULL){
		return 0;
	}
	struct pilha *aux = *pi;
	*pi = aux->prox;
	free(aux);
	return 1;
}

int topo(Pilha *pi, struct carta *b){
	if(pi == NULL){
		return 0;
	}
	if(*pi == NULL){
		return 0;
	}
	else {
		*b = (*pi)->c;
	}
		return 1;
	}

int imprimir(Pilha *pi){
	if(pi == NULL){
		return 0;
	}
	if(*pi == NULL){
		return 0;
	}
	else{
		struct pilha *aux = *pi;
		while(aux != NULL){
			printf("|%d|\n", aux->c.numero);
			aux = aux->prox;
		}
		return 1;
	}
}


