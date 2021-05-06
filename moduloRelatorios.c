#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validacao.h"
#include "assin.h"
#include "moduloProdutos.h"
#include "moduloEntrada.h"
#include "moduloSaida.h"
#include "moduloRelatorios.h"


void navegacaoRelatorio(void) {
 
  char op;
  do {
    op = menuRelatorio();         
    switch (op) {
      case '1': 
        menuRelatorioProdutos();  //Antigo relatorioProdutos
        break;

      case '2': 
        menuRelatorioEntrada();      
        break;
   
      case '3': 
        menuRelatorioSaidas();      
        break;

      default:
        printf("             Valor digitado invalido. \n");
        printf("   Tente digitar um numero correto para uma das opcoes. \n");
        break;
    } 

  }while (op != '0'); 
}


char menuRelatorio(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =             Gerar Relatorio do Estoque           =            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
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
    printf("  |*|            Digite o tipo de relatorio desejado ou sair:                |*|\n");  
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                [ 1 ] << Relatorios de produtos >>                      *|*\n");
    printf("  |*|                [ 2 ] << Relatorios de Entradas >>                      |*|\n");
    printf("  *|*                [ 3 ] << Relatorios de Saidas >>                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                [ 0 ] << Sair >>                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\t                Digite a opcao desejada: ");
    scanf("%c", &op);  
    getchar();

    return op;  
}


// RELATÓRIO PRODUTOS

char menuRelatorioProdutos(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =             Gerar Relatorio de Produtos          =            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
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
    printf("  |*|            Digite o tipo de relatorio desejado ou sair:                |*|\n");  
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                [ 1 ] << Relatorio Especifico  >>                       *|*\n");
    printf("  |*|                [ 2 ] << Relatorio Geral  >>                            |*|\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                [ 0 ] << Sair >>                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\t                Digite a opcao desejada: ");
    scanf("%c", &op);  
    
    switch (op) {
              case '1':
                relatorioProdutos();
                break;
              
              case '2':
                relatGeralProdutos();
                break;
    
              case '0':
                menuRelatorioProdutos();
                break;
    }
         
  getchar();
  return op; 
   
}



void relatorioProdutos(void) { // Específico
  char* codigo;

  codigo = telaRelatorioProdutos();

  telaRelatProdutos(codigo);

  free(codigo);
}


