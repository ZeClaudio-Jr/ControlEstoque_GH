// MODULO RELATÓRIO

//RELATORIO DE PRODUTOS
void navegacaoRelatorio(void);

char menuRelatorio(void); //Menu primário RELATÓRIO

void relatorioGeral(void);
void relatorioProdutos(void);

void telaRelatProdEspecifico(void);
void telaRelatProdutos(char*);

void listProdutosPorCodigo(char*);
void listGeralProdutos(char*);

char* telaRelatorioProdutos(void);


//RELATORIO DE ENTRADA
char menuRelatorioentrada(void);
void relatorioEntradas(void);
char* telarelatorioEntradas(void);
void relatEntradas(char* codigo);
void listaEntradas(char* codigo);


//RELATORIO DE SAIDA
void relatorioSaidas(void);
char* telarelatorioSaidas(void);
void relatSaidas(char* codigo);
void listaSaidas(char* codigo);
void relatGeralSaidas(void);
void listaGeralSaidas(void);