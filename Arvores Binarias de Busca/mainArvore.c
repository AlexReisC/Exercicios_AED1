#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "arvorebinaria.h"

int main() {
	setlocale(LC_ALL, "Portuguese");
	Arvore *nozes;
	nozes = NULL;
	nozes = criar();
	struct aluno a;
	a.matricula = 7;
	inserir(nozes,a);
	a.matricula = 8;
	inserir(nozes,a);
	a.matricula = 6;
	inserir(nozes,a);
	a.matricula = 9;
	inserir(nozes,a);
	a.matricula = 5;
	inserir(nozes,a);
	//destruir(nozes);
	percorrer(nozes,2);
	if(altura(nozes) != 0){
		printf("\nAltura: %d", altura(nozes));
	}else{
		printf("Arvor� vazia!");
	}
	
	if(quantidadeNos(nozes) != 0){
		printf("\nQuantidade de n�s: %d\n", quantidadeNos(nozes));
	} else{
		printf("�rvore vazia!");
	}
	
	remover(nozes,9);
	percorrer(nozes,2);
	
	if(altura(nozes) != 0){
		printf("\nAltura: %d", altura(nozes));
	}else{
		printf("Arvor� vazia!");
	}
	
	if(quantidadeNos(nozes) != 0){
		printf("\nQuantidade de n�s: %d\n", quantidadeNos(nozes));
	} else{
		printf("�rvore vazia!");
	}
	return 0;
}
