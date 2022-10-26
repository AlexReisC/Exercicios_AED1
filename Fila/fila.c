#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct elemento{
	struct aluno dados;
	struct elemento *prox;
};

struct fila{
	struct elemento *inicio;
	struct elemento *fim;
};

Fila *criar(){
	Fila *fi;
	fi = (Fila *)malloc(sizeof(Fila));
	if(fi != NULL){
		fi->inicio = NULL;
		fi->fim = NULL;	
	}
	return fi;
}

 int inserir(Fila *fi, struct aluno novosDados){
 	if(fi == NULL){
 		return 0;
	 }
	 Elem *novo = (Elem *)malloc(sizeof(Elem));
	 if(novo == NULL){
	 	return 0;
	 }
	 novo->dados = novosDados;
	 novo->prox = NULL;
	 if(fi->fim == NULL) {
	 	fi->inicio = novo;
	 } else{
	 	fi->fim->prox = novo;
	 }
	 fi->fim = novo;
	 return 1;
 }
 
 int remover(Fila *fi, struct aluno apagarDados){
 	if(fi == NULL){
 		return 0;
	 }
	else{
		Elem *aux = fi->inicio;
		fi->inicio = fi->inicio->prox;
		if(fi->inicio == NULL){
			fi->fim == NULL;
		}
		free(aux);
		return 1;
	}
 }
 
 int imprimir(Fila *fi){
 	if(fi == NULL){
 		return 0;
	 }
	if(fi->inicio == NULL){
		return 0;
	}
	else{
		Elem *aux = fi->inicio;
		while(aux != NULL){
			printf("%d -> ", aux->dados.id);
			aux = aux->prox;
		}
		printf("||");
		return 1;
	}
 }
