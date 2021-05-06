// MODULO RELATÓRIO

//RELATORIO DE PRODUTOS
void navegacaoRelatorio(void);

char menuRelatorio(void); //Menu primário RELATÓRIO
char menuRelatorioProdutos(void);

void relatorioGeral(void);
void relatGeralProdutos(void);
void relatorioProdutos(void);

void telaRelatProdEspecifico(void);
void telaRelatProdutos(char*);

void listProdutosPorCodigo(char*);
void listaGeralProdutos(void);

char* telaRelatorioProdutos(void);


//RELATORIO DE ENTRADA
char menuRelatorioEntrada(void);
void relatorioEntradas(void);
char* telarelatorioEntradas(void);
void relatEntradas(char* codigo);
void listaEntradas(char* codigo);
void relatGeralEntradas(void);
void listaGeralEntradas(void);


//RELATORIO DE SAIDA
char menuRelatorioSaida(void);
void relatorioSaidas(void);
char* telarelatorioSaidas(void);
void relatSaidas(char* codigo);
void listaSaidas(char* codigo);
void relatGeralSaidas(void);
void listaGeralSaidas(void);