//Bibliotecas necessarias para o modulo
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assin.h"
#include "validacao.h"


typedef struct entrada Entrada; //Definição do tipo Entrada

//MODULO ENTRADA
 void navegacaoEntrada(void) {
     	char opcao;
     	do {
     		opcao = menuEntrada();                          
     		switch (opcao) {
     			case '1' : 	
              cadastrarEntrada();
     				  break;
     			case '2' : 	
              alterarEntrada();
     				  break;
     			case '3' : 	
              pesquisarEntrada();
     				  break;
     			case '4' : 	
              excluirEntrada();
     				  break;
          default:
              printf("Valor invalido \n");
              break;
     		}
     	} while (opcao != '0');
}


//FUNÇOES DE ARQUIVO
void cadastrarEntrada(void){
  Entrada* ent;
  ent = cadastEntr();//lê os dados do cadastro
  gravarEntrada(ent);//grava os arquivos de entrada
  free(ent);//desaloca a porção de memória alocada por malloc

}

void alterarEntrada(void){
	Entrada* ent;
	char* codigo;

	codigo = alterarEntr();
	ent = buscarEntrada(codigo);
	if (ent == NULL) {
    	printf("\n\nEntrada não encontrada!\n\n");
  	} else {
		  ent = cadastEntr();
		  strcpy(ent->codigo, codigo);
		  regravarEntrada(ent);
		  free(ent);
	}
	free(codigo);
}


void pesquisarEntrada(void){
  Entrada* ent;
	char* codigo;
  
	codigo = pesquisarEntr();
	ent = buscarEntrada(codigo);
	exibirEntrada(ent);
	free(ent); 
	free(codigo);
}

void excluirEntrada(void){
  Entrada* ent;
	char *codigo;

	codigo = excluirEntr();
	ent = (Entrada*) malloc(sizeof(Entrada));
	ent = buscarEntrada(codigo);
	if (ent == NULL) {
    	printf("\n\nEntrada não encontrada!\n\n");
  	} else {
      ent->status = False;
		  regravarEntrada(ent);
		  free(ent);
	}
	free(codigo);
  }


char menuEntrada(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          |*|\n");
    printf("  *|*          MENU********************************************MENU          *|*\n");
    printf("  |*|          MENU*                                          *MENU          |*|\n");
    printf("  *|*          MENU*             ENTRADA PRODUTOS             *MENU          *|*\n");
    printf("  |*|          MENU*                                          *MENU          |*|\n");
    printf("  *|*          MENU********************************************MENU          *|*\n");
    printf("  |*|          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                     ESCOLHA A OPCAO DESEJADA                           |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|              [ 1 ] << Lancar nova entrada >>                           |*|\n");
    printf("  *|*              [ 2 ] << Alterar/atualizar entrada >>                     *|*\n");
    printf("  |*|              [ 3 ] << pesquisar entrada >>                             |*|\n");
    printf("  *|*              [ 4 ] << Excluir entrada >>                               *|*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|              [ 0 ] <<Sair deste Menu>>                                 |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\t Digite a opcao desejada: ");
    scanf(" %c", &op);
    // getchar();
    return op;
}


