#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validacao.h"
#include "assin.h"
#include "produtos.h"
#include "entrada.h"
#include "saida.h"
#include "relatorios.h"


void navegacaoRelatorio(void) {
 
  char op;
  do {
    op = menuRelatorio();         
    switch (op) {
      case '1': 
        relatorioProdutos();         
        break;

      case '2': 
        relatorioEntradas();      
        break;
   
      case '3': 
        relatorioSaidas();      
        break;

      // case '4': 
      //   relatorioGeral();      
      //   break;

      // case '9': 
      //   menuPrincipal();
      //   break;

      // default:
      //   // printf("             Valor digitado invalido. \n");
        // printf("   Tente digitar um numero correto para uma das opcoes. \n");
        // getchar();
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
    printf("  *|*                [ 3 ] << Relatorio de Saidas >>                         *|*\n");
    printf("  |*|                [ 4 ] << Relatorio Geral >>                             |*|\n");
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


// RELATÓRIO Específico

void relatorioProdutos(void) {
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
    printf("  *|*        =                 Relatorio Produtos               =            *|*\n");
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
    char nomeTrunc[26];
    int tam;

    prod = (Produtos*) malloc(sizeof(Produtos));
    fp = fopen("produtos.dat", "rb");
    while (fread(prod, sizeof(Produtos), 1, fp)) {
        if (strcmp(prod->codigo, codigo) == 0) {
            tam = strlen(prod->nome);
            strncpy(nomeTrunc, prod->nome, tam);
            for (int i = tam; i < 25; i++) {
                nomeTrunc[i] = ' ';
            }
            nomeTrunc[25] = '\0';
            printf("  |*|             \tNome do Produto: %s        \n", prod->nome);
            printf("  *|*             \tCodigo do Produto: %s      \n", prod->codigo);
            printf("  *|*             \tValor do Produto: %f      \n", prod->valor);
            printf("  |*|             \tData de Validade: %d/%d/%d \n", prod->dd, prod->mm, prod->aaaa);
        
        }
    }
    fclose(fp);
    free(prod);
}



// void listProdutosPorCodigo(char* codigo) {
//     FILE* fp;
//     Produtos* prod;
//     char codigoTrunc[4];
//     int tam;

//     prod = (Produtos*) malloc(sizeof(Produtos));
//     fp = fopen("produtos.dat", "rb");
//     while (fread(prod, sizeof(Produtos), 1, fp)) {
//         if (strcmp(prod->codigo, codigo) == 0) {
//             tam = strlen(prod->nome);
//             strncpy(codigoTrunc, prod->nome, tam);
//             for (int i = tam; i < 25; i++) {
//                 codigoTrunc[i] = ' ';
//             }
//             codigoTrunc[25] = '\0';
//             printf("///           ||     %-3s     || %-26s ||             ///\n", prod->codigo, codigoTrunc);
//         }
//     }
//     fclose(fp);
//     free(prod);
// }


// // RELATÓRIO Geral



// void listGeralProdutos(char* codigo) {
//     FILE* fp;
//     Produtos* prod;
//     char codigoTrunc[4];
//     int tam;

//     prod = (Produtos*) malloc(sizeof(Produtos));
//     fp = fopen("produtos.dat", "rb");
//     while (fread(prod, sizeof(Produtos), 1, fp)) {
//         // if (strcmp(prod->codigo, codigo) == 0) {
//         //     tam = strlen(prod->nome);
//         //     strncpy(codigoTrunc, prod->nome, tam);
//         //     for (int i = tam; i < 25; i++) {
//         //         codigoTrunc[i] = ' ';
//         //     }
//         //     codigoTrunc[25] = '\0';
//         //     printf("///           ||     %-3s     || %-26s ||             ///\n", prod->codigo, codigoTrunc);
//         // }
//     }
//     fclose(fp);
//     free(prod);
// }

// void relatorioGeral(void) {
//     char nome[25];
//     int validar;

//     system("cls");
//     printf("\n");
//     printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
//     printf("  *|*                                                                        *|*\n");
//     printf("  |*|        ****************************************************            |*|\n");
//     printf("  *|*        ****************************************************            *|*\n");
//     printf("  |*|        =                                                  =            |*|\n");
//     printf("  *|*        =                 Relatorio Geral                  =            *|*\n");
//     printf("  |*|        =                                                  =            |*|\n");
//     printf("  *|*        ****************************************************            *|*\n");
//     printf("  |*|        ****************************************************            |*|\n");
//     printf("  *|*                                                                        *|*\n");
//     printf("  |*|                                                                        |*|\n");
//     printf("  *|*                                                                        *|*\n");
//     printf("  |*|                                                                        |*|\n");
//     printf("  *|*                                                                        *|*\n");
//     printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
//     printf("  *|*===================================**===================================*|*\n");
//     printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
//     printf("  *|*                                                                        *|*\n");
//     printf("  |*|                                                                        |*|\n");
//     printf("  >>>-##--##--##--##--##--              **              --##--##--##--##--##-<<<\n");
//     printf("\n");
//     printf("\n");
//     printf("\n");
//     listGeralProdutos();
//     printf("\n");
//     printf("\n");
//     printf("\t>>>           Tecle <ENTER> para continuar...          <<<\n");
//     getchar();
    
// }



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


// RELATÓRIO DE SAIDAS
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
    Saida* Sai;
    char nomeTrunc[26];
    int tam;

    Sai = (Saida*) malloc(sizeof(Saida));
    fp = fopen("Saida.dat", "rb");
    while (fread(Sai, sizeof(Saida), 1, fp)) {
        if (strcmp(Sai->codigo, codigo) == 0) {
            tam = strlen(Sai->nome);
            strncpy(nomeTrunc, Sai->nome, tam);
            for (int i = tam; i < 25; i++) {
                nomeTrunc[i] = ' ';
            }
            nomeTrunc[25] = '\0';
            printf("  |*|  \tNome do Produto: %s        \n", Sai->nome);
            printf("  *|*  \tCodigo do Produto: %s      \n", Sai->codigo);
            printf("  |*|  \tDescricao do produto: %s   \n", Sai->desc);
            printf("  *|*  \tFornecedor: %s             \n", Sai->forn);
            printf("  |*|  \tQuantidade: %s             \n", Sai->qtde);
            printf("  *|*  \tData da Saida: %d/%d/%d  \n", Sai->dd, Sai->mm, Sai->aaaa);
        
        }
    }
    fclose(fp);
    free(Sai);
}
