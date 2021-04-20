#include <stdio.h>          //Biblioteca padrão
#include <stdlib.h>
#include <string.h>         //Biblioteca para Strings
#include "assin.h"          //Biblioteca de Assinaturas
#include "validacao.h"      //Biblioteca para as validações

typedef struct produtos Produtos;

void navegacaoProduto(void) {//NAVEGAÇÃO PRINCIPAL
  int op;
  
  do {
    op = menuProdutos();
    switch (op) {
      case '0':
        system("clear||cls");
        menuPrincipal();          // Retorno para o menu principal/main
        break;


      case '1':
        system("clear||cls");
        cadastrarPrincipal();       // Entra no menu "Lançar novo produto" - Menu Produtos
        /*
        switch (op) {
          case '0':
            system("clear||cls");
            menuProdutos();       // Salva e retorna para o menu principal/primária da navegação PRODUTOS - Menu Produtos
            break;
          case '1':
            system("clear||cls");
            menuPrincipal();      // Salva e retorna para o menu principal/main
            break;
        }
        */
        break;

      case '2':
        system("clear||cls");
        alterarPrincipal();
        /*
        switch (op) {	
          case '0':
            system("clear||cls");
            menuProdutos();       // Salva e retorna para o menu principal/primária da navegação PRODUTOS - Menu Produtos
            break;
          case '1':
            system("clear||cls");
            menuPrincipal();      // Salva e retorna para o menu principal/main
            break;
        }
        */
        break;


      case '3': 
        system("clear||cls");
        pesquisarPrincipal();
        /*
        switch (op) {
          case '0':
            system("clear||cls");
            menuProdutos();       // Retorna para o menu principal/primária da navegação PRODUTOS - Menu Produtos
            break;
          case '1':
            system("clear||cls");
            menuPrincipal();      // Salva e retorna para o menu principal/main
            break;
        } 
        */
        break;


      case '4': 
        system("clear||cls");
        // excluirPrincipal();
        deletarPrincipal();
        /*
        switch (op) {
          case '0':
            system("clear||cls");
            menuProdutos();       // Retorna para o menu principal/primária da navegação PRODUTOS - Menu Produtos
            break;
          case '1':
            system("clear||cls");
            menuPrincipal();      // Salva e retorna para o menu principal/main
            break;
        } 
        */
        break;
    
    	/*
      default:
        printf("        Valor digitado invalido \n");
        */
    } 
   // op = menuProdutos();

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
  printf(" Escolha sua opcao: ");
  scanf(" %c", &op);
  // getchar();

  return op;
  
}


//SEPARAÇÃO DE MODULOS/FUNÇÕES


void cadastrarPrincipal(void) { //FUNÇÕES PARA CADASTRO
  Produtos *prod;

  prod = cadastrarProduto(); //Chama a tela de cadastro

  gravarProduto(prod);

  free(prod);
}



Produtos*  cadastrarProduto(void) {
  Produtos *prod;
  int validar;
  

  prod = (Produtos*) malloc(sizeof(Produtos)); //Criando espaço

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
    scanf(" %s", prod->nome);
    //getchar();
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
    scanf(" %s", prod->codigo);
    //getchar();
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
    scanf("%f.2", &prod->valor);
    //getchar();
    validar = validaValor(prod->valor);
    if(validar == 1){
      printf("                         Valor valido!\n");
    }else{
      printf("                         Valor invalido!\n");
    }
  }while(validar != 1);

  printf("  \n");
  do{
    printf("  |*|          **        Data de validade(dd/mm/aaaa): \n");
    // scanf("%d/%d/%d", &prod->dd, &prod->mm, &prod->aaaa);
    printf("  |*|          **        Digite o dia: ");
    scanf("%d", &prod->dd);
    printf("  |*|          **        Digite o mes: ");
    scanf("%d", &prod->mm);
    printf("  |*|          **        Digite o ano: ");
    scanf("%d", &prod->aaaa);
    //getchar();
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
  getchar();
  return prod;

} 


//SEPARAÇÃO DE MODULOS/FUNÇÕES


void pesquisarPrincipal(void) {
	Produtos* prod;
	char* codigo;

	codigo = pesquisarProduto();//Chama a tela de pesquisa

	prod = buscarProduto(codigo);

   if(prod->status == '1') {
   
  	exibirProduto(prod);
  	
  	free(prod); 
	
  free(codigo);

  }
  
  else if(prod->status == '0'){
  	
  	printf("O produto pesquisado estava cadastrado, mas foi deletado. Ent�o ele n�o ser� exibido.");
  	getchar();
  	getchar();
  
  } else {
  	printf("Produto inexistente no sistema.");
  	getchar();
  	getchar();
  }
  
   free(prod); 
	
  free(codigo);

  
}


//void pesquisarProduto(struct produtos p) {
char* pesquisarProduto(void) {
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
  printf("  >>>>>>>>>>>>            Informe o codigo do produto:            <<<<<<<<<<<<  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");

  do{
    printf("  |*|          **        Informe o codigo do produto: ");
    scanf(" %s", codigo);
    //getchar();
    validar = validaCodigo(codigo); 
    if(validar == 1){
        printf("                         Codigo valido!\n");
    }else{
        printf("                         Codigo invalido!\n");
    }
  }while(validar != 1);

  // printf("  \n");
  // printf("  \n");
  // printf("  \n");
  // printf("  \n");
  // printf("                                                                                \n");
  // printf("                      [ 0 ] << Voltar ao menu anterior >>                       \n");
  // printf("                      [ 1 ] << Sair >>                                          \n");
  // printf("  \n");
  // printf("  \n");
  // printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
  // printf("\n");
  return codigo;
  
}


//SEPARAÇÃO DE MODULOS/FUNÇÕES


void alterarPrincipal(void) {
	Produtos* prod;
	char* codigo;

	codigo = alterarProduto();

	prod = buscarProduto(codigo);

	if (prod == NULL) {
    	printf("\n\n ** Produduto inexistente! **\n\n");
  } else {
		  prod = cadastrarProduto();
		  strcpy(prod->codigo, codigo);
		  regravarProduto(prod);
		  // Outra opção:
		  // excluirAluno(codigo);
		  // gravarProduto(prod);
		  free(prod);
  }
	free(codigo);
}

///////////////////////////////////////

void deletarPrincipal(void) {
	
	Produtos* prod;
	char* codigo;

	codigo = excluirProduto();

	prod = buscarProduto(codigo);

	if (prod == NULL) {
		
    	printf("\n\n ** Produduto inexistente! **\n\n");
    	
  } else {

		  strcpy(prod->codigo, codigo);
		  deletarProduto(prod);
		  // Outra opção:
		  // excluirAluno(codigo);
		  // gravarProduto(prod);
		  free(prod);
  }
	free(codigo);
}

/////////////////////////////////////////
 
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
  printf("  \n");

  do{
    printf("  |*|          **        Informe o codigo do produto: ");
    scanf(" %s", codigo);
    //getchar();
    validar = validaCodigo(codigo); 
    if(validar == 1){
        printf("                         Codigo valido!\n");
        return codigo;
    }else{
        printf("                         Codigo invalido!\n");
    }
  }while(validar != 1);

	/*
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
  getchar();
  */
  

}    