Entrada* cadastEntr(void){
  Entrada *ent;
  int validar;// variavel para as validações

    system("clear||cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          |*|\n");
    printf("  *|*          MENU********************************************MENU          *|*\n");
    printf("  |*|          MENU*                                          *MENU          |*|\n");
    printf("  *|*          MENU*            LANCAR NOVA ENTRADA           *MENU          *|*\n");
    printf("  |*|          MENU*                                          *MENU          |*|\n");
    printf("  *|*          MENU********************************************MENU          *|*\n");
    printf("  |*|          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  >>>>>>>>>>>>>>>        Informe sobre a nova entrada:        <<<<<<<<<<<<<<<   \n");
    printf("  \n");
    ent = (Entrada*) malloc(sizeof(Entrada));//reservar/alocar uma quantidade de memória
    do{
      printf("  |*|          **        Nome do produto: ");
      scanf(" %s", ent->nome);
      // getchar();
      validar = validaNome(ent->nome);
      if(validar == 1){
            printf("  |*|          **        Descricao valida!\n");
      }else{
            printf("  |*|          **        Descricao invalida!\n");
      }
    }while(validar != 1);

    printf("  \n");
    do{
      printf("  |*|          **        Codigo do produto: ");
      scanf(" %s", ent->codigo);
      // getchar();
      validar = validaCodigo(ent->codigo); 
      if(validar == 1){
          printf("  |*|          **        Codigo valido!\n");
      }else{
          printf("  |*|          **        Codigo invalido!\n");
      }
    }while(validar != 1);

    printf("  \n");
    do{
      printf("  |*|          **        Descricao do produto: ");
      scanf(" %49[^\n]", ent->desc);
      // getchar();
      validar = validaDescricao(ent->desc); 
      if(validar == 1){
          printf("  |*|          **        Descricao valida!\n");
      }else{
          printf("  |*|          **        Descricao invalida!\n");
      }
    }while(validar != 1);

    printf("  \n");    
    do{
      printf("  |*|          **        Fornecedor: ");
      scanf(" %24[^\n]", ent->forn);
      // getchar();
      validar = validaForne(ent->forn);
        if(validar == 1){
          printf("  |*|          **        Fornecedor valido!\n");
        }else{
          printf("  |*|          **        Fornecedor invalido!\n");
        }
    }while(validar != 1);     

    printf("  \n"); 
    printf("  |*|          **        Data da compra \n");
    do{
      printf("  |*|          **        Digite o dia: ");
      scanf("%d", &ent->dd);
      printf("  |*|          **        Digite o mes: ");
      scanf("%d", &ent->mm);
      printf("  |*|          **        Digite o ano: ");
      scanf("%d", &ent->aaaa);
      validar = valiData(ent->dd, ent->mm, ent->aaaa); 
        if(validar == 1){
          printf("  |*|          **        %d/%d/%d - DATA ACEITA! \n", ent->dd, ent->mm,  ent->aaaa);
        }else{
          printf("  |*|          **        Data: %d/%d/%d - Data informada   IMPROPRIA!  \nDigite  novamente.\n\n>>", ent->dd, ent->mm,   ent->aaaa);
        }
    }while(validar != 1);
  
    printf("  \n"); 
    do{
      printf("  |*|          **        Quantidade: ");
      scanf(" %s", ent->qtde);
      // getchar();
      validar = validaCodigo(ent->qtde); 
      if(validar == 1){
          printf("  |*|          **        Quantidade valida!\n");
      }else{
          printf("  |*|          **        Quantidade invalida!\n");
      }
    }while(validar != 1);   
    ent->status = True;
  return ent;
}



char* alterarEntr(void){
  char* codigo;
  int validar; // variavel para as validações
  codigo = (char*) malloc(5*sizeof(char)); //reservar/aloca uma quantidade de memória

  system("clear||cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          |*|\n");
    printf("  *|*          MENU********************************************MENU          *|*\n");
    printf("  |*|          MENU*                                          *MENU          |*|\n");
    printf("  *|*          MENU*              ALTERAR ENTRADA             *MENU          *|*\n");
    printf("  |*|          MENU*                                          *MENU          |*|\n");
    printf("  *|*          MENU********************************************MENU          *|*\n");
    printf("  |*|          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  >>>>>>>>>>>>>    Forneca novas informacoes sobre a entrada:   <<<<<<<<<<<<<   \n");
    printf("  \n");
    do{
      printf("  |*|          **        Codigo do produto: ");
      scanf(" %s", codigo);
      // getchar();
      validar = validaCodigo(codigo); 
      if(validar == 1){
          printf("  |*|          **        Codigo valido!\n");
      }else{
          printf("  |*|          **        Codigo invalido!\n");
      }
    }while(validar != 1);
  return codigo;
}

