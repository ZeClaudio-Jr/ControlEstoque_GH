#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assin.h"

//MODULO SAIDA

void navegacaoSaida(void){                                          
 	char opcao;
 	do{
 		opcao = menuSaida();                                
 		switch (opcao) {
 			case '1' : 	
          cadastSaida();
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
    printf("  |*|        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            |*|\n");
    printf("  *|*        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            *|*\n");
    printf("  |*|        MENU                                            MENU            |*|\n");
    printf("  *|*        MENU              SAIDA DE PRODUTOS             MENU            *|*\n");
    printf("  |*|        MENU                                            MENU            |*|\n");
    printf("  *|*        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            *|*\n");
    printf("  |*|        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            |*|\n");
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
    printf("Digite a opcao desejada: ");
    scanf("%c", &op);
    getchar();
    return op;
}


void cadastSaida(void){
  char nome [25];
  char cod [5];  
  char desc[50];
  char data[11];
  char forn[25];
  char qtde[5];

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
    printf("  |*|          **        Nome do produto: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("  |*|          **        Codigo do produto: ");
    scanf("%[0-9]", cod);
	  getchar();
    printf("  |*|          **        Descricao do produto: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", desc);
    getchar();
    printf("  |*|          **        Data da compra: ");
    scanf("%[0-9/]", data);
	  getchar();
    printf("  *|*          **        Fornecedor: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", forn);
	  getchar();
    printf("  |*|          **        Quantidade: ");
    scanf("%[0-9]", qtde);
	  getchar();
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
  char cod [5];  
  char desc[50];
  char data[11];
  char forn[25];
  char qtde[5];

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
    printf("  |*|         **         Nome do produto: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("  |*|         **         Codigo do produto: ");
    scanf("%[0-9]", cod);
	  getchar();
    printf("  |*|         **         Descricao do produto: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", desc);
    getchar();
    printf("  |*|         **         Data: ");
    scanf("%[0-9/]", data);
	  getchar();
    printf("  *|*         **         Fornecedor: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", forn);
	  getchar();
    printf("  |*|         **         Quantidade: ");
    scanf("%[0-9]", qtde);
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
    printf("  |*|          **          Nome do produto: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("  *|*          **          Nome do fornecedor: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", forn);
	  getchar();
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
    printf("  |*|           **         Nome do produto: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("  *|*           **         Nome do ornecedor: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", forn);
	  getchar();
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