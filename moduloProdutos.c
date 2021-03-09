#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "moduloProdutos.h"


//MODULO PRODUTOS

void navegacaoProduto(void) {
 
  char op;
  do {
    op = menuProdutos();          // Escolha principal/primária da navegação PRODUTOS - Menu Produtos
    switch (op) {
      case '0':
        system("cls");
        menuPrincipal();          // Retorno para o menu principal/main
        break;


      case '1':
        system("cls");
        cadastrarProduto();       // Entra no menu "Lançar novo produto" - Menu Produtos
        switch (op) {
          case '0':
            system("cls");
            cadastrarProduto();   // Salva e retorna para o menu "Lançar novo produto" para cadastrar novamente - Menu Produtos
            break;
          case '1':
            system("cls");
            menuProdutos();       // Salva e retorna para o menu principal/primária da navegação PRODUTOS - Menu Produtos
            break;
          case '9':
            system("cls");
            menuPrincipal();      // Salva e retorna para o menu principal/main
            break;
        }
        break;


      case '2':
        system("cls");
        alterarProduto();
        switch (op) {
          case '0':
            system("cls");  
            alterarProduto();   // Salva e retorna para o menu "Alterar produto" para alterar novamente - Menu Produtos
            break;
          case '1':
            system("cls");
            menuProdutos();       // Salva e retorna para o menu principal/primária da navegação PRODUTOS - Menu Produtos
            break;
          case '9':
            system("cls");
            menuPrincipal();      // Salva e retorna para o menu principal/main
            break;
        }
        break;


      case '3': 
        pesquisarProduto();
        switch (op) {
          case '0':
            system("cls");
            pesquisarProduto();   // Retorna para o menu "Pesquisar produto" para pesquisar novamente - Menu Produtos
            break;
          case '1':
            system("cls");
            menuProdutos();       // Retorna para o menu principal/primária da navegação PRODUTOS - Menu Produtos
            break;
          case '9':
            system("cls");
            menuPrincipal();      // Salva e retorna para o menu principal/main
            break;
        } 
        break;


      case '4': 
        excluirProduto();
        switch (op) {
          case '0':
            system("cls");
            excluirProduto();   // Retorna para o menu "Excluir produto" para excluir novamente - Menu Produtos
            break;
          case '1':
            system("cls");
            menuProdutos();       // Retorna para o menu principal/primária da navegação PRODUTOS - Menu Produtos
            break;
          case '9':
            system("cls");
            menuPrincipal();      // Salva e retorna para o menu principal/main
            break;
        } 
        break;


      default:
        printf("        Valor digitado invalido \n");
        break;
    } 

  }while (op != '0'); 
}




char menuProdutos(void) {
  
  char op;

    system("cls");
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
    printf("  |*|              [ 3 ] << Pesquisar produto >>                             |*|\n");
    printf("  *|*              [ 4 ] << Excluir produto >>                               *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|              [ 0 ] << Voltar ao Menu principal >>                      |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("                          Escolha sua opcao:   ");
    scanf("%c", &op);
    getchar();

  return op;
}


void cadastrarProduto(void) {
    
    char nome [25];
    char codigo [5];
    float valor;
    int estMax;
    int estMin;
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
    printf("  >>>>>>>>>>>>>>>        Informe sobre o novo produto:        <<<<<<<<<<<<<<<   \n");
    printf("  \n");
    // printf("  \n");
    // printf("                            Sair agora digitando [S] \n");
    printf("  \n");
    printf("  \n");
    printf("                    **      Nome do produto: << ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("                    **      Codigo do produto: << ");
    scanf("%[0-9]", codigo);
    getchar ();
    printf("                    **      Valor de compra/unid: << R$ ");
    scanf ( " %f[0-9] >>" , valor);
    getchar ();
    printf("                    **      Estoque Maximo: << ");
    scanf ( "%d",&estMax);
    getchar ();
    printf("                    **      Estoque Minimo: << ");
    scanf ( "%d",&estMin);
    getchar ();
    printf("                    **      Data de validade (dd / mm / aaaa): << ");
    scanf ( " %[0-9 /] >>" , dataValid);
    getchar ();    
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("                      [ 0 ] << Salvar e cadastrar novo produto >>               \n");
    printf("                      [ 1 ] << Salvar e voltar ao menu anterior >>              \n");
    printf("                      [ 9 ] << Salvar e Sair >>                                 \n");
    printf("  \n");
    printf("  \n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("\n");
    printf("\t>>>           Tecle <ENTER> para continuar...\n");
    getchar();

}    


void alterarProduto(void) {
    
    char nome [25];
    char codigo [5];
    float valor;
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
    printf("                    **      Nome do produto: << ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("                    **      Codigo do produto: << ");
    scanf("%[0-9]", codigo);
    getchar ();
    printf("                    **      Valor de compra/unid: << R$ ");
    scanf ( " %f.2 >>" , &valor);
    getchar ();
    printf("                    **      Estoque Maximo: << ");
    scanf ( "%d",&estMax);
    getchar ();
    printf("                    **      Estoque Minimo: << ");
    scanf ( "%d",&estMin);
    getchar ();
    printf("                    **      Data de validade (dd / mm / aaaa): << ");
    scanf ( " %[0-9 /] >>" , dataValid);
    getchar ();    
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("                      [ 0 ] << Salvar e alterar novo produto >>                 \n");
    printf("                      [ 1 ] << Salvar e voltar ao menu anterior >>              \n");
    printf("                      [ 9 ] << Salvar e Sair >>                                 \n");
    printf("  \n");
    printf("  \n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("\n");
    printf("\t>>>           Tecle <ENTER> para continuar...\n");
    getchar();

}    


void pesquisarProduto(void) {
    
    char nome [25];
    char codigo [5];
    

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
    printf("  >>>>>>>>>>>>        Informe o nome ou codigo do produto:        <<<<<<<<<<<<  \n");
    printf("             Digite 'N' para pesquisar por nome ou 'C' para codigo              \n");
    printf("  \n");
    printf("  \n");
    printf("                      **      Nome do produto: << ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("                      **      Codigo do produto: << ");
    scanf("%[0-9]", codigo);
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("                      [ 0 ] << Pesquisar novo produto >>                        \n");
    printf("                      [ 1 ] << Voltar ao menu anterior >>                       \n");
    printf("                      [ 9 ] << Sair >>                                          \n");
    printf("  \n");
    printf("  \n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("\n");
    printf("\t>>>           Tecle <ENTER> para continuar...\n");
    getchar();

}


void excluirProduto(void) {
    
    char nome [25];
    char codigo [5];
    

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
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  >>>>>>>>>>>>        Informe o nome ou codigo do produto:        <<<<<<<<<<<<  \n");
    printf("             Digite 'N' para pesquisar por nome ou 'C' para codigo              \n");
    printf("  \n");
    printf("  \n");
    printf("                    **      Nome do produto: << ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("                    **      Codigo do produto: << ");
    scanf("%[0-9]", codigo);
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("                      [ 0 ] << Excluir novo produto >>                          \n");
    printf("                      [ 1 ] << Voltar ao menu anterior >>                       \n");
    printf("                      [ 9 ] << Sair >>                                          \n");
    printf("  \n");
    printf("  \n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("\n");
    printf("\t>>>           Tecle <ENTER> para continuar...\n");
    getchar();

}