//SEPARAÇÃO DE MODULOS/FUNÇÕES


void excluirPrincipal(void) {
	
	Produtos* prod;
	
	char *codigo;

	codigo = excluirProduto();
	
    prod = (Produtos*) malloc(sizeof(Produtos));

	prod = buscarProduto(codigo);
	
  if (prod == NULL) {
    	printf("\n\n ** Produto inexistente ** !\n\n");
    	getchar();
    	getchar();
  } else {
		  // prod->status = '0';
		  deletarProduto(prod);
	}
	free(codigo);
	free(prod);
}



//void excluirProduto(struct produtos* p) {}
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
  printf("  >>>>>>>>>>>>            Informe o codigo do produto:            <<<<<<<<<<<<  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");
  printf("  \n");
  
  do{
    printf("  |*|          **        Informe o codigo do produto: ");
    scanf(" %s", codigo);
    // getchar();
    validar = validaCodigo(codigo); 
    if(validar == 1){
        printf("                         Codigo valido!\n");
        return codigo;
    }else{
        printf("                         Codigo invalido!\n");
    }
  }while(validar != 1);

/*
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
  getchar();
  */
  return codigo;

}



//SEPARAÇÃO DE MODULOS/FUNÇÕES


void gravarProduto(Produtos* prod) { //FUNÇÃO GRAVAR PRODUTOS
  FILE* fp; //Criar endereço do arquivo
  
  prod->status = '1';

  fp = fopen("produtos.dat", "ab"); //Abrir o arquivo para gravação ("ab" significa: ALTERAR(APPEND) e BINÁRIO(BINARY))

  if (fp == NULL) { //
    printf("Nao foi possivel guardar o arquivo!\n");
    printf("Fechamento automatico\n");
    exit(1);
  }
  fwrite(prod, sizeof(Produtos), 1, fp); //Se consiguir abrir o arq, a função vai escrever(fwrite)
  // printf("Gravacao efetivada com sucesso !!");
  
  fclose(fp);
}



//SEPARAÇÃO DE MODULOS/FUNÇÕES


Produtos* buscarProduto(char* codigo) {
  FILE* fp;
  Produtos* prod;

  prod = (Produtos*) malloc(sizeof(Produtos));
  
  fp = fopen("produtos.dat", "rb");
  
  if (fp == NULL) {
    printf("O arquivo nao pode ser aberto corretamente!\n");
    printf("A sequencia do programa sera interrompida!\n");
    exit(1);
  }
  
  while(fread(prod, sizeof(Produtos), 1, fp) == 1) {
    //if ((strcmp(prod->codigo, codigo) == 0) && (prod->status == True)) {
    if (strcmp(prod->codigo, codigo) == 0) {
      fclose(fp);
      return prod;
    } 
	
  }
  fclose(fp);
  return NULL;
}



//SEPARAÇÃO DE MODULOS/FUNÇÕES


void exibirProduto(Produtos* prod) {

  if (prod == NULL) {
    printf(" ## Produto nao cadastrado! ##\n\n");
  } else {
    printf("** Descricao do produto já cadastrado **\n\n");
    printf("  >> Nome: %s\n", prod->nome);
    printf("  >> Codigo: %s\n", prod->codigo);
    printf("  >> Valor: %f\n", prod->valor);
    printf("  >> Data de validade: %d/%d/%d\n", prod->dd, prod->mm, prod->aaaa);
  }
  printf("Aperte ENTER para continuar.\n");
  getchar();
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

void deletarProduto(Produtos* prod) {
  int encontrado;
	FILE* fp;
  // Produtos* prodSim;

	// prodSim = (Produtos*) malloc(sizeof(Produtos));
	
	prod = (Produtos*) malloc(sizeof(Produtos));

	fp = fopen("produtos.dat", "r+b");
	
	
	
  if (fp == NULL) {
    printf("O arquivo nao pode ser aberto corretamente!\n");
    printf("A sequencia do programa sera interrompida!\n");
    exit(1);
  }
	// while(!feof(fp)) {
	encontrado = 0;
	while ((!encontrado) && fread(prod, sizeof(Produtos), 1, fp) && !encontrado) {
    //fread(prodsim, sizeof(Produtos), 1, fp);
		if (strcmp(prod->codigo, prod->codigo) == 0 && (prod->status='1')) {
      encontrado = 1;
      
      if(encontrado) {
      	
	  prod->status = '0';
      fseek(fp, -1*sizeof(Produtos), SEEK_CUR);
      
     	fwrite(prod, sizeof(Produtos), 1, fp);
			//break;
			printf("\nProduto removido com sucesso!\n");
			
		}
	}
}
	
    fclose(fp);
    free(prod);
    printf("\n Tecle ENTER para continuar.\n");
    getchar();
    getchar();
  }

//SEPARAÇÃO DE MODULOS/FUNÇÕES


void regravarProduto(Produtos* prod) {
  int encontrado;
	FILE* fp;
  Produtos* prodSim;

	prodSim = (Produtos*) malloc(sizeof(Produtos));

	fp = fopen("produtos.dat", "r+b");
	
  if (fp == NULL) {
    printf("O arquivo nao pode ser aberto corretamente!\n");
    printf("A sequencia do programa sera interrompida!\n");
    exit(1);
  }
	// while(!feof(fp)) {
	encontrado = False;
	while (fread(prodSim, sizeof(Produtos), 1, fp) && !encontrado) {
    //fread(prodsim, sizeof(Produtos), 1, fp);
		if (strcmp(prodSim->codigo, prod->codigo) == 0) {
      encontrado = True;
      fseek(fp, -1*sizeof(Produtos), SEEK_CUR);
      prod->status = '1';
     	fwrite(prod, sizeof(Produtos), 1, fp);
			//break;
		}
    fclose(fp);
    free(prodSim);
  }
}
//void cadastrarProduto(struct produtos*);
//void alterarProduto(struct produtos*);
//void pesquisarProduto(struct produtos);
//void excluirProduto(struct produtos*);
