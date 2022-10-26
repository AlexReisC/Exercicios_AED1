struct aluno{
	int id;
};

typedef struct elemento Elem;
typedef struct fila Fila;

Fila *criar();
int inserir(Fila *, struct aluno);
int remover(Fila *, struct aluno);
int imprimir(Fila *);