char* telaRelatorioProdutos(void) {
    char *codigo;
    int validar;

    codigo = (char*) malloc(5*sizeof(char));

    system("clear||cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =               Relatorio Especifico               =            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
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
    printf("  |*|                 Escolha o produto para gerar relatorio:                |*|\n");
    printf("  *|*                                                                        *|*\n");
    
    
    do{
    printf("  |*|          **        Informe o codigo do produto:  ");
    scanf("%s", codigo);
    getchar();

    validar = validaCodigo(codigo); 
    if(validar == 1){
        printf("                            Codigo valido!\n");
    }else{
        printf("                            Codigo invalido!\n");
    }
  }while(validar != 1);

    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    
    printf("\t>>>           Tecle <ENTER> para continuar...          <<<\n");
    getchar();

    return codigo;

}



void telaRelatProdutos(char* codigo) {
    
    
    system("cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =          Relatorio Especifico de Produtos        =            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
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
    listProdutosPorCodigo(codigo);
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    
    printf("\t>>>           Tecle <ENTER> para continuar...          <<<\n");
    getchar();


}


void listProdutosPorCodigo(char* codigo) {
    FILE* fp;
    Produtos* prod;
    
    prod = (Produtos*) malloc(sizeof(Produtos));
    fp = fopen("produtos.dat", "rb");
    while (fread(prod, sizeof(Produtos), 1, fp)) {
        if (strcmp(prod->codigo, codigo) == 0) {

            printf("  |*|             \tNome do Produto: %s        \n", prod->nome);
            printf("  *|*             \tCodigo do Produto: %s      \n", prod->codigo);
            printf("  *|*             \tValor do Produto: %.2f      \n", prod->valor);
            printf("  |*|             \tData de Validade: %d/%d/%d \n", prod->dd, prod->mm, prod->aaaa);
        
        }
    }
    fclose(fp);
    free(prod);
}




void relatGeralProdutos(void) {

  system("clear||cls");
  printf("\n");
  printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
  printf("  *|*                                                                        *|*\n");
  printf("  |*|        ****************************************************            |*|\n");
  printf("  *|*        ****************************************************            *|*\n");
  printf("  |*|        =                                                  =            |*|\n");
  printf("  *|*        =           Relatorio Geral dos Produtos           =            *|*\n");
  printf("  |*|        =                                                  =            |*|\n");
  printf("  *|*        ****************************************************            *|*\n");
  printf("  |*|        ****************************************************            |*|\n");
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
  printf("  >>>-##--##--##--##--##--              **              --##--##--##--##--##-<<<\n");
  printf("  *|*                                                                        *|*\n");
  listaGeralProdutos();
  printf("  |*|                                                                        |*|\n");
  printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
  printf("\n");  
  printf("\n");
  printf("\t>>>           Tecle <ENTER> para continuar...          <<<\n");
  getchar();

}


void listaGeralProdutos(void) {
  FILE* fp;
  Produtos* prod;

  prod = (Produtos*) malloc(sizeof(Produtos));

  fp = fopen("produtos.dat", "rb");

  while (fread(prod, sizeof(Produtos), 1, fp)) {

    printf("\n");
    printf("  |*|             \tNome do Produto: %s        \n", prod->nome);
    printf("  *|*             \tCodigo do Produto: %s      \n", prod->codigo);
    printf("  *|*             \tValor do Produto: %.2f      \n", prod->valor);
    printf("  |*|             \tData de Validade: %d/%d/%d \n", prod->dd, prod->mm, prod->aaaa);
    printf("\n\n");
   
    }
    fclose(fp);
    free(prod);
}





// RELATÓRIO DE ENTRADAS

char menuRelatorioEntrada(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =             Gerar Relatorio de Entrada           =            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
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
    printf("  |*|            Digite o tipo de relatorio desejado ou sair:                |*|\n");  
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                [ 1 ] << Relatorio Especifico  >>                       *|*\n");
    printf("  |*|                [ 2 ] << Relatorio Geral  >>                            |*|\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                [ 0 ] << Sair >>                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\t                Digite a opcao desejada: ");
    scanf("%c", &op);  
    switch(op) {
          case '1':
            relatorioEntradas();
            break;
            
          case '2':
            relatGeralEntradas();
            break;
            
          case '0':
            menuRelatorioEntrada(); 
            break;
    }   
  getchar();
return op;
}


void relatorioEntradas(void) { //Relatorio Especifico
  char* codigo;
	codigo = telarelatorioEntradas();
    relatEntradas(codigo);
    free(codigo);
}


char* telarelatorioEntradas(void) {
  char* codigo;
  int validar;
  codigo = (char*) malloc(5*sizeof(char));
    system("clear||cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =               Relatorio Especifico               =            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
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
    printf("  >>>-##--##--##--##--##--              **              --##--##--##--##--##-<<<\n");
    printf("\n");
    printf("  >>>>>>>>                Informe o codigo da entrada:               <<<<<<<<  \n");
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
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    
    printf("\t>>>           Tecle <ENTER> para continuar...          <<<\n");
    getchar();

  return codigo;
}


void relatEntradas(char* codigo) {
  system("clear||cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =          Relatorio Especifico de Entradas        =            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
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
    printf("  >>>-##--##--##--##--##--              **              --##--##--##--##--##-<<<\n");
    printf("  *|*                                                                        *|*\n");
    listaEntradas(codigo);
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");  
    printf("\n");
    printf("\t>>>           Tecle <ENTER> para continuar...          <<<\n");
    getchar();

}


void listaEntradas(char* codigo) {
  FILE* fp;
  Entrada* ent;

  ent = (Entrada*) malloc(sizeof(Entrada));
  fp = fopen("Entrada.dat", "rb");
  while (fread(ent, sizeof(Entrada), 1, fp)) {
    if (strcmp(ent->codigo, codigo) == 0) {
            
      printf("  |*|             \tNome do Produto: %s        \n", ent->nome);
      printf("  *|*             \tCodigo do Produto: %s      \n", ent->codigo);
      printf("  |*|             \tDescricao do produto: %s   \n", ent->desc);
      printf("  *|*             \tFornecedor: %s             \n", ent->forn);
      printf("  |*|             \tQuantidade: %s             \n", ent->qtde);
      printf("  *|*             \tData da Entrada: %d/%d/%d  \n\n", ent->dd, ent->mm, ent->aaaa);
        
      }
  }
    fclose(fp);
    free(ent);
}


void relatGeralEntradas(void){
  system("clear||cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =          Relatorio geral das Entradas            =            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
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
    printf("  >>>-##--##--##--##--##--              **              --##--##--##--##--##-<<<\n");
    printf("  *|*                                                                        *|*\n");
    listaGeralEntradas();
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");  
    printf("\n");
    printf("\t>>>           Tecle <ENTER> para continuar...          <<<\n");
    getchar();
}


void listaGeralEntradas(void){
  FILE* fp;
  Entrada* ent;

  ent = (Entrada*) malloc(sizeof(Entrada));
    fp = fopen("Entrada.dat", "rb");
    while (fread(ent, sizeof(Entrada), 1, fp)) {
        
      printf("  |*|             \tNome do Produto: %s        \n", ent->nome);
      printf("  *|*             \tCodigo do Produto: %s      \n", ent->codigo);
      printf("  |*|             \tDescricao do produto: %s   \n", ent->desc);
      printf("  *|*             \tFornecedor: %s             \n", ent->forn);
      printf("  |*|             \tQuantidade: %s             \n", ent->qtde);
      printf("  *|*             \tData da Entrada: %d/%d/%d  \n\n", ent->dd, ent->mm, ent->aaaa);
   
    }
  fclose(fp);
   free(ent);
}


// RELATÓRIO DE SAIDAS
char menuRelatorioSaidas(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =             Gerar Relatorio de Saida             =            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
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
    printf("  |*|            Digite o tipo de relatorio desejado ou sair:                |*|\n");  
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                [ 1 ] << Relatorio Especifico  >>                       *|*\n");
    printf("  |*|                [ 2 ] << Relatorio Geral  >>                            |*|\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                [ 0 ] << Sair >>                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\t                Digite a opcao desejada: ");
    scanf("%c", &op);  
    switch(op) {
      case '1':
        relatorioSaidas();
        break;
            
      case '2':
        relatGeralSaidas();
        break;
            
      case '0':
        menuRelatorioSaidas(); 
        break;
    }   
  getchar();
  return op;
}



void relatorioSaidas(void){
  char* codigo;
    codigo = telarelatorioSaidas();
      relatSaidas(codigo);
      free(codigo);
}


char* telarelatorioSaidas(void){
  char* codigo;
  int validar;
  codigo = (char*) malloc(5*sizeof(char));
    system("clear||cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =                 Relatorio Saidas                 =            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
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
    printf("  >>>-##--##--##--##--##--              **              --##--##--##--##--##-<<<\n");
    printf("\n");
    printf("  >>>>>>>>                Informe o codigo da Saida:               <<<<<<<<  \n");
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
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    
    printf("\t>>>           Tecle <ENTER> para continuar...          <<<\n");
    getchar();

  return codigo;
}


void relatSaidas(char* codigo){
  system("clear||cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =                 Relatorio Saidas                 =            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
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
    printf("  >>>-##--##--##--##--##--              **              --##--##--##--##--##-<<<\n");
    printf("  *|*                                                                        *|*\n");
    listaSaidas(codigo);
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");  
    printf("\n");
    printf("\t>>>           Tecle <ENTER> para continuar...          <<<\n");
    getchar();
}


void listaSaidas(char* codigo){
  FILE* fp;
  Saida* sai;

  sai = (Saida*) malloc(sizeof(Saida));
    fp = fopen("Saida.dat", "rb");
    while (fread(sai, sizeof(Saida), 1, fp)) {
        if (strcmp(sai->codigo, codigo) == 0) {
          
            printf("  |*|             \tNome do Produto: %s        \n", sai->nome);
            printf("  *|*             \tCodigo do Produto: %s      \n", sai->codigo);
            printf("  |*|             \tDescricao do produto: %s   \n", sai->desc);
            printf("  *|*             \tFornecedor: %s             \n", sai->forn);
            printf("  |*|             \tQuantidade: %s             \n", sai->qtde);
            printf("  *|*             \tData da saida: %d/%d/%d  \n\n", sai->dd, sai->mm, sai->aaaa);
        
        }
    }
    fclose(fp);
    free(sai);
}


void relatGeralSaidas(void) {

  system("clear||cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =                 Relatorio Saidas                 =            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
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
    printf("  >>>-##--##--##--##--##--              **              --##--##--##--##--##-<<<\n");
    printf("  *|*                                                                        *|*\n");
    listaGeralSaidas();
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");  
    printf("\n");
    printf("\t>>>           Tecle <ENTER> para continuar...          <<<\n");
    getchar();
}


void listaGeralSaidas(void){
  FILE* fp;
  Saida* sai;

  sai = (Saida*) malloc(sizeof(Saida));
    fp = fopen("Saida.dat", "rb");
    while (fread(sai, sizeof(Saida), 1, fp)) {
        
      printf("  |*|             \tNome do Produto: %s        \n", sai->nome);
      printf("  *|*             \tCodigo do Produto: %s      \n", sai->codigo);
      printf("  |*|             \tDescricao do produto: %s   \n", sai->desc);
      printf("  *|*             \tFornecedor: %s             \n", sai->forn);
      printf("  |*|             \tQuantidade: %s             \n", sai->qtde);
      printf("  *|*             \tData da saida: %d/%d/%d  \n\n", sai->dd, sai->mm, sai->aaaa);
   
    }
  fclose(fp);
   free(sai);
}