char* pesquisarEntr(void){
  char* codigo;
  int validar; // variavel para as validações
  codigo = (char*) malloc(5*sizeof(char)); //reservar/aloca uma quantidade de memória
  
    system("clear||cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          |*|\n");
    printf("  *|*          MENU********************************************MENU          *|*\n");
    printf("  |*|          MENU*                                          *MENU          |*|\n");
    printf("  *|*          MENU*            PESQUISAR ENTRADA             *MENU          *|*\n");
    printf("  |*|          MENU*                                          *MENU          |*|\n");
    printf("  *|*          MENU********************************************MENU          *|*\n");
    printf("  |*|          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
    printf("\n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  >>>>>>>>     Informe o nome do produto ou o nome do fornecedor:     <<<<<<<<  \n");
    printf("  \n");
    do{
      printf("  |*|          **        Codigo do produto: ");
      scanf(" %s", codigo);
      // getchar();
      validar = validaCodigo(codigo); 
      if(validar == 1){
          printf("  |*|          **        Codigo valido!\n");
      }else{
          printf("  |*|          **        Codigo invalido!\n");
      }
    }while(validar != 1);
  return codigo;
}

char* excluirEntr(void){
  char* codigo;
  int validar; // variavel para as validações
  
    system("clear||cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          |*|\n");
    printf("  *|*          MENU********************************************MENU          *|*\n");
    printf("  |*|          MENU*                                          *MENU          |*|\n");
    printf("  *|*          MENU*              EXCLUIR ENTRADA             *MENU          *|*\n");
    printf("  |*|          MENU*                                          *MENU          |*|\n");
    printf("  *|*          MENU********************************************MENU          *|*\n");
    printf("  |*|          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  >>>>>>>>     Informe o nome do produto ou o nome do fornecedor:     <<<<<<<<  \n");
    printf("  \n");
    codigo = (char*) malloc(5*sizeof(char));
    do{
      printf("  |*|          **        Codigo do produto: ");
      scanf(" %s", codigo);
      // getchar();
      validar = validaCodigo(codigo); 
      if(validar == 1){
          printf("  |*|          **        Codigo valido!\n");
      }else{
          printf("  |*|          **        Codigo invalido!\n");
      }
    }while(validar != 1);
  return codigo;
}


//FUNÇÕES DE ARQUIVOS
void gravarEntrada(Entrada* ent){

  FILE* fp;//endereço do arquivo
  fp = fopen("Entrada.dat", "ab");//abre o arquivo para gravação
  if (fp == NULL) {
    printf("Erro na abertura do arquivo!\n");
    exit(1);
  }
  fwrite(ent, sizeof(Entrada), 1, fp);//escreve no arquivo
  fclose(fp);//fecha o arquivo
}


Entrada* buscarEntrada(char* codigo) {
	FILE* fp;
	Entrada* ent;

	ent = (Entrada*) malloc(sizeof(Entrada));
	fp = fopen("Entrada.dat", "rb");
	if (fp == NULL) {
		printf("Erro na abertura do arquivo!\n");
    exit(1);
	}
	while(fread(ent, sizeof(Entrada), 1, fp) == 1){
		if(strcmp(ent->codigo, codigo) == 0){
			fclose(fp);
			return ent;
		}
	}
	fclose(fp);
	return NULL;
}


void exibirEntrada(Entrada* ent) {
  
	if (ent == NULL) {
		printf("\n= = = Entrada Inexistente = = =\n");
	} else {
		printf("\n= = = Entrada Cadastrada = = =\n");
    printf("Nome do Produto: %s\n", ent->nome);
		printf("Codigo do Produto: %s\n", ent->codigo);
		printf("Descrição do produto: %s\n", ent->desc);
		printf("Fornecedor: %s\n", ent->forn);
    printf("Quantidade: %s\n", ent->qtde);
	  printf(" Data da Entrada: %d/%d/%d\n", ent->dd, ent->mm, ent->aaaa);
	}
	printf("\n\nTecle ENTER para continuar!\n\n");
	getchar();
	getchar();
}


void regravarEntrada(Entrada* ent) {
	FILE* fp;
	Entrada* entLido;

	entLido = (Entrada*) malloc(sizeof(Entrada));
	fp = fopen("Entrada.dat", "r+b");
	if (fp == NULL) {
		printf("Erro na abertura do arquivo!\n");
   exit(1);
	}
  while(fread(entLido, sizeof(Entrada),1, fp)){
    if(strcmp(entLido->codigo, ent->codigo) == 0){
      fseek(fp, -1*sizeof(Entrada), SEEK_CUR);
      fwrite(ent, sizeof(Entrada), 1, fp);
    }
  }
	fclose(fp);
	free(entLido);
}
