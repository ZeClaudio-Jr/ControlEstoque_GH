#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assin.h"


//MODULO PRODUTOS

void navegacaoProduto(void) {
 
  char op;
  do {
    op = menuProdutos();         
    switch (op) {
      case '1': 
        cadastrarProduto();
        break;
      case '2': 
        alterarProduto();
        break;
      case '3': 
        pesquisarProduto(); 
        break;
      case '4': 
        excluirProduto();
        break;
      default:
        printf(" Valor digitado invalido \n");
        break;
    } 
  }while (op != '0'); 
}


char menuProdutos(void) {
  char op;
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            |*|\n");
    printf("  *|*        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            *|*\n");
    printf("  |*|        MENU                                            MENU            |*|\n");
    printf("  *|*        MENU                  PRODUTOS                  MENU            *|*\n");
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
    printf("  |*|              [ 1 ] << Lancar novo produto >>                           |*|\n");
    printf("  *|*              [ 2 ] << Alterar/atualizar produto >>                     *|*\n");
    printf("  |*|              [ 3 ] << pesquisar produto >>                             |*|\n");
    printf("  *|*              [ 4 ] << Excluir produto >>                               *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|              [ 0 ] <<Menu principal>>                                  |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("                     Escolha sua opcao:   ");
    scanf("%c", &op);
    getchar();

  return op;
}


void cadastrarProduto(void) {
    
    char nome [25];
    char cod [5];
    float valor [8];
    int estMax [15];
    int estMin [5];
    char dataValid [11];

    system("cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            |*|\n");
    printf("  *|*        MENU********************************************MENU            *|*\n");
    printf("  |*|        MENU*                                          *MENU            |*|\n");
    printf("  *|*        MENU*          LANCAR NOVO PRODUTOS            *MENU            *|*\n");
    printf("  |*|        MENU*                                          *MENU            |*|\n");
    printf("  *|*        MENU********************************************MENU            *|*\n");
    printf("  |*|        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  >>>>>>>>>>>>>>>        Informe sobre o novo produto:        <<<<<<<<<<<<<<<  \n");
    printf("  \n");
    printf("                **      Nome do produto: << ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("                **      Codigo do produto: << ");
    scanf("%[0-9]", cod);
    getchar ();
    printf("                **      Valor de compra/unid: << R$ ");
    scanf ( " %f[0-9] >>" , valor);
    getchar ();
    printf("                **      Estoque Maximo: << ");
    scanf ( " %[0-9] >>" , estMax);
    getchar ();
    printf("                **      Estoque Minimo: << ");
    scanf ( " %[0-9] >>" , estMin);
    getchar ();
    printf("                **      Data de validade (dd / mm / aaaa): << ");
    scanf ( " %[0-9 /] >>" , dataValid);
    getchar ();    
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("                      [ 0 ] <<Salvar e cadastrar novo produto>>                 \n");
    printf("                      [ 9 ] <<Salvar e Sair>>                                   \n");
    printf("  \n");
    printf("  \n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}    


void alterarProduto(void) {
    
    char nome [25];
    char cod [5];
    char valor [8];
    char estMax [15];
    char estMin [5];
    char dataValid [11];

    system("cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            |*|\n");
    printf("  *|*        MENU********************************************MENU            *|*\n");
    printf("  |*|        MENU*                                          *MENU            |*|\n");
    printf("  *|*        MENU*             ALTERAR PRODUTOS             *MENU            *|*\n");
    printf("  |*|        MENU*                                          *MENU            |*|\n");
    printf("  *|*        MENU********************************************MENU            *|*\n");
    printf("  |*|        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
    printf("\n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  >>>>>>>>>>>>     Forneca novas informacoes sobre o produto:    <<<<<<<<<<<<  \n");
    printf("  \n");
    printf("                **      Nome do produto: << ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("                **      Codigo do produto: << ");
    scanf("%[0-9]", cod);
    getchar ();
    printf("                **      Valor de compra/unid: << R$ ");
    scanf ( " %[0-9] >>" , valor);
    getchar ();
    printf("                **      Estoque Maximo: << ");
    scanf ( " %[0-9] >>" , estMax);
    getchar ();
    printf("                **      Estoque Minimo: << ");
    scanf ( " %[0-9] >>" , estMin);
    getchar ();
    printf("                **      Data de validade (dd / mm / aaaa): << ");
    scanf ( " %[0-9 /] >>" , dataValid);
    getchar ();    
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("                      [ 0 ] <<Salvar e alterar novo produto>>                   \n");
    printf("                      [ 9 ] <<Salvar e Sair>>                                   \n");
    printf("  \n");
    printf("  \n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}    


void pesquisarProduto(void) {
    
    char nome [25];
    char cod [5];
    

    system("cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            |*|\n");
    printf("  *|*        MENU********************************************MENU            *|*\n");
    printf("  |*|        MENU*                                          *MENU            |*|\n");
    printf("  *|*        MENU*            PESQUISAR PRODUTOS            *MENU            *|*\n");
    printf("  |*|        MENU*                                          *MENU            |*|\n");
    printf("  *|*        MENU********************************************MENU            *|*\n");
    printf("  |*|        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
    printf("\n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  >>>>>>>>>>>>       Informe o nome ou codigo do produto:         <<<<<<<<<<<<  \n");
    printf("  \n");
    printf("                **      Nome do produto: << ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("                **      Codigo do produto: << ");
    scanf("%[0-9]", cod);
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("                      [ 0 ] <<Fazer nova pesquisa>>                             \n");
    printf("                      [ 9 ] <<Sair>>                                   \n");
    printf("  \n");
    printf("  \n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}


void excluirProduto(void) {
    
    char nome [25];
    char cod [5];
    

    system("cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            |*|\n");
    printf("  *|*        MENU********************************************MENU            *|*\n");
    printf("  |*|        MENU*                                          *MENU            |*|\n");
    printf("  *|*        MENU*             EXCLUIR PRODUTOS             *MENU            *|*\n");

    printf("  |*|        MENU*                                          *MENU            |*|\n");
    printf("  *|*        MENU********************************************MENU            *|*\n");
    printf("  |*|        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
        printf("\n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  >>>>>>>>>>>>       Informe o nome ou codigo do produto:         <<<<<<<<<<<<  \n");
    printf("  \n");
    printf("                **      Nome do produto: << ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("                **      Codigo do produto: << ");
    scanf("%[0-9]", cod);
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("                      [ 0 ] <<Excluir novo produto>>                              \n");
    printf("                      [ 9 ] <<Sair>>                                   \n");
    printf("  \n");
    printf("  \n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}
