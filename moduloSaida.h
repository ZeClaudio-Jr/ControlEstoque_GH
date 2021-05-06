//MODULO SAIDA

char menuSaida(void);

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