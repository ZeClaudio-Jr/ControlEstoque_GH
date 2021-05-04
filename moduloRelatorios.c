#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validacao.h"
#include "assin.h"


void navegacaoRelatorio(void) {
 
  char op;
  do {
    op = menuRelatorio();         
    switch (op) {
      case '1': 
        relatorioEspecifico();         
        break;

      case '2': 
        relatorioEntradas();      
        break;
   
      case '9': 
        menuPrincipal();
        break;

      default:
        printf("             Valor digitado invalido. \n");
        printf("   Tente digitar um numero correto para uma das opcoes. \n");
        getchar();
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
    printf("  *|*                [ 1 ] << Relatorio de produtos >>                       *|*\n");
    printf("  |*|                [ 2 ] << Relatorio de Entradas >>                       |*|\n");
    printf("  |*|                [ 3 ] << Relatorio de Saidas >>                         |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                [ 9 ] << Sair >>                                        |*|\n");
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
    
    printf("\t>>>           Tecle <ENTER> para continuar...          <<<\n");
    getchar();


}


// RELATÓRIO DE ENTRADAS
void relatorioEntradas(void) {
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
    printf("  *|*        =                 Relatorio Entradas               =            *|*\n");
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
    printf("  *|*        =                 Relatorio Entradas               =            *|*\n");
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
    char nomeTrunc[26];
    int tam;

    ent = (Entrada*) malloc(sizeof(Entrada));
    fp = fopen("Entrada.dat", "rb");
    while (fread(ent, sizeof(Entrada), 1, fp)) {
        if (strcmp(ent->codigo, codigo) == 0) {
            tam = strlen(ent->nome);
            strncpy(nomeTrunc, ent->nome, tam);
            for (int i = tam; i < 25; i++) {
                nomeTrunc[i] = ' ';
            }
            nomeTrunc[25] = '\0';
            printf("  |*|  \tNome do Produto: %s        \n", ent->nome);
            printf("  *|*  \tCodigo do Produto: %s      \n", ent->codigo);
            printf("  |*|  \tDescricao do produto: %s   \n", ent->desc);
            printf("  *|*  \tFornecedor: %s             \n", ent->forn);
            printf("  |*|  \tQuantidade: %s             \n", ent->qtde);
            printf("  *|*  \tData da Entrada: %d/%d/%d  \n", ent->dd, ent->mm, ent->aaaa);
        
        }
    }
    fclose(fp);
    free(ent);
}
