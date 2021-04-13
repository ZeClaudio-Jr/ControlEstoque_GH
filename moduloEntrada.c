//Bibliotecas necessarias para o modulo
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assin.h"
#include "validacao.h"


typedef struct entrada Entrada; //Definição do tipo Entrada

//MODULO ENTRADA
 void navegacaoEntrada(void) {
   Entrada ent;
     	char opcao;
     	do {
     		opcao = menuEntrada();                          
     		switch (opcao) {
     			case '1' : 	
              cadastEntr();
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

void cadastrarEntrada(void){
  Entrada *ent;
  ent = cadastEntr();//lê os dados do cadastro
  //falta gravar os arquivos de entrada
  free(ent);//desaloca a porção de memória alocada por malloc
}

void alterarEntrada(void){
 //em construção 

}

void pesquisarEntrada(void){
  Entrada *ent;
  ent = pesquisarEntr();
  //falta finalizar
  free(ent);
}

void excluirEntrada(void){
//em construção 
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
    scanf("%c", &op);
    getchar();
    return op;
}


Entrada* cadastEntr(void){ //Declaração da função
  int validar; // variavel para as validações
  Entrada *ent; //Declaração da variavel
  
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
    ent = (Entrada*) malloc(sizeof(Entrada)); //reservar/alocar uma quantidade de memória
    do{
      printf("  |*|          **        Nome do produto: ");
      scanf(" %24[^\n]", ent->nome);
      getchar();
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
      getchar();
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
      scanf(" %s", ent->desc);
      getchar();
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
      getchar();
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
          printf("  |*|          **        Data: %d/%d/%d - Data informada   IMPROPRIA!  \nDigite  novamente.\n\n>>", ent->dd, ent->mm, ent->aaaa);
        }
    }while(validar != 1);
  
    printf("  \n"); 
    do{
      printf("  |*|          **        Quantidade: ");
      scanf(" %s", ent->qtde);
      getchar();
      validar = validaCodigo(ent->qtde); 
      if(validar == 1){
          printf("  |*|          **        Quantidade valida!\n");
          //salvarCadastro();
      }else{
          printf("  |*|          **        Quantidade invalida!\n");
      }
    }while(validar != 1);   
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

Entrada* pesquisarEntr(void){
  Entrada* ent;
  int validar; // variavel para as validações
  ent = (Entrada*) malloc(sizeof(Entrada)); //reservar/aloca uma quantidade de memória
  
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
      scanf(" %s", ent->codigo);
      getchar();
      validar = validaCodigo(ent->codigo); 
      if(validar == 1){
          printf("  |*|          **        Codigo valido!\n");
      }else{
          printf("  |*|          **        Codigo invalido!\n");
      }
    }while(validar != 1);
  return ent;
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


