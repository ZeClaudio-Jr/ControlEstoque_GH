//MODULO ENTRADA

char menuEntrada(void);    

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