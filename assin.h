// #define
#define True 1
#define False 0


//* Assinatura das funções
char menuPrincipal(void);
void menuSobre(void);
char menuEntrada(void);    
char menuSaida(void);
char menuRelatorio(void);

//MODULO ENTRADA
typedef struct entrada Entrada; //Definição do tipo Entrada
struct entrada{ //STRUCT para armazenar os dados da entrada
  char nome [25];
  char codigo [5];  
  char desc[50];
  char forn[25];
  char qtde[5];
  int dd, mm, aaaa;
  int status;
}; 

void navegacaoEntrada(void);
void gravarEntrada(Entrada* ent);
Entrada* buscarEntrada(char* codigo);
void exibirEntrada(Entrada* ent);
void regravarEntrada(Entrada* ent);
Entrada* cadastEntr(void);
char* alterarEntr(void);
char* pesquisarEntr(void);
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
  int status;
}; 
void navegacaoSaida(void);
void gravarSaida(Saida* Sai);
Saida* buscarSaida(char* codigo);
void exibirSaida(Saida* Sai);
void regravarSaida(Saida* Sai);
Saida* cadastSai(void);
char* alterarSai(void);
char* pesquisarSai(void);
char* excluirSai(void);

void cadastrarSaida(void);// chama tela cadastSai e recebe um apontador para o cadastro preenchido
void alterarSaida(void);
void pesquisarSaida(void);
void excluirSaida(void);


// MODULO RELATÓRIO
void navegacaoRelatorio(void);
char menuRelatorio(void); //Menu primário RELATÓRIO
void relatorioEntradas(void);
char* telarelatorioEntradas(void);
void relatEntradas(char* codigo);
void listaEntradas(char* codigo);
void relatorioEspecifico(void);