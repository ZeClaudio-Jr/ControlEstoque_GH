#include <stdio.h>          //Biblioteca padrão
#include <stdlib.h>
#include <string.h>         //Biblioteca para Strings
#include "assin.h"          //Biblioteca de Assinaturas
#include "validacao.h"      //Biblioteca para as validações
#include "produtos.h"



typedef struct produtos Produtos;

void navegacaoProduto(void) {//NAVEGAÇÃO PRINCIPAL
  int op;
  
  do {
    op = menuProdutos();
    switch (op) {
      case '9':
        system("clear||cls");
        menuPrincipal();          // Retorno para o menu principal/main
        break;


      case '1':
        system("clear||cls");
        cadastrarPrincipal();       // Entra no menu "Lançar novo produto" - Menu Produtos
        break;


      case '2':
        system("clear||cls");
        alterarPrincipal();
        break;


      case '3': 
        system("clear||cls");
        pesquisarPrincipal();
        break;


      case '4': 
        system("clear||cls");
        excluirPrincipal();
        break;

       
      default:
        printf(" \n");
        printf("                  &&    Valor digitado invalido !    &&\n");
        printf("                  Digite ENTER para tentar novamente !    \n");
        getchar();
        break;
    }
    
  } while (op != '0');

}


//SEPARAÇÃO DE MODULOS/FUNÇÕES


char menuProdutos(void) { //MENU PRINCIPAL PRODUTOS
  char op;

  system("clear||cls");
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
  scanf("%c", &op); // 'c' é para um caractere. 's' é para um conjunto de char(vetor) e não precisa do '&'.
  getchar();

  return op;
}


//SEPARAÇÃO DE MODULOS/FUNÇÕES


void cadastrarPrincipal(void) { //FUNÇÕES PARA CADASTRO
  Produtos* prod;

  prod = cadastrarProduto(); //Chama a tela de cadastro

  gravarProduto(prod);

  free(prod);
}



Produtos*  cadastrarProduto(void) {
  Produtos *prod;
  int validar;
  

  prod = (Produtos*) malloc(sizeof(Produtos)); //Criando/alocando espaço

  system("clear||cls");
  printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
  printf("  |*|                                                                        |*|\n");
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

  do{
    printf("  |*|          **        Nome do produto: ");
    scanf("%24[^\n]", prod->nome);
    getchar();
    validar = validaNome(prod->nome);
    if(validar == 1){
          printf("                       \t       * Descricao valida!\n");
    }else{
          printf("                       \t       * Descricao invalida!\n");
    }
  }while(validar != 1);

  printf("  \n");
  do{
    printf("  |*|          **        Codigo do produto: ");
    scanf("%s", prod->codigo);
    getchar();
    validar = validaCodigo(prod->codigo); 
    if(validar == 1){
        printf("                       \t       * Codigo valido!\n");
    }else{
        printf("                       \t       * Codigo invalido!\n");
    }
  }while(validar != 1);

  printf("  \n");
  do{
    printf("  |*|          **        Valor de compra/unid ('.' separador de centavos): << R$ ");
    scanf("%f", &prod->valor);
    getchar();
    validar = validaValor(prod->valor);
    if(validar == 1){
      printf("                       \t       * Valor valido!\n");
    }else{
      printf("                       \t       * Valor invalido!\n");
    }
  }while(validar != 1);

  printf("  \n");
  do{
    printf("  |*|          **        Data de validade(dd/mm/aaaa): \n\n");
    printf("  |*|          **        Digite o dia: ");
    scanf("%d", &prod->dd);
    printf("  |*|          **        Digite o mes: ");
    scanf("%d", &prod->mm);
    printf("  |*|          **        Digite o ano: ");
    scanf("%d", &prod->aaaa);
    getchar();
    validar = valiData(prod->dd, prod->mm, prod->aaaa); 
    if(validar == 1){
      printf("\n\n                         %d/%d/%d - Data valido!\n", prod->dd, prod->mm, prod->aaaa);
    }else{
      printf("\n                         Data: %d/%d/%d - Data informada IMPROPRIA!  \n                         Digite novamente.\n\n", prod->dd, prod->mm, prod->aaaa);
    }
  }while(validar != 1);

  prod->status = True;
    
  printf("  \n");
  printf("  \n");
  printf("  \n");
  printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
  printf("\n");
  printf("\t  >>>           Tecle <ENTER> para continuar...          <<<\n");
  getchar();
  return prod;

} 


