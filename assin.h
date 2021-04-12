//* Assinatura das funções
char menuPrincipal(void);
void menuSobre(void);
char menuProdutos(void);            
char menuEntrada(void);      
char menuSaida(void);
char menuRelatorio(void); 

//MODULO PRODUTO
void navegacaoProduto(void); //Menu primário PRODUTOS
void cadastrarProduto(void); //Menu secundário PRODUTOS
void alterarProduto(void); //Menu secundário PRODUTOS
void pesquisarProduto(void); //Menu secundário PRODUTOS
void excluirProduto(void); //Menu secundário PRODUTOS

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

void navegacaoEntrada(void);//Menu primário ENTRADA

Entrada* cadastEntr(void);//Menu secundário ENTRADA
char salvarCadastro(void);//Menu terciario ENTRADA
char menuRetorno(void);
void alterarEntrada(void);//Menu secundário ENTRADA
void pesquisarEntrada(void);//Menu secundário ENTRADA
void excluirEntrada(void);//Menu secundário ENTRADA

//MODULO SAIDA
void navegacaoSaida(void);//Menu primário SAIDA

void cadastrarSaida(void);//Menu secundário SAIDA
void alterarSaida(void);//Menu secundário SAIDA
void pesquisarSaida(void);//Menu secundário SAIDA
void excluirSaida(void);//Menu secundário SAIDA

// MODULO RELATÓRIO
void navegacaoRelatorio(void);
char menuRelatorio(void); //Menu primário RELATÓRIO
void relatorioGeral(void);
void relatorioEspecifico(void);