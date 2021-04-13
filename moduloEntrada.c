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
             // excluirEntrada();
     				  break;
          default:
              printf("Valor invalido \n");
              break;
     		}
     	} while (opcao != '0');
}


char menuEntrada(void) {
    char op;

    system("cls");
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
  Entrada *cadastro; //Declaração da variavel
  cadastro = (Entrada*) malloc(sizeof(Entrada)); //reservar/alocar uma quantidade de memória
  system("cls");
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
    do{
      printf("  |*|          **        Nome do produto: ");
      scanf(" %24[^\n]", cadastro->nome);
      getchar();
      validar = validaNome(cadastro->nome);
      if(validar == 1){
            printf("  |*|          **        Descricao valida!\n");
      }else{
            printf("  |*|          **        Descricao invalida!\n");
      }
    }while(validar != 1);

    printf("  \n");
    do{
      printf("  |*|          **        Codigo do produto: ");
      scanf(" %s", cadastro->codigo);
      getchar();
      validar = validaCodigo(cadastro->codigo); 
      if(validar == 1){
          printf("  |*|          **        Codigo valido!\n");
      }else{
          printf("  |*|          **        Codigo invalido!\n");
      }
    }while(validar != 1);

    printf("  \n");
    do{
      printf("  |*|          **        Descricao do produto: ");
      scanf(" %s", cadastro->desc);
      getchar();
      validar = validaDescricao(cadastro->desc); 
      if(validar == 1){
          printf("  |*|          **        Descricao valida!\n");
      }else{
          printf("  |*|          **        Descricao invalida!\n");
      }
    }while(validar != 1);

    printf("  \n");    
    do{
      printf("  |*|          **        Fornecedor: ");
      scanf(" %24[^\n]", cadastro->forn);
      getchar();
      validar = validaForne(cadastro->forn);
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
      scanf("%d", &cadastro->dd);
      printf("  |*|          **        Digite o mes: ");
      scanf("%d", &cadastro->mm);
      printf("  |*|          **        Digite o ano: ");
      scanf("%d", &cadastro->aaaa);
      validar = valiData(cadastro->dd, cadastro->mm, cadastro->aaaa); 
        if(validar == 1){
          printf("  |*|          **        %d/%d/%d - DATA ACEITA! \n", cadastro->dd, cadastro->mm,  cadastro->aaaa);
        }else{
          printf("  |*|          **        Data: %d/%d/%d - Data informada   IMPROPRIA!  \nDigite  novamente.\n\n>>", cadastro->dd, cadastro->mm, cadastro->aaaa);
        }
    }while(validar != 1);
  
    printf("  \n"); 
    do{
      printf("  |*|          **        Quantidade: ");
      scanf(" %s", cadastro->qtde);
      getchar();
      validar = validaCodigo(cadastro->qtde); 
      if(validar == 1){
          printf("  |*|          **        Quantidade valida!\n");
          //salvarCadastro();
      }else{
          printf("  |*|          **        Quantidade invalida!\n");
      }
    }while(validar != 1);   
  return cadastro;
}


char* alterarEntr(void){
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
    // printf("  \n");
    // do{
    //   printf("  |*|          **        Nome do produto: ");
    //   scanf(" %24[^\n]", cadastro->nome);
    //   getchar();
    //   validar = validaNome(cadastro->nome);
    //   if(validar == 1){
    //         printf("  |*|          **        Descricao valida!\n");
    //   }else{
    //         printf("  |*|          **        Descricao invalida!\n");
    //   }
    // }while(validar != 1);

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

char* pesquisarEntr(void){
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

char* excluirEntr(void){
  char* codigo;
  int validar; // variavel para as validações
    system("cls");
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


void cadastrarEntrada(void){
Entrada *cadastro;

cadastro = cadastEntr();//lê os dados do cadastro

free(cadastro);//desaloca a porção de memória alocada por malloc
}
void alterarEntrada(void){

}
void pesquisarEntrada(void){


}
void excluirEntrada(void){

}