//Bibliotecas necessarias para o modulo
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assin.h"
#include "validacao.h"


typedef struct saida Saida; //Definição do tipo Saida

void navegacaoSaida(void){                                          
 	char opcao;
 	do{
 		opcao = menuSaida();                                
 		switch (opcao) {
 			case '1' : 	
          cadastrarSaida();
 			    break;
 			case '2' : 	
          alterarSaida();		
          break;
 			case '3' : 	
          pesquisarSaida();
 				  break;
 			case '4' : 	
          pesquisarSaida();
 			    break;
      default:
          printf("Valor invalido \n");
          break;
 		}
    }while (opcao != '0');
}

void cadastrarSaida(void){
  Saida *sai;
  sai = cadastSai();
  gravarSaida(sai);
  free(sai);//desaloca a porção de memória alocada por malloc
}

void alterarSaida(void){
 Saida* sai;
 char* codigo;

 codigo = alterarSai();
 sai = buscarSaida(codigo);
 if(sai == NULL){
   printf("\n\nSaida não encontrada!\n\n");
 }else{
   sai = cadastSai();
   strcpy(sai->codigo, codigo);
   regravarSaida(sai);
   free(sai);
 }
 free(codigo);
}

void pesquisarSaida(void){
  Saida* sai;
	char* codigo;

	codigo = pesquisarSai();
	sai = buscarSaida(codigo);
	exibirSaida(sai);
	free(sai); 
	free(codigo);
}

void excluirSaida(void){
  Saida* sai;
  char* codigo;

  codigo = excluirSai();
  sai = (Saida*) malloc(sizeof(Saida));
  sai = buscarSaida(codigo);
  if(sai == NULL){
    printf("\n\nSaida não encontrada!\n\n");
  }else{
    sai->status = False;
    regravarSaida(sai);
    free(sai);
  }
  free(codigo);
}

char menuSaida(void){
  char op;
    system("clear||cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          |*|\n");
    printf("  *|*          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          *|*\n");
    printf("  |*|          MENU                                            MENU          |*|\n");
    printf("  *|*          MENU              SAIDA DE PRODUTOS             MENU          *|*\n");
    printf("  |*|          MENU                                            MENU          |*|\n");
    printf("  *|*          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          *|*\n");
    printf("  |*|          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
    printf("  *|*===================================**===================================*|*\n");
    printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                     ESCOLHA A OPCAO DESEJADA                           |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|              [ 1 ] << Lancar nova saida >>                             |*|\n");
    printf("  *|*              [ 2 ] << Alterar/atualizar saida >>                       *|*\n");
    printf("  |*|              [ 3 ] << pesquisar saida >>                               |*|\n");
    printf("  *|*              [ 4 ] << Excluir saida >>                                 *|*\n");
    printf("  |*|              [ 5 ] << Gerar relatorio >>                               |*|\n");
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
    printf("\tDigite a opcao desejada: ");
    scanf("%c", &op);
    getchar();
  return op;
}

 Saida* cadastSai(void){
  int validar; // variavel para as validações
  Saida *sai; //Declaração da variavel

  system("clear||cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          |*|\n");
    printf("  *|*          MENU********************************************MENU          *|*\n");
    printf("  |*|          MENU*                                          *MENU          |*|\n");
    printf("  *|*          MENU*             LANCAR NOVA SAIDA            *MENU          *|*\n");
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
    printf("  >>>>>>>>>>>>>>>         Informe sobre a nova saida:         <<<<<<<<<<<<<<<   \n");
    printf("  \n");
    sai = (Saida*) malloc(sizeof(Saida)); //reservar/alocar uma quantidade de memória
    do{
      printf("  |*|          **        Nome do produto: ");
      scanf(" %24[^\n]", sai->nome);
      getchar();
      validar = validaNome(sai->nome);
      if(validar == 1){
            printf("  |*|          **        Descricao valida!\n");
      }else{
            printf("  |*|          **        Descricao invalida!\n");
      }
    }while(validar != 1);

    printf("  \n");
    do{
      printf("  |*|          **        Codigo do produto: ");
      scanf(" %s", sai->codigo);
      getchar();
      validar = validaCodigo(sai->codigo); 
      if(validar == 1){
          printf("  |*|          **        Codigo valido!\n");
      }else{
          printf("  |*|          **        Codigo invalido!\n");
      }
    }while(validar != 1);

    printf("  \n");
    do{
      printf("  |*|          **        Descricao do produto: ");
      scanf(" %s", sai->desc);
      getchar();
      validar = validaDescricao(sai->desc); 
      if(validar == 1){
          printf("  |*|          **        Descricao valida!\n");
      }else{
          printf("  |*|          **        Descricao invalida!\n");
      }
    }while(validar != 1);

    printf("  \n");    
    do{
      printf("  |*|          **        Fornecedor: ");
      scanf(" %24[^\n]", sai->forn);
      getchar();
      validar = validaForne(sai->forn);
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
      scanf("%d", &sai->dd);
      printf("  |*|          **        Digite o mes: ");
      scanf("%d", &sai->mm);
      printf("  |*|          **        Digite o ano: ");
      scanf("%d", &sai->aaaa);
      validar = valiData(sai->dd, sai->mm, sai->aaaa); 
        if(validar == 1){
          printf("  |*|          **        %d/%d/%d - DATA ACEITA! \n", sai->dd, sai->mm,  sai->aaaa);
        }else{
          printf("  |*|          **        Data: %d/%d/%d - Data informada   IMPROPRIA!  \nDigite  novamsaie.\n\n>>", sai->dd, sai->mm, sai->aaaa);
        }
    }while(validar != 1);
  
    printf("  \n"); 
    do{
      printf("  |*|          **        Quantidade: ");
      scanf(" %s", sai->qtde);
      getchar();
      validar = validaCodigo(sai->qtde); 
      if(validar == 1){
          printf("  |*|          **        Quantidade valida!\n");
      }else{
          printf("  |*|          **        Quantidade invalida!\n");
      }
    }while(validar != 1);  
    sai->status = True; 
  return sai;
}


char* alterarSai(void){
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
    printf("  *|*          MENU*               ALTERAR SAIDA              *MENU          *|*\n");
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
    printf("  >>>>>>>>>>>>>     Forneca novas informacoes sobre a saida:    <<<<<<<<<<<<<   \n");
    printf("  \n");
    do{
      printf("  |*|          **        Codigo do produto: ");
      scanf(" %s", codigo);
      getchar();
      validar = validaCodigo(codigo); 
      if(validar == 1){
          printf("  |*|          **        Codigo valido!\n");
      }else{
          printf("  |*|          **        Codigo invalido!\n");
      }
    }while(validar != 1);
  return codigo;
}

char* pesquisarSai(void){
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
    printf("  *|*          MENU*              PESQUISAR SAIDA             *MENU          *|*\n");
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
    printf("  >>>>>>>>>>>>>     Forneca novas informacoes sobre a saida:    <<<<<<<<<<<<<   \n");
    printf("  \n");
    do{
      printf("  |*|          **        Codigo do produto: ");
      scanf(" %s", codigo);
      getchar();
      validar = validaCodigo(codigo); 
      if(validar == 1){
          printf("  |*|          **        Codigo valido!\n");
      }else{
          printf("  |*|          **        Codigo invalido!\n");
      }
    }while(validar != 1);
  return codigo;
}

char* excluirSai(void){
  char* codigo;
  int validar; // variavel para as validações
  codigo = (char*) malloc(5*sizeof(char)); //reservar/aloca uma quantidade de memória
    system("cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          |*|\n");
    printf("  *|*          MENU********************************************MENU          *|*\n");
    printf("  |*|          MENU*                                          *MENU          |*|\n");
    printf("  *|*          MENU*               EXCLUIR SAIDA              *MENU          *|*\n");
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
    printf("  >>>>>>>>>>>>>     Forneca novas informacoes sobre a saida:    <<<<<<<<<<<<<   \n");
    printf("  \n");
    do{
      printf("  |*|          **        Codigo do produto: ");
      scanf(" %s", codigo);
      getchar();
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
void gravarSaida(Saida* sai){

  FILE* fp;//endereço do arquivo
  fp = fopen("Saida.dat", "ab");//abre o arquivo para gravação
  if (fp == NULL) {
    printf("Erro na abertura do arquivo!\n");
    exit(1);
  }
  fwrite(sai, sizeof(Saida), 1, fp);//escreve no arquivo
  fclose(fp);//fecha o arquivo
}

Saida* buscarSaida(char* codigo) {
		FILE* fp;
	Saida* sai;

	sai = (Saida*) malloc(sizeof(Saida));
	fp = fopen("Saida.dat", "rb");
	if (fp == NULL) {
		printf("Erro na abertura do arquivo!\n");
    exit(1);
	}
	while(fread(sai, sizeof(Saida), 1, fp) == 1){
		if(strcmp(sai->codigo, codigo) == 0){
			fclose(fp);
			return sai;
		}
	}
	fclose(fp);
	return NULL;
}

void exibirSaida(Saida* sai) {

	if (sai == NULL) {
		printf("\n= = = Saida Inexistente = = =\n");
	} else {
		printf("\n= = = Saida Cadastrada = = =\n");
    printf("Nome do Produto: %s\n", sai->nome);
		printf("Codigo do Produto: %s\n", sai->codigo);
		printf("Descrição do produto: %s\n", sai->desc);
		printf("Fornecedor: %s\n", sai->forn);
	  printf(" Data da Saida: %d/%d/%d\n", sai->dd, sai->mm,   sai->aaaa);
	}
	printf("\n\nTecle ENTER para continuar!\n\n");
	getchar();
}

void regravarSaida(Saida* sai) {
	FILE* fp;
	Saida* saiLido;

	saiLido = (Saida*) malloc(sizeof(Saida));
	fp = fopen("Saida.dat", "r+b");
	if (fp == NULL) {
		printf("Erro na abertura do arquivo!\n");
   exit(1);
  }
	while(fread(saiLido, sizeof(Saida),1, fp)){
    if(strcmp(saiLido->codigo, sai->codigo) == 0){
      fseek(fp, -1*sizeof(Saida), SEEK_CUR);
      fwrite(sai, sizeof(Saida), 1, fp);
    }
  }
	fclose(fp);
	free(saiLido);
}