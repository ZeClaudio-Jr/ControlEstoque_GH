#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assin.h"


//MÓDULO RELATÓRIOS

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
