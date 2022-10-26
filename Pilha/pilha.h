struct carta{
	int numero;
	char naipe;
};

typedef struct pilha *Pilha;

Pilha *criar();
int empilhar(Pilha *, struct carta);
int desempilhar(Pilha *, struct carta);
int imprimir(Pilha *);
int topo(Pilha *, struct carta);
int tamanho(Pilha *);
void embaralhar(Pilha *);
