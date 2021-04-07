#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validacao.h"
#include "assin.h"


//MÓDULO RELATÓRIOS
void relatorioEspecifico(void);
void relatorioGeral(void);

void navegacaoRelatorio(void) {
 
  char op;
  do {
    op = menuRelatorio();         
    switch (op) {
      case '1': 
        relatorioEspecifico();         
        break;
//-----------------------------------------------------------------------------------------\\
//-----------------------------------------------------------------------------------------//
      case '2': 
        relatorioGeral();       // Entra no menu "Lançar novo produto" - Menu Produtos
        break;
//-----------------------------------------------------------------------------------------\\
//-----------------------------------------------------------------------------------------//        
      case '0': 
        menuPrincipal();
        break;
//-----------------------------------------------------------------------------------------\\
//-----------------------------------------------------------------------------------------//
      default:
        printf("        Valor digitado invalido. \n");
        break;
    } 

  }while (op != '0'); 
}


char menuRelatorio(void) {
    char op;

    system("cls");
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
    printf("  *|*                [ 1 ] << Relatorio de produto especifico >>             *|*\n");
    printf("  |*|                [ 2 ] << Relatorio Geral >>                             |*|\n");
    printf("  *|*                [ 0 ] << Sair >>                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    scanf("%c", &op);  
    getchar();

  return op;  
}


// RELATÓRIO Específico

void relatorioEspecifico(void) {
    char nome[25];
    int validar;

    system("cls");
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
      printf("  |*|          **        Nome do produto: ");
      scanf("%s", nome);
      getchar();
      validar = validaNome(nome);
      if(validar == 1){
            printf("  |*|          **        Poduto encontrado!\n");
      }else{
            printf("  |*|          **        Produto Inexistente!\n");
      }
    }while(validar != 1);
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("      >>    NOME:                                                   \n");
    printf("      >>    CODIGO:                                                 \n");
    printf("      >>    DESCRICAO:                                              \n");
    printf("      >>    FORNECEDOR:                                             \n");
    printf("      >>    ENTRADA:                                                \n");
    printf("      >>    SAIDA:                                                  \n");
    printf("      >>    DATA COMPRA:                                            \n");
    printf("      >>    DATA VALIDADE:                                          \n");
    printf("      >>    ESTOQUE:                                                \n"); 
    printf("\n");
    printf("\n");
    
    printf("\t>>>           Tecle <ENTER> para continuar...\n");
    getchar();


}


// RELATÓRIO Geral

void relatorioGeral(void) {
    char nome[25];
    int validar;

    system("cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =                 Relatorio Geral                  =            *|*\n");
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
    printf("\n");
    printf("\n");
    printf("      >>    NOME:                                                   \n");
    printf("      >>    CODIGO:                                                 \n");
    printf("      >>    DESCRICAO:                                              \n");
    printf("      >>    FORNECEDOR:                                             \n");
    printf("      >>    ENTRADA:                                                \n");
    printf("      >>    SAIDA:                                                  \n");
    printf("      >>    DATA COMPRA:                                            \n");
    printf("      >>    DATA VALIDADE:                                          \n");
    printf("      >>    ESTOQUE:                                                \n"); 
    printf("\n");
    printf("\n");
    printf("\t>>>           Tecle <ENTER> para continuar...\n");
    getchar();
    
}
