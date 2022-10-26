#include <stdio.h>
#include <stdlib.h>
#include "listadinamica.h"

struct elemento{
	struct aluno dados;
	struct elemento *prox;
};
typedef struct elemento Elem;

Lista *criar(){
	Lista *li;
	li = (Lista *)malloc(sizeof(Lista));
	if(li != NULL) {
		*li = NULL;
	}
	return li;
}

int inserirInicio(Lista *li, struct aluno novodado) {
	if(li == NULL) {
		return 0;
	} else{
		Elem *novo = (Elem *)malloc(sizeof(Elem));
		if(novo == NULL) {
			return 0;
		}
		novo->dados = novodado;
		novo->prox = *li;
		*li = novo;
	}
	return 1;
}

int imprimir(Lista *li) {
	if(li == NULL) {
		return 0;
	}
	if(*li == NULL) {
		return 0;
	}
	Elem *aux;
	aux = *li;
	while(aux != NULL) {
		printf("|%d|->", aux->dados.id);
		aux = aux->prox;
	}
	printf("||");
	return 1;
}

int inserirOrdenado(Lista *li, struct aluno novodado) {
	if(li == NULL) {
		return 0;
	}
	else { 
		Elem *novo = (Elem *)malloc(sizeof(Elem));
		if(novo == NULL) {
			return 0;
		}
		novo->dados = novodado;
		novo->prox = NULL;
		if(*li == NULL || (*li)->dados.id > novo->dados.id) {
			novo->prox = *li;
			*li = novo;	
		}
		else {
			Elem *ant = *li;
			Elem *aux = ant->prox;
			while(aux != NULL && aux->dados.id < novo->dados.id) {
				ant = aux;
				aux = aux->prox;
			}
			ant->prox = novo;
			novo->prox = aux;
		}
		return 1;
	}
}

int inserirFim(Lista *li, struct aluno novodado) {
	if(li == NULL) {
		return 0;
	} 
	else {
		Elem *novo = (Elem *)malloc(sizeof(Elem));
		if(novo == NULL) {
			return 0;
		}
		novo->dados = novodado;
		novo->prox = NULL;
		if(*li == NULL) {
			*li = novo;	
		}
		else {
			Elem *aux = *li;
			while(aux->prox != NULL) {
				aux = aux->prox;
			}
			aux->prox = novo;
		}
		return 1;
	} 
}

int removerInicio(Lista *li, struct aluno apagardados) {
	if(li == NULL) {
		return 0;
	}
	if (*li == NULL) {
		return 0;
	}
	else {
		Elem *aux = *li;
		*li = aux->prox;
		free(aux);
		return 1;
	}
}

int removerFim(Lista *li, struct aluno apagardados) {
	if(li == NULL) {
		return 0;
	}
	if (*li == NULL) {
		return 0;
	}
	else {
		Elem *ant;
		Elem *aux = *li;
		while(aux->prox != NULL) {
			ant = aux;
			aux = aux->prox;
		}
		ant->prox = NULL;
		free(aux);
		return 1;
	}
}

int inserirDiferente(Lista *li, struct aluno novosDados) {
	if(li == NULL){
		return 0;
	}
	else{
		Elem *novo = (Elem *)malloc(sizeof(Elem));
		if(novo == NULL){
			return 0;
		}
		novo->dados = novosDados;
		if(*li == NULL){
			novo->prox = *li;
			*li = novo;
		}
		Elem *aux = *li;
		int qtd = 0;
		while(aux != NULL){
			if(aux->dados.id == novo->dados.id){
				qtd++;
			}
			aux = aux->prox;
		}
		if(qtd == 0){
			novo->prox = *li;
			*li = novo;
		} else{
			novo->prox = NULL;
			free(novo);
			return 0;
		}
		return 1;
	}
}

int informacoes(Lista *li) {
	if(li == NULL){
		return 0;
	}
	if(*li == NULL){
		return 0;
	}
	else{
		Elem *ant = *li;
		int par = 0;
		int impar = 0;
		int maior = 0;
		int menor = 0;
		while(ant != NULL){
			if(ant->dados.id % 2 == 0){
				par++;
			} else{
				impar++;
			}
			ant = ant->prox;
		}
		printf("\nNumero de pares: %d \nNumero de impares: %d", par, impar);
		return 1;
	}
}

int removerDoisInicio(Lista *li, struct aluno apagarDados) {
	if(li == NULL) {
		return 0;
	}
	if (*li == NULL) {
		return 0;
	}
	else {
		Elem *ant = *li;
		Elem *aux = ant->prox;
		*li = aux->prox;
		free(ant);
		free(aux);
		return 1;
	}
}

int removerDoisFim(Lista *li, struct aluno apagarDados){
	if(li == NULL){
		return 0;
	}
	if(*li == NULL){
		return 0;
	}
	else{
		Elem *ant;
		Elem *aux = *li;
		Elem *suc = aux->prox;
		while(suc->prox != NULL){
			ant = aux;
			aux = suc;
			suc = suc->prox;
		}
		ant->prox = NULL;
		free(aux);
		free(suc);
		return 1;
	}
}

int inverter(Lista *li, struct aluno dados){
	if(li == NULL){
		return 0;
	}
	if(*li == NULL){
		return 0;
	}
	else if((*li)->prox == NULL){
		return 0;
	}
	else {
		Elem *atual = *li;
		Elem *ant = NULL;
		Elem *suc;
		while(atual != NULL){
			suc = atual->prox;
			atual->prox = ant;
			ant = atual;
			atual = suc;
		}
		return 1;
	}
}

int concatenar(Lista *, Lista *);
int copia(Lista *);
int segmentar(Lista *, int);
