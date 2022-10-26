struct aluno {
	int matricula;
};

typedef struct no *Arvore;

Arvore* criar();
void destruir(Arvore *);
int altura (Arvore *);
int quantidadeNos (Arvore *);
void percorrer (Arvore *, int );
int inserir(Arvore *, struct aluno );
int remover(Arvore *, int );
int acessarValor(Arvore *, int , struct aluno *);