//SEPARAÇÃO DE MODULOS/FUNÇÕES


void pesquisarPrincipal(void) {
	Produtos* prod;
	char* codigo;

	codigo = pesquisarProduto();//Chama a tela de pesquisa

	prod = buscarProduto(codigo);
	
  exibirProduto(prod);

	free(prod); 
	
  free(codigo);
}


char* pesquisarProduto(void) {  // OK
  char* codigo;
  int validar;
    

  codigo = (char*) malloc(5*sizeof(char));

  system("clear||cls");
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
  printf("  >>>>>>>>>>>>          Forneca a informacao necessaria           <<<<<<<<<<<<  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");

  do{
    printf("  |*|          **        Informe o codigo do produto: ");
    scanf("%s", codigo);
    getchar();
    validar = validaCodigo(codigo); 
    if(validar == 1){
      printf("\n");
      printf("                       \t       * Codigo valido!\n");
    }else{
      printf("                       \t       * Codigo invalido!\n");
    }
  }while(validar != 1);

  printf("  \n");
  printf("  \n");
  printf("  *#--##--##--##--##--                  **                 --##--##--##--##--#*\n");
  printf("\n");

  return codigo;
}


//SEPARAÇÃO DE MODULOS/FUNÇÕES


void alterarPrincipal(void) {
	Produtos* prod;
	char* codigo;

	codigo = alterarProduto();

	prod = buscarProduto(codigo);

	if (prod == NULL) {
    	printf("\n\n\n ** Produduto inexistente! **\n\n");
  } else {
		  prod = cadastrarProduto();
		  strcpy(prod->codigo, codigo);
		  
      regravarProduto(prod);
      
      free(prod);
  }
	free(codigo);
}

 
char* alterarProduto(void) { //FUNÇÕES PARA ATUALIZAÇÃO
  char* codigo;
  int validar;
  

  codigo = (char*) malloc(5*sizeof(char));
  
  system("clear||cls");
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
  printf("  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");
  printf("  >>>>>>>>>>>>     Forneca novas informacoes sobre o produto:    <<<<<<<<<<<<  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");

  do{
    printf("  |*|          **        Informe o codigo do produto: ");
    scanf("%s", codigo);
    getchar();
    validar = validaCodigo(codigo); 
    if(validar == 1){
        printf("                       \t       * Codigo valido!\n");
    }else{
        printf("                       \t       * Codigo invalido!\n");
    }
  }while(validar != 1);

  printf("  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");
  printf("                                                                                \n");
  printf("\n");
  printf("\t  >>>           Tecle <ENTER> para continuar...          <<<\n");
  getchar();
  return codigo;

}    


//SEPARAÇÃO DE MODULOS/FUNÇÕES


void excluirPrincipal(void) {
	Produtos* prod;
	char *codigo;

	codigo = excluirProduto();
	
  prod = (Produtos*) malloc(sizeof(Produtos));

	prod = buscarProduto(codigo);
	
  if (prod == NULL) {
    	printf("\n\n     ** Produto inexistente ** !\n\n");
  } else {
		  prod->status = False;
		  regravarProduto(prod);
		  free(prod);
	}
	free(codigo);
}


char* excluirProduto(void) { //FUNÇÕES PARA EXCLUSÃO
  char *codigo;
  int validar;


  codigo = (char*) malloc(5*sizeof(char));

  system("clear||cls");
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
  printf("  >>>>>>>>>>>>          Forneca a informacao necessaria           <<<<<<<<<<<<  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");
  
  do{
    printf("  |*|          **        Informe o codigo do produto: ");
    scanf("%s", codigo);
    getchar();
    validar = validaCodigo(codigo); 
    if(validar == 1){
        printf("                       \t       * Codigo valido!\n");
    }else{
        printf("                       \t       * Codigo invalido!\n");
    }
  }while(validar != 1);

  printf("  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");
  printf("\t  >>>           Tecle <ENTER> para continuar...          <<<\n");
  getchar();
  return codigo;

}



