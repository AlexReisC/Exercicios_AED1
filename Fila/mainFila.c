#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main() {
	Fila *loterica;
	loterica = NULL;
	loterica = criar();
	struct aluno al;
	al.id = 1;
	inserir(loterica,al);
	al.id = 2;
	inserir(loterica,al);
	al.id = 3;
	inserir(loterica,al);
	remover(loterica,al);
	imprimir(loterica);
	return 0;
}
