#include <stdio.h>          //Biblioteca padrão
#include <stdlib.h>
#include <string.h>         //Biblioteca para Strings
#include "assin.h"          //Biblioteca de Assinaturas
#include "validacao.h"      //Biblioteca para as validações

typedef struct produtos Produtos;

void navegacaoProduto(void) {
  Produtos prod;
  int op;

  do {
    op = menuProdutos();
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
       
      default:
        printf("        Valor digitado invalido \n");
        break;
    } 
    op = menuProdutos();
   

  } while (op != '0');

       
}

void cadastrarPrincipal(void) {
  Produtos *prod;

  prod = cadastrarProduto();

  // gravarProduto(prod);

  free(prod);
}

void pesquisarPrincipal(void) {
  Produtos* prod;

  prod = pesquisarProduto();
  // do..while
  // Pesquisar por nome ou por código
  
  free(prod);
}

void alterarPrincipal(void);

void excluirPrincipal(void);



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



Produtos*  cadastrarProduto(void) {
  int validar;
  Produtos *prod;
  

  system("cls");
  printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
  printf("\n");
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
  printf("  \n");
  prod = (Produtos*) malloc(sizeof(Produtos)); //Criando espaço
  do{
    printf("  |*|          **        Nome do produto: ");
    scanf("%s", prod->nome);
    getchar();
    validar = validaNome(prod->nome);
    if(validar == 1){
          printf("                         Descricao valida!\n");
    }else{
          printf("                         Descricao invalida!\n");
    }
  }while(validar != 1);

  printf("  \n");
  do{
    printf("  |*|          **        Codigo do produto: ");
    scanf("%s", prod->codigo);
    getchar();
    validar = validaCodigo(prod->codigo); 
    if(validar == 1){
        printf("                         Codigo valido!\n");
    }else{
        printf("                         Codigo invalido!\n");
    }
  }while(validar != 1);

  printf("  \n");
  do{
    printf("  |*|          **        Valor de compra/unid ('.' separador de centavos): << R$ ");
    scanf("%f.2", prod->valor);
    getchar();
    validar = validaValor(prod->valor);
    if(validar == 1){
      printf("                         Valor valido!\n");
    }else{
      printf("                         Valor invalido!\n");
    }
  }while(validar != 1);

  printf("  \n");
  do{
    printf("  |*|          **        Digite o dia: ");
    scanf("%d", prod->dd);
    printf("  |*|          **        Digite o mes: ");
    scanf("%d", prod->mm);
    printf("  |*|          **        Digite o ano: ");
    scanf("%d", prod->aaaa);
    getchar();
    validar = valiData(prod->dd, prod->mm, prod->aaaa); 
    if(validar == 1){
      printf("\n\n                         %d/%d/%d - Data valido!\n", prod->dd, prod->mm, prod->aaaa);
    }else{
      printf("\n                         Data: %d/%d/%d - Data informada IMPROPRIA!  \n                         Digite novamente.\n\n", prod->dd, prod->mm, prod->aaaa);
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
  return prod;

} 


//MODULO PRODUTOS
// void navegacaoProduto(void) {
//   int op;
  
//   do {
    // op = menuProdutos();          // Escolha principal/primária da navegação PRODUTOS - Menu Produtos
    // switch (op) {
//       case '0':
//         system("cls");
//         menuPrincipal();          // Retorno para o menu principal/main
//         break;


//       case '1':
//         system("cls");
//         cadastrarProduto();       // Entra no menu "Lançar novo produto" - Menu Produtos
//         switch (op) {
//           case '0':
//             system("cls");
//             menuProdutos();       // Salva e retorna para o menu principal/primária da navegação PRODUTOS - Menu Produtos
//             break;
//           case '1':
//             system("cls");
//             menuPrincipal();      // Salva e retorna para o menu principal/main
//             break;
//         }
//         break;


//       case '2':
//         system("cls");
//         alterarProduto();
//         switch (op) {
//           case '0':
//             system("cls");
//             menuProdutos();       // Salva e retorna para o menu principal/primária da navegação PRODUTOS - Menu Produtos
//             break;
//           case '1':
//             system("cls");
//             menuPrincipal();      // Salva e retorna para o menu principal/main
//             break;
//         }
//         break;


//       case '3': 
//         system("cls");
//         pesquisarProduto();
//         switch (op) {
//           case '0':
//             system("cls");
//             menuProdutos();       // Retorna para o menu principal/primária da navegação PRODUTOS - Menu Produtos
//             break;
//           case '1':
//             system("cls");
//             menuPrincipal();      // Salva e retorna para o menu principal/main
//             break;
//         } 
//         break;


//       case '4': 
//         system("cls");
//         excluirProduto();
//         switch (op) {
//           case '0':
//             system("cls");
//             menuProdutos();       // Retorna para o menu principal/primária da navegação PRODUTOS - Menu Produtos
//             break;
//           case '1':
//             system("cls");
//             menuPrincipal();      // Salva e retorna para o menu principal/main
//             break;
//         } 
//         break;


//       default:
//         printf("        Valor digitado invalido \n");
//         break;
//     } 

//   }while (op != '0'); 
// }





// void cadastrarProduto(void) {

  
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


// void cadastrarProduto(void) {
    
//     char nome [25];
//     char codigo [5];
//     float valor;
//     // int estMax;
//     // int estMin;
//     int validar;
//     int dd; 
//     int mm;
//     int aaaa;

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


// void alterarProduto(struct produtos* p) {

// }



char* alterarProduto(void) {
  int validar;
  char* codigo;
  
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
  codigo = (char*) malloc(5*sizeof(char));

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
  return codigo;

}    


//void pesquisarProduto(struct produtos p) {



Produtos* pesquisarProduto(void) {
  int validar;
  Produtos* prod;
  
     
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
  printf("  >>>>>>>>>>>>             Informe o nome do produto:             <<<<<<<<<<<<  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");
  prod = (Produtos*) malloc(sizeof(Produtos));

  do{
    printf("  |*|          **        Nome do produto: ");
    scanf("%s", prod->nome);
    getchar();

    validar = validaNome(prod->nome);
    if(validar == 1){
          printf("                         Descricao valida!\n");
    }else{
          printf("                         Descricao invalida!\n");
    }
  }while(validar != 1);

  printf("  \n");
  // do{
  //   printf("  |*|          **        Codigo do produto: ");
  //   scanf("%s", codigo);
  //   getchar();
  //   validar = validaCodigo(codigo); 
  //   if(validar == 1){
  //       printf("                         Codigo valido!\n");
  //   }else{
  //       printf("                         Codigo invalido!\n");
  //   }
  // }while(validar != 1);

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
  return prod;
  
}


//void excluirProduto(struct produtos* p) {

//}
char* excluirProduto(void) {
  char* codigo;
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
  printf("  >>>>>>>>>>>>            Informe o codigo do produto:            <<<<<<<<<<<<  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");
  codigo = (char*) malloc(5*sizeof(char));

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
  return codigo;

}


//void gravarProduto(Produtos* prod) {
//   FILE* fp;
//   fp = fopen("Produto.dat", "ab");
//   if (fp == NULL) {
//     printf("O arquivo não pode ser aberto corretamente!"\n);
//     printf("O programa será fechado\n");
//     exit(1);
//   }
//   fwrite(prod, sizeof(Produtos), 1, fp),
//   fclose(fp);
// }

// Produtos* cadastrarProduto();
// void exibeProduto(void);
// void navegacaoProduto(void);
// void gravaProduto(void);
// Produtos* buscaProdutos(void);
// void listaProdutos(void);
// void excluirProdutos(void);


//void cadastrarProduto(struct produtos*);
//void alterarProduto(struct produtos*);
//void pesquisarProduto(struct produtos);
//void excluirProduto(struct produtos*);
