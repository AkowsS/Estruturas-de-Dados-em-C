

typedef struct arvb ArvB;

/*Fun��o que cria uma �rvore Bin�ria de Busca Vazia.*/
ArvB* arvb_cria_vazia(void);
/*Testa se uma �rvore Bin�ria � vazia.*/
int arvb_vazia(ArvB *a);
/*Fun��o que busca a sub-�rvore que cont�m um inteiro.*/
ArvB* arvb_busca(ArvB *a,int c);
/*Fun��o que imprime os elementos de uma �rvore.*/
void arvb_imprime(ArvB *a);
/*Fun��o que insere um inteiro em uma �rvore.*/
ArvB* arvb_insere(ArvB *a, int c);
/*Fun��o que remove um inteiro em uma �rvore.*/
ArvB* arvb_remove(ArvB *a, int c);
/*Libera o espa�o alocado para uma �rvore.*/
void arvb_libera(ArvB *a);
/////////////////////////////////////////////

// numeros de elementos divisiveis por 'n'
int folhas_div_n(ArvB* a, int n);
// arvore degenerada
int isdegenerada(ArvB* a);
// nos de uma arvore binaria
int nos_fb_n(ArvB* a, int n);
// fun��o para verificar o tamanho da avore
int arv_altura(ArvB *a);
//elementos comuns de entre listas
void impressao_arv_elem_comuns(ArvB* a, ArvB* b);
//imprime por niveis
//void impressao_arv_niveis(ArvB* a);
