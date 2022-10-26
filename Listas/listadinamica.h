struct aluno{
	int id;
};

typedef struct elemento *Lista;

Lista *criar();
int inserirInicio(Lista *, struct aluno);
int inserirOrdenado(Lista *, struct aluno);
int inserirFim(Lista *, struct aluno);
int imprimir(Lista *);
int removerInicio(Lista *, struct aluno);
int removerFim(Lista *, struct aluno);
int removerOrdenado(Lista *, struct aluno);
int removerDoisInicio(Lista *, struct aluno);
int inserirDiferente(Lista *, struct aluno);
int informacoes(Lista *);
int removerDoisFim(Lista *, struct aluno);
int inverter(Lista *, struct aluno);
int concatenar(Lista *, Lista *);
int copia(Lista *);
int segmentar(Lista *, int);
