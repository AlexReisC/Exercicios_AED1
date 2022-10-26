#include <stdio.h>
#include <stdlib.h>
#include "listadinamica.h"

int main(){
	Lista *al;
	al = NULL;
	al = criar();
	struct aluno b;
	b.id = 3;
	inserirInicio(al,b);
	b.id = 2;
	inserirInicio(al,b);
	b.id = 1;
	inserirInicio(al,b);
	b.id = 6;
	inserirFim(al,b);
	b.id = 7;
	inserirFim(al,b);
	b.id = 4;
	inserirOrdenado(al,b);
	b.id = 5;
	inserirOrdenado(al,b);
	removerInicio(al,b);
	removerFim(al,b);
	b.id = 2;
	inserirDiferente(al,b);
	b.id = 1;
	inserirDiferente(al,b);
	removerDoisInicio(al,b);
	removerDoisFim(al,b);
	b.id = 11;
	inserirDiferente(al,b);
	b.id = 10;
	inserirDiferente(al,b);
	imprimir(al);
	informacoes(al);
	return 0;
}