//SEPARAÇÃO DE MODULOS/FUNÇÕES  OK


void gravarProduto(Produtos* prod) { //FUNÇÃO GRAVAR PRODUTOS
  FILE* fp; //Criar endereço do arquivo

  fp = fopen("produtos.dat", "ab"); //Abrir o arquivo para gravação ("ab" significa: ALTERAR(APPEND) e BINÁRIO(BINARY))

  if (fp == NULL) { //
    printf("Nao foi possivel abrir o arquivo!\n");
    printf("Fechamento automatico\n");
    exit(1);
  }
  fwrite(prod, sizeof(Produtos), 1, fp); //Se consiguir abrir o arq, a função vai escrever(fwrite)
  // printf("Gravacao efetivada com sucesso !!");
  
  fclose(fp);
}



//SEPARAÇÃO DE MODULOS/FUNÇÕES  OK


Produtos* buscarProduto(char* codigo) {
  FILE* fp;
  Produtos* prod;

  prod = (Produtos*) malloc(sizeof(Produtos));
  
  fp = fopen("produtos.dat", "rb");
  
  if (fp == NULL) {
    printf("      O arquivo nao foi encontrado!\n");
    printf("  A sequencia do programa sera interrompida!\n");
    exit(1);
  }
  
  while(fread(prod, sizeof(Produtos), 1, fp) == 1) {
    if ((strcmp(prod->codigo, codigo) == 0) && (prod->status == True)) {
    // if (strcmp(prod->codigo, codigo) == 0) {
      fclose(fp);
      return prod;
    }
  }
  fclose(fp);
  return NULL;
}



//SEPARAÇÃO DE MODULOS/FUNÇÕES  OK


void exibirProduto(Produtos* prod) {

  if (prod == NULL) {
    printf("                           ## Produto nao cadastrado! ##\n\n");
  } else {
    printf("                      ** Descricao do produto cadastrado **\n\n");
    printf("                         >> Nome: %s\n", prod->nome);
    printf("                         >> Codigo: %s\n", prod->codigo);
    printf("                         >> Valor: %.2f\n", prod->valor);
    printf("                         >> Data de validade: %d/%d/%d\n", prod->dd, prod->mm, prod->aaaa);
  }
  printf("\n                           Aperte ENTER para continuar.\n");
  getchar();
  //   if (prod->status == 'c') {
  //     strcpy(situacao, "CADASTRADO")
  //   } else if (prod->status == 'sc') {
  //     strcpy(situacao, "NAO CADASTRADO");
  //   } else {
  //     strcpy(situacao, "Sem informacao");
  //   }
  //   printf("Status do produto: %s\n", situacao);
  // } 
}



//SEPARAÇÃO DE MODULOS/FUNÇÕES  OK


void regravarProduto(Produtos* prod) {
  int encontrado;
	FILE* fp;
  Produtos* prodSim;

	prodSim = (Produtos*) malloc(sizeof(Produtos));

	fp = fopen("produtos.dat", "r+b");
	
  if (fp == NULL) {
    printf("    O arquivo nao pode ser aberto corretamente!\n");
    printf("    A sequencia do programa sera interrompida!\n");
    exit(1);
  }
	// while(!feof(fp)) {
	encontrado = False;
	while (fread(prodSim, sizeof(Produtos), 1, fp) && !encontrado) {
    //fread(prodsim, sizeof(Produtos), 1, fp);
		if (strcmp(prodSim->codigo, prod->codigo) == 0) {
      encontrado = True;
      fseek(fp, -1*sizeof(Produtos), SEEK_CUR);
     	fwrite(prod, sizeof(Produtos), 1, fp);
			//break;
		}
  }
  fclose(fp);
  free(prodSim);
}
