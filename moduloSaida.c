//Bibliotecas necessarias para o modulo
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assin.h"
#include "validacao.h"


//MODULO SAIDA

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


char menuSaida(void){
    char op;
    system("cls");
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


void cadastrarSaida(void){
  char nome [25];
  char codigo [5];  
  char desc[50];
  int dd, mm, aaaa;
  char forn[25];
  char qtde[5];
  int validar;

  system("cls");
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
    do{
      printf("  |*|          **        Nome do produto: ");
      scanf("%s", nome);
      getchar();
      validar = validaNome(nome);
      if(validar == 1){
            printf("  |*|          **        Descricao valida!\n");
      }else{
            printf("  |*|          **        Descricao invalida!\n");
      }
    }while(validar != 1);

    printf("  \n");
    do{
      printf("  |*|          **        Codigo do produto: ");
      scanf("%s", codigo);
      getchar();
      validar = validaCodigo(codigo); 
      if(validar == 1){
          printf("  |*|          **        Codigo valido!\n");
      }else{
          printf("  |*|          **        Codigo invalido!\n");
      }
    }while(validar != 1);

    printf("  \n");
    do{
      printf("  |*|          **        Descricao do produto: ");
      scanf("%s", desc);
      getchar();
      validar = validaDescricao(desc); 
      if(validar == 1){
          printf("  |*|          **        Descricao valida!\n");
      }else{
          printf("  |*|          **        Descricao invalida!\n");
      }
    }while(validar != 1);

    printf("  \n");    
    do{
      printf("  |*|          **        Fornecedor: ");
      scanf("%s", forn);
      getchar();
      validar = validaForne(forn);
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
      scanf("%d", &dd);
      printf("  |*|          **        Digite o mes: ");
      scanf("%d", &mm);
      printf("  |*|          **        Digite o ano: ");
      scanf("%d", &aaaa);
      validar = valiData(dd, mm, aaaa); 
        if(validar == 1){
          printf("  |*|          **        %d/%d/%d - DATA ACEITA! \n", dd, mm,  aaaa);
        }else{
          printf("  |*|          **        Data: %d/%d/%d - Data informada   IMPROPRIA!  \nDigite  novamente.\n\n>>", dd, mm,   aaaa);
        }
    }while(validar != 1);
  
    printf("  \n"); 
    do{
      printf("  |*|          **        Quantidade: ");
      scanf("%s", qtde);
      getchar();
      validar = validaCodigo(qtde); 
      if(validar == 1){
          printf("  |*|          **        Quantidade valida!\n");
      }else{
          printf("  |*|          **        Quantidade invalida!\n");
      }
    }while(validar != 1);
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("                      [ 0 ] << Salvar e cadastrar nova saida >>                 \n");
    printf("                      [ 1 ] << Salvar e voltar ao menu anterior >>              \n");
    printf("                      [ 9 ] << Salvar e Sair >>                                 \n");
    printf("  \n");
    printf("  \n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void alterarSaida(void){
  char nome [25];
  char codigo [5];  
  char desc[50];
  int dd, mm, aaaa;
  char forn[25];
  char qtde[5];
  int validar;

  system("cls");
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
      printf("  |*|          **        Nome do produto: ");
      scanf("%s", nome);
      getchar();
      validar = validaNome(nome);
      if(validar == 1){
            printf("  |*|          **        Descricao valida!\n");
      }else{
            printf("  |*|          **        Descricao invalida!\n");
      }
    }while(validar != 1);

    printf("  \n");
    do{
      printf("  |*|          **        Codigo do produto: ");
      scanf("%s", codigo);
      getchar();
      validar = validaCodigo(codigo); 
      if(validar == 1){
          printf("  |*|          **        Codigo valido!\n");
      }else{
          printf("  |*|          **        Codigo invalido!\n");
      }
    }while(validar != 1);

    printf("  \n");
    do{
      printf("  |*|          **        Descricao do produto: ");
      scanf("%s", desc);
      getchar();
      validar = validaDescricao(desc); 
      if(validar == 1){
          printf("  |*|          **        Descricao valida!\n");
      }else{
          printf("  |*|          **        Descricao invalida!\n");
      }
    }while(validar != 1);

    printf("  \n");    
    do{
      printf("  |*|          **        Fornecedor: ");
      scanf("%s", forn);
      getchar();
      validar = validaForne(forn);
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
      scanf("%d", &dd);
      printf("  |*|          **        Digite o mes: ");
      scanf("%d", &mm);
      printf("  |*|          **        Digite o ano: ");
      scanf("%d", &aaaa);
      validar = valiData(dd, mm, aaaa); 
        if(validar == 1){
          printf("  |*|          **        %d/%d/%d - DATA ACEITA! \n", dd, mm,  aaaa);
        }else{
          printf("  |*|          **        Data: %d/%d/%d - Data informada   IMPROPRIA!  \nDigite  novamente.\n\n>>", dd, mm,   aaaa);
        }
    }while(validar != 1);
  
    printf("  \n"); 
    do{
      printf("  |*|          **        Quantidade: ");
      scanf("%s", qtde);
      getchar();
      validar = validaCodigo(qtde); 
      if(validar == 1){
          printf("  |*|          **        Quantidade valida!\n");
      }else{
          printf("  |*|          **        Quantidade invalida!\n");
      }
    }while(validar != 1);
	  printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("                      [ 0 ] << Salvar e alterar nova saida >>                   \n");
    printf("                      [ 1 ] << Salvar e voltar ao menu anterior >>              \n");
    printf("                      [ 9 ] << Salvar e Sair >>                                 \n");
    printf("  \n");
    printf("  \n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void pesquisarSaida(void){
  char nome [25];
  char forn[25];
  int validar;
    system("cls");
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
    printf("  >>>>>>>>     Informe o nome do produto ou o nome do fornecedor:     <<<<<<<<  \n");
    printf("  \n");                                                             
    do{
      printf("  |*|          **        Nome do produto: ");
      scanf("%s", nome);
      getchar();
      validar = validaNome(nome);
      if(validar == 1){
            printf("  |*|          **        Descricao valida!\n");
      }else{
            printf("  |*|          **        Descricao invalida!\n");
      }
    }while(validar != 1);
    printf("  \n");    
    do{
      printf("  |*|          **        Fornecedor: ");
      scanf("%s", forn);
      getchar();
      validar = validaForne(forn);
        if(validar == 1){
          printf("  |*|          **        Fornecedor valido!\n");
        }else{
          printf("  |*|          **        Fornecedor invalido!\n");
        }
    }while(validar != 1);   
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("                      [ 0 ] << Pesquisar nova saida >>                          \n");
    printf("                      [ 1 ] << Voltar ao menu anterior >>                       \n");
    printf("                      [ 9 ] << Sair >>                                          \n");
    printf("  \n");
    printf("  \n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void excluirSaida(void){
  char nome [25];
  char forn[25];
  int validar;
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
    printf("  >>>>>>>>     Informe o nome do produto ou o nome do fornecedor:     <<<<<<<<  \n");
    printf("  \n");
    do{
      printf("  |*|          **        Nome do produto: ");
      scanf("%s", nome);
      getchar();
      validar = validaNome(nome);
      if(validar == 1){
            printf("  |*|          **        Descricao valida!\n");
      }else{
            printf("  |*|          **        Descricao invalida!\n");
      }
    }while(validar != 1);
    printf("  \n");    
    do{
      printf("  |*|          **        Fornecedor: ");
      scanf("%s", forn);
      getchar();
      validar = validaForne(forn);
        if(validar == 1){
          printf("  |*|          **        Fornecedor valido!\n");
        }else{
          printf("  |*|          **        Fornecedor invalido!\n");
        }
    }while(validar != 1);   
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("                      [ 0 ] << Excluir nova saida >>                            \n");
    printf("                      [ 1 ] << Voltar ao menu anterior >>                       \n");
    printf("                      [ 9 ] << Sair >>                                          \n");
    printf("  \n");
    printf("  \n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}