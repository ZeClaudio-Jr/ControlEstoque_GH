//* Assinatura das funções
char menuPrincipal(void);
void menuSobre(void);
char menuProdutos(void);            
char menuEntrada(void);      
char menuSaida(void);
char menuRelatorio(void); 

//Definição da estrutura(struct) Produtos
typedef struct produtos Produtos;
struct produtos{
  char nome [71];
  char codigo [11];
  float valor;
  int dd, mm, aaaa;
  int status;
};

//MODULO PRODUTO

void navegacaoProduto(void); //Menu primário PRODUTOS

void cadastrarPrincipal(void);
void pesquisarPrincipal(void);
void alterarPrincipal(void);
void excluirPrincipal(void);

void gravarProduto(void);

void gravarProduto(Produtos*);
void exibirProduto(Produtos*);
void regravarProduto(Produtos*);

Produtos* buscarProdutos(char*);

Produtos* cadastrarProduto(void); //Menu secundário PRODUTOS
Produtos* pesquisarProduto(void); //Menu secundário PRODUTOS
char* pesquisarProduto(void); //Menu secundário PRODUTOS
char* alterarProduto(void); //Menu secundário PRODUTOS
char* excluirProduto(void); //Menu secundário PRODUTOS

//MODULO ENTRADA
typedef struct entrada Entrada; //Definição do tipo Entrada
struct entrada{ //STRUCT para armazenar os dados da entrada
  char nome [25];
  char codigo [5];  
  char desc[50];
  char forn[25];
  char qtde[5];
  int dd, mm, aaaa;
}; 
void navegacaoEntrada(void);
void gravarEntrada(Entrada* ent);
Entrada* cadastEntr(void);
char* alterarEntr(void);
Entrada* pesquisarEntr(void);
char* excluirEntr(void);

void cadastrarEntrada(void);// chama tela cadastEntr e recebe um apontador para o cadastro preenchido
void alterarEntrada(void);
void pesquisarEntrada(void);
void excluirEntrada(void);


//MODULO SAIDA
typedef struct saida Saida; //Definição do tipo Saida
struct saida{ //STRUCT para armazenar os dados da saida
  char nome [25];
  char codigo [5];  
  char desc[50];
  char forn[25];
  char qtde[5];
  int dd, mm, aaaa;
}; 
void navegacaoSaida(void);
Saida* cadastrarSai(void);
char* alterarSai(void);
Saida* pesquisarSai(void);
char* excluirSai(void);

void cadastrarSaida(void);// chama tela cadastEntr e recebe um apontador para o cadastro preenchido
void alterarSaida(void);
void pesquisarSaida(void);
void excluirSaida(void);


// MODULO RELATÓRIO
void navegacaoRelatorio(void);
char menuRelatorio(void); //Menu primário RELATÓRIO
void relatorioGeral(void);
void relatorioEspecifico(void);