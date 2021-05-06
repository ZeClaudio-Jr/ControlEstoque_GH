///////////////////////////////////////////////////////////////////////////////
///             UFRN - Universidade Federal do Rio Grande do Norte          ///
///                 Centro de Ensino Superior do Serido - Caico             ///
///               Departamento de Computacao e Tecnologia                   ///
///                  Disciplina DCT1106 * Programação                       ///
///              SIG-Inventory: Sistema de Controle de Estoque              ///
///         Developed by: Annielly Ferreira de Sousa - Jan, 2021, and       ///
///                       Jose Claudio de Araujo Junior - Jan, 2021         ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assin.h"
#include "moduloProdutos.h"
#include "moduloEntrada.h"
#include "moduloSaida.h"
#include "moduloRelatorios.h"


/// Programa Principal <main>

int main(void) {
  char opcao;
  system("clear||cls");
  do {
    opcao = menuPrincipal();            
    switch (opcao) {
      case '1': 
          menuSobre();
          break;
      case '2': 
          navegacaoProduto();
          break;
      case '3': 
          navegacaoEntrada(); 
          break;
      case '4': 
          navegacaoSaida();
          break;
      case '5': 
          navegacaoRelatorio();
          break;
      default:
          printf("\n                 *     Valor digitado invalido.     *\n");
          printf("              *     Tecle ENTER e tente novamente.     * \n");
          getchar();
    } 
  }while (opcao != '0');
  return 0; 
}
            

char menuPrincipal(void) {
  char op;
  
  system("clear||cls");
  printf("\n");
  printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
  printf("  *|*                                                                        *|*\n");
  printf("  |*|          ==       ==   ========   ==    ==   ==     ==                 |*|\n");
  printf("  *|*          ===     ===   ==         ===   ==   ==     ==                 *|*\n");
  printf("  |*|          == == == ==   =====      == == ==   ==     ==                 |*|\n");
  printf("  *|*          ==  ===  ==   ==         ==   ===   ==     ==                 *|*\n");
  printf("  |*|          ==       ==   ========   ==    ==   =========  PRINCIPAL      |*|\n");
  printf("  *|*                                                                        *|*\n");
  printf("  |*|                                                                        |*|\n");
  printf("  *|*          Developed by Jose Claudio de Araujo Junior,                   *|*\n");
  printf("  |*|                       Annielly Ferreira de Sousa .                     |*|\n");
  printf("  *|*                                                                        *|*\n");
  printf("  |*|                                                                        |*|\n");
  printf("  *|*                                                                        *|*\n");
  printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
  printf("  *|*===================================**===================================*|*\n");
  printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
  printf("  *|*                                                                        *|*\n");
  printf("  |*|                                                                        |*|\n");
  printf("  *|*                                                                        *|*\n");
  printf("  |*|                VEJA AS OPCOES E DIGITE SUA ESCOLHA:                    |*|\n");
  printf("  *|*                                                                        *|*\n");
  printf("  |*|                                                                        |*|\n");
  printf("  *|*                                                                        *|*\n");
  printf("  |*|                                                                        |*|\n");
  printf("  *|*                                                                        *|*\n");
  printf("  |*|              [ 1 ] << Saiba mais sobre nosso projeto >>                |*|\n");
  printf("  *|*              [ 2 ] << Produtos >>                                      *|*\n");
  printf("  |*|              [ 3 ] << Entrada de produtos >>                           |*|\n");
  printf("  *|*              [ 4 ] << Saida de produtos >>                             *|*\n");
  printf("  |*|              [ 5 ] << Gerar relatorio >>                               |*|\n");
  printf("  *|*                                                                        *|*\n");
  printf("  *|*                                                                        *|*\n");
  printf("  |*|                                                                        |*|\n");
  printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
  printf("\n");
  printf("                         Escolha sua opcao:   ");
  scanf("%c", &op);
  getchar();

  return op;
}
