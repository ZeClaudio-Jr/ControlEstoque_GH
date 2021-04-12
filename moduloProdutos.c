#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assin.h"
#include "validacao.h"



//Definição da estrutura(struct) Produtos
typedef struct produtos Produtos;

struct produtos {
    char nome [51];
    char codigo [5];
    float valor;
    int validar;
    int dd, mm, aaaa;
    
};

//void cadastrarProduto(struct produtos*);
//void alterarProduto(struct produtos*);
//void pesquisarProduto(struct produtos);
//void excluirProduto(struct produtos*);



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
            menuProdutos();       // Salva e retorna para o menu principal/primária da navegação PRODUTOS - Menu Produtos
            break;
          case '1':
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
            menuProdutos();       // Salva e retorna para o menu principal/primária da navegação PRODUTOS - Menu Produtos
            break;
          case '1':
            system("cls");
            menuPrincipal();      // Salva e retorna para o menu principal/main
            break;
        }
        break;


      case '3': 
        system("cls");
        pesquisarProduto();
        switch (op) {
          case '0':
            system("cls");
            menuProdutos();       // Retorna para o menu principal/primária da navegação PRODUTOS - Menu Produtos
            break;
          case '1':
            system("cls");
            menuPrincipal();      // Salva e retorna para o menu principal/main
            break;
        } 
        break;


      case '4': 
        system("cls");
        excluirProduto();
        switch (op) {
          case '0':
            system("cls");
            menuProdutos();       // Retorna para o menu principal/primária da navegação PRODUTOS - Menu Produtos
            break;
          case '1':
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


// void cadastrarProduto(struct produtos* p) {
  
//     system("cls");
//     printf("\n");
//     printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
//     printf("  *|*                                                                        *|*\n");
//     printf("  |*|        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            |*|\n");
//     printf("  *|*        MENU********************************************MENU            *|*\n");
//     printf("  |*|        MENU*                                          *MENU            |*|\n");
//     printf("  *|*        MENU*          LANCAR NOVO PRODUTOS            *MENU            *|*\n");
//     printf("  |*|        MENU*                                          *MENU            |*|\n");
//     printf("  *|*        MENU********************************************MENU            *|*\n");
//     printf("  |*|        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            |*|\n");
//     printf("  *|*                                                                        *|*\n");
//     printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
//     printf("  \n");
//     printf("  \n");
//     printf("  \n");
//     printf("  \n");
//     printf("  \n");
//     printf("  \n");
//     printf("  >>>>>>>>>>>>>>>        Informe sobre o novo produto:        <<<<<<<<<<<<<<<   \n");
//     printf("  \n");
//     // printf("  \n");
//     // printf("                            Sair agora digitando [S] \n");
//     printf("  \n");
    
//     printf("  \n");
//     do{
//       printf("  |*|          **        Nome do produto: ");
//       scanf("%s", nome);
//       getchar();
//       validar = validaNome(nome);
//       if(validar == 1){
//             printf("                         Descricao valida!\n");
//       }else{
//             printf("                         Descricao invalida!\n");
//       }
//     }while(validar != 1);

//     printf("  \n");
//     do{
//       printf("  |*|          **        Codigo do produto: ");
//       scanf("%s", codigo);
//       getchar();
//       validar = validaCodigo(codigo); 
//       if(validar == 1){
//           printf("                         Codigo valido!\n");
//       }else{
//           printf("                         Codigo invalido!\n");
//       }
//     }while(validar != 1);

//     printf("  \n");
//     do{
//       printf("  |*|          **        Valor de compra/unid ('.' separador de centavos): << R$ ");
//       scanf("%f.2", &valor);
//       getchar();
//       validar = validaValor(valor);
//       if(validar == 1){
//         printf("                         Valor valido!\n");
//       }else{
//         printf("                         Valor invalido!\n");
//       }
//     }while(validar != 1);

//     // printf("                    **      Estoque Maximo: << ");
//     // scanf ( "%d",&estMax);
//     // getchar ();
//     // printf("                    **      Estoque Minimo: << ");
//     // scanf ( "%d",&estMin);
//     // getchar ();

//     printf("  \n");
//     do{
//       printf("  |*|          **        Digite o dia: ");
//       scanf("%d", &dd);
//       printf("  |*|          **        Digite o mes: ");
//       scanf("%d", &mm);
//       printf("  |*|          **        Digite o ano: ");
//       scanf("%d", &aaaa);
//       getchar();
//       validar = valiData(dd, mm, aaaa); 
//       if(validar == 1){
//         printf("\n\n                         %d/%d/%d - Data valido!\n", dd, mm,  aaaa);
//       }else{
//         printf("\n                         Data: %d/%d/%d - Data informada IMPROPRIA!  \n                         Digite novamente.\n\n", dd, mm,   aaaa);
//       }
//     }while(validar != 1);
    
//     printf("  \n");
//     printf("  \n");
//     printf("  \n");
//     printf("  \n");
//     printf("                                                                                \n");
//     printf("                      [ 0 ] << Salvar e voltar ao menu anterior >>              \n");
//     printf("                      [ 1 ] << Salvar e Sair >>                                 \n");
//     printf("  \n");
//     printf("  \n");
//     printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
//     printf("\n");
//     printf("\t>>>           Tecle <ENTER> para continuar...\n");
//     getchar();

// }    


void cadastrarProduto(void) {
  Produtos *pdt;
  
  // char nome [25];
  // char codigo [5];
  // float valor;
  // // int estMax;
  // // int estMin;
  // int validar;
  // int dd; 
  // int mm;
  // int aaaa;

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
  printf("  \n");
  printf("  \n");

  pdt = (Produtos*) malloc(sizeof(Produtos));
  
  do{
    printf("  |*|          **        Nome do produto: ");
    scanf("%s", pdt->nome);
    getchar();
    validar = validaNome(nome);
    if(validar == 1){
          printf("                         Descricao valida!\n");
    }else{
          printf("                         Descricao invalida!\n");
    }
  }while(validar != 1);

  printf("  \n");
  do{
    printf("  |*|          **        Codigo do produto: ");
    scanf("%s", pdt->codigo);
    getchar();
    validar = validaCodigo(codigo); 
    if(validar == 1){
        printf("                         Codigo valido!\n");
    }else{
        printf("                         Codigo invalido!\n");
    }
  }while(validar != 1);

  printf("  \n");
  do{
    printf("  |*|          **        Valor de compra/unid ('.' separador de centavos): << R$ ");
    scanf("%f.2", pdt->valor);
    getchar();
    validar = validaValor(valor);
    if(validar == 1){
      printf("                         Valor valido!\n");
    }else{
      printf("                         Valor invalido!\n");
    }
  }while(validar != 1);

  printf("  \n");
  do{
    printf("  |*|          **        Digite o dia, mes e ano (dd/mm/aaaa): ");
    scanf("%d, %d, %d", pdt->dd, pdt->mm, pdt->aaaa);
    // printf("  |*|          **        Digite o mes: ");
    // scanf("%d", &mm);
    // printf("  |*|          **        Digite o ano: ");
    // scanf("%d", &aaaa);
    getchar();
    validar = valiData(dd, mm, aaaa); 
    if(validar == 1){
      printf("\n\n                         %d/%d/%d - Data valido!\n", dd, mm,  aaaa);
    }else{
      printf("\n                         Data: %d/%d/%d - Data informada IMPROPRIA!  \n                         Digite novamente.\n\n", dd, mm,   aaaa);
    }
  }while(validar != 1);
  
  printf("  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");
  printf("                                                                                \n");
  printf("                      [ 0 ] << Salvar e voltar ao menu anterior >>              \n");
  printf("                      [ 1 ] << Salvar e Sair >>                                 \n");
  printf("  \n");
  printf("  \n");
  printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
  printf("\n");
  printf("\t>>>           Tecle <ENTER> para continuar...\n");
  getchar();

}    


// void alterarProduto(struct produtos* p) {

// }
void alterarProduto(void) {
    
    char nome [25];
    char codigo [5];
    float valor;
    // int estMax [15];
    // int estMin [5];
    int validar;
    int dd; 
    int mm;
    int aaaa;

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
    
    printf("  \n");
    do{
      printf("  |*|          **        Nome do produto: ");
      scanf("%s", nome);
      getchar();
      validar = validaNome(nome);
      if(validar == 1){
            printf("                         Descricao valida!\n");
      }else{
            printf("                         Descricao invalida!\n");
      }
    }while(validar != 1);

    printf("  \n");
    do{
      printf("  |*|          **        Codigo do produto: ");
      scanf("%s", codigo);
      getchar();
      validar = validaCodigo(codigo); 
      if(validar == 1){
          printf("                         Codigo valido!\n");
      }else{
          printf("                         Codigo invalido!\n");
      }
    }while(validar != 1);

    printf("  \n");
    do{
      printf("  |*|          **        Valor de compra/unid ('.' separador de centavos): << R$ ");
      scanf("%f.2", &valor);
      getchar();
      validar = validaValor(valor);
      if(validar == 1){
        printf("                         Valor valido!\n");
      }else{
        printf("                         Valor invalido!\n");
      }
    }while(validar != 1);

    // printf("                    **      Estoque Maximo: << ");
    // scanf ( "%d",&estMax);
    // getchar ();
    // printf("                    **      Estoque Minimo: << ");
    // scanf ( "%d",&estMin);
    // getchar ();

    printf("  \n");
    do{
      printf("  |*|          **        Digite o dia: ");
      scanf("%d", &dd);
      printf("  |*|          **        Digite o mes: ");
      scanf("%d", &mm);
      printf("  |*|          **        Digite o ano: ");
      scanf("%d", &aaaa);
      getchar();
      validar = valiData(dd, mm, aaaa); 
      if(validar == 1){
        printf("\n\n                         %d/%d/%d - Data valido!\n", dd, mm,  aaaa);
      }else{
        printf("\n                         Data: %d/%d/%d - Data informada IMPROPRIA!  \n                         Digite novamente.\n\n", dd, mm,   aaaa);
      }
    }while(validar != 1);
    
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("                                                                                \n");
    printf("                      [ 0 ] << Salvar e voltar ao menu anterior >>              \n");
    printf("                      [ 1 ] << Salvar e Sair >>                                 \n");
    printf("  \n");
    printf("  \n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("\n");
    printf("\t>>>           Tecle <ENTER> para continuar...\n");
    getchar();

}    


//void pesquisarProduto(struct produtos p) {

// }
void pesquisarProduto(void) {
    
    // char op;
    char nome [25];
    char codigo [5];
    int validar;
    
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
    // scanf("   ", op);
    printf("  \n");
    
    do{
      printf("  |*|          **        Nome do produto: ");
      scanf("%s", nome);
      getchar();
      validar = validaNome(nome);
      if(validar == 1){
            printf("                         Descricao valida!\n");
      }else{
            printf("                         Descricao invalida!\n");
      }
    }while(validar != 1);

    printf("  \n");
    do{
      printf("  |*|          **        Codigo do produto: ");
      scanf("%s", codigo);
      getchar();
      validar = validaCodigo(codigo); 
      if(validar == 1){
          printf("                         Codigo valido!\n");
      }else{
          printf("                         Codigo invalido!\n");
      }
    }while(validar != 1);

    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("                                                                                \n");
    printf("                      [ 0 ] << Voltar ao menu anterior >>                       \n");
    printf("                      [ 1 ] << Sair >>                                          \n");
    printf("  \n");
    printf("  \n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("\n");
    printf("\t>>>           Tecle <ENTER> para continuar...\n");
    getchar();

}


//void excluirProduto(struct produtos* p) {

//}
void excluirProduto(void) {
    
    char nome [25];
    char codigo [5];
    int validar;
    

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

    printf("  \n");
    do{
      printf("  |*|          **        Nome do produto: ");
      scanf("%s", nome);
      getchar();
      validar = validaNome(nome);
      if(validar == 1){
            printf("                         Descricao valida!\n");
      }else{
            printf("                         Descricao invalida!\n");
      }
    }while(validar != 1);

    printf("  \n");
    do{
      printf("  |*|          **        Codigo do produto: ");
      scanf("%s", codigo);
      getchar();
      validar = validaCodigo(codigo); 
      if(validar == 1){
          printf("                         Codigo valido!\n");
      }else{
          printf("                         Codigo invalido!\n");
      }
    }while(validar != 1);

    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("  \n");
    printf("                                                                                \n");
    printf("                      [ 0 ] << Voltar ao menu anterior >>                       \n");
    printf("                      [ 1 ] << Sair >>                                          \n");
    printf("  \n");
    printf("  \n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("\n");
    printf("\t>>>           Tecle <ENTER> para continuar...\n");
    getchar();

}
