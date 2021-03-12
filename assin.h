//* Assinatura das funções
char menuPrincipal(void);
void menuSobre(void);
char menuProdutos(void);            
char menuEntrada(void);      
char menuSaida(void);
void menuRelatorio(void); 

//MODULO PRODUTO
void navegacaoProduto(void); //Menu primário PRODUTOS

void cadastrarProduto(void); //Menu secundário PRODUTOS
void alterarProduto(void); //Menu secundário PRODUTOS
void pesquisarProduto(void); //Menu secundário PRODUTOS
void excluirProduto(void); //Menu secundário PRODUTOS

//MODULO ENTRADA
void navegacaoEntrada(void);//Menu primário ENTRADA

void cadastEntrada(void);//Menu secundário ENTRADA
void alterarEntrada(void);//Menu secundário ENTRADA
void pesquisarEntrada(void);//Menu secundário ENTRADA
void excluirEntrada(void);//Menu secundário ENTRADA

//MODULO SAIDA
void navegacaoSaida(void);//Menu primário SAIDA

void cadastSaida(void);//Menu secundário SAIDA
void alterarSaida(void);//Menu secundário SAIDA
void pesquisarSaida(void);//Menu secundário SAIDA
void excluirSaida(void);//Menu secundário SAIDA

// MODULO RELATÓRIO
void gerarRelatorio (void); //Menu primário RELATÓRIO