//Definição da estrutura(struct) Produtos
typedef struct produtos Produtos;
struct produtos{
  char nome [71];
  char codigo [5];
  float valor;
  int dd, mm, aaaa; //???? Será que é char?
  int status;
};

char menuProdutos(void);

//MODULO PRODUTO

void navegacaoProduto(void); //Menu primário PRODUTOS

void cadastrarPrincipal(void);
void pesquisarPrincipal(void);
void alterarPrincipal(void);
void excluirPrincipal(void);


Produtos* cadastrarProduto(void); //Menu secundário PRODUTOS
char* pesquisarProduto(void); //Menu secundário PRODUTOS
char* alterarProduto(void); //Menu secundário PRODUTOS
char* excluirProduto(void); //Menu secundário PRODUTOS


void gravarProduto(Produtos*);
void exibirProduto(Produtos*);
Produtos* buscarProduto(char*);
void regravarProduto(Produtos*);

