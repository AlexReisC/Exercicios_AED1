#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"


int main() {
	Pilha *p;
	p = NULL;
	p = criar();
	struct carta baralho;
	baralho.numero = 7;
	empilhar(p,baralho);
	baralho.numero = 5;
	empilhar(p,baralho);
	baralho.numero = 3;
	empilhar(p,baralho);
	baralho.numero = 1;
	empilhar(p,baralho);
	desempilhar(p,baralho);
	if(topo(p,&baralho) != 0){
		imprimir(baralho);
	}
	imprimir(p);
	return 0;
}
