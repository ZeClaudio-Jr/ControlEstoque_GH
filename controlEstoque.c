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

//* Assinatura das funções
char menuPrincipal(void);
void menuSobre(void);
char menuProdutos(void);            
char menuEntrada(void);      
char menuSaida(void);
void menuRelatorio(void); 
  


//MODULO PRODUTO
char navegacaoProduto(void); //logico
void cadastrarProduto(void);
void alterarProduto(void);
void pesquisarProduto(void);
void excluirProduto(void);


//MODULO ENTRADA
void navegacaoEntrada(void);
void cadastEntrada(void);
void alterarEntrada(void);
void consultarEntrada(void);
void excluirEntrada(void);

//MODULO SAIDA
void cadastSaida(void);
void alterarSaida(void);
void consultarSaida(void);
void excluirSaida(void);

// MODULO RELATÓRIO
void gerarRelatorio (void);


/// Programa Principal <main>

int main(void) {
    
    char opcao;
    do {
        opcao = menuPrincipal();             
        switch (opcao) {
            case '1': 
                menuSobre();
                break;
            case '2': 
                menuProdutos();
                break;
            case '3': 
                menuEntrada(); 
                break;
            case '4': 
                menuSaida();
                break;
            case '5': 
                menuRelatorio();
                break;
            default:
                printf("Valor invalido \n");
        } 
    }while (opcao != '0');

    return 0; 
}
            

char menuPrincipal(void) {
    char op;

    system("cls");
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
    printf("  *|*           Developed by Jose Claudio de Araujo Junior                   *|*\n");
    printf("  |*|                        Annielly Ferreira de Sousa                      |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
    printf("  *|*===================================**===================================*|*\n");
    printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                 VEJA AS OPCAO E DIGITE SUA ESCOLHA                     |*|\n");
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
    printf("  |*|                   Escolha sua opcao:                                   |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    scanf("%c", &op);
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

    return op;
}


void menuSobre(void) {

    printf("\n");
    printf("           Bem vindo ao seu programa de Controle de Estoque SIG-UFRN\n");
    printf("\n");
    printf("  ///////////////////////////////////////////////////////////////////////////////\n");
    printf("  /*****************************************************************************/\n");
    printf("  /*/                                                                         /*/\n");
    printf("  /*/          UFRN - Universidade Federal do Rio Grande do Norte             /*/\n");
    printf("  /*/             Centro de Ensino Superior do Serido - Caico                 /*/\n");
    printf("  /*/               Departamento de Computacao e Tecnologia                   /*/\n");
    printf("  /*/                   Disciplina DCT1106 * Programacao                      /*/\n");
    printf("  /*/             SIG-Inventory: Sistema de Controle de Estoque               /*/\n");
    printf("  /*/       Developed by: Annielly Ferreira de Sousa - Jan, 2021, and         /*/\n");
    printf("  /*/                     Jose Claudio de Araujo Junior - Jan, 2021           /*/\n");
    printf("  /*/                                                                         /*/\n");
    printf("  /*****************************************************************************/\n");
    printf("  ///////////////////////////////////////////////////////////////////////////////\n");
    printf("  //===========================================================================//\n");
    printf("  //=                                                                         =//\n");
    printf("  //=                                                                         =//\n");
    printf("  //=        = = SIG-Inventory: Sistema de Controle de Estoque = =            =//\n");
    printf("  //=                                                                         =//\n");
    printf("  //=   Programa desenvolvido em prol do desenvolvimento e aperfeicoamento    =//\n");
    printf("  //=  da disciplina DCT1106 - Programacao. Tal trabalho pretende instituir   =//\n");
    printf("  //=     um programa de controle de estoque, com finalidade didatica e       =//\n");
    printf("  //=    ilustrativos. Convem conter todos os modulos e funcionalidades       =//\n");
    printf("  //=       exigidos pela disciplina para um controle de estoque mais         =//\n");
    printf("  //=    interativo e eficiente. Contera, alem do menu PRINCIPAL e SOBRE,     =//\n");
    printf("  //=       outros menus em que os usuarios poderao adicionar produtos,       =//\n");
    printf("  //=       alterar suas informacoes, assim como remove-los do estoque.       =//\n");
    printf("  //=                                                                         =//\n");
    printf("  //=                                                                         =//\n");
    printf("  //= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =//\n");
    printf("  ///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("         Digite 0 para retornar ao MENU PRINCIPAL(Ainda sem direcionar) \n");
    getchar();
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
    printf("  |*|              [ 3 ] << Consultar produto >>                             |*|\n");
    printf("  *|*              [ 4 ] << Excluir produto >>                               *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|              [ 0 ] <<Menu principal>>                                  |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                     Escolha sua opcao:                                 *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    scanf("%c", &op);
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

    return op;
}


char navegacaoProduto(void) {
	char opcao;
	do {
		opcao = menuProdutos(); // Chama tela
		switch (opcao) {
			case '1' : 	
                cadastrarProduto();
				break;
			case '2' : 	
                pesquisarProduto();
				break;
			case '3' : 	
                alterarProduto();
				break;
			case '4' : 	
                excluirProduto();
				break;

      default:
               printf("Valor invalido \n");
		}       
	} while (opcao != '0');
  
}



void cadastrarProduto(void) {
    
    char nome [25];
    char cod [5];
    char valor [8];
    char estMax [15];
    char estMin [5];
    char dataValid [11];

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
    printf("\n");
    
    printf("  ||                    Informe sobre o novo produto:                         ||\n");
    printf("  ||                                                                          ||\n");

    printf("  ||                    Nome do produto: <<                                   ||\n");
    scanf ( " %[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ] >>" , nome);
    getchar ();
    printf("\n");

    printf("  ||                    Codigo do produto (apenas números): <<                ||\n");
    scanf ( " %[0-9] >>" , cod);
    getchar ();
    printf("\n");

    printf("  ||                    Valor de compra/unid: << R$                           ||\n");
    scanf ( " %[0-9] >>" , valor);
    getchar ();
    printf("\n");

    printf("  ||                    Estoque Maximo: <<                                    ||\n");
    scanf ( " %[0-9] >>" , estMax);
    getchar ();
    printf("\n");

    printf("  ||                    Estoque Minimo: <<                                   ||\n");
    scanf ( " %[0-9] >>" , estMin);
    getchar ();
    printf("\n");
    
    printf("  ||                    Data de validade (dd / mm / aaaa): <<               ||\n");
    scanf ( " %[0-9 /] >>" , dataValid);
    getchar ();
    printf("\n");
    
    printf("  ||                                                                        ||\n");
    printf("  ||                                                                        ||\n");
    printf("  ||                 [ 0 ] <<Salvar e cadastrar novo produto>>              ||\n");
    printf("  ||                 [ 9 ] <<Salvar e Sair>>                                ||\n");

    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}    


void alterarProduto(void) {
    
    char nome [25];
    char cod [5];
    char valor [8];
    char estMax [15];
    char estMin [5];
    char dataValid [11];

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
    
    printf("  ||                Forneca novas informacoes sobre o produto:                ||\n");
    printf("  ||                                                                          ||\n");

    printf("  ||                    Nome do produto: <<                                   ||\n");
    scanf ( " %[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ] >>" , nome);
    getchar ();
    printf("\n");

    printf("  ||                    Codigo do produto (apenas números): <<                ||\n");
    scanf ( " %[0-9] >>" , cod);
    getchar ();
    printf("\n");

    printf("  ||                    Valor de compra/unid: << R$                           ||\n");
    scanf ( " %[0-9] >>" , valor);
    getchar ();
    printf("\n");

    printf("  ||                    Estoque Maximo: <<                                    ||\n");
    scanf ( " %[0-9] >>" , estMax);
    getchar ();
    printf("\n");

    printf("  ||                    Estoque Minimo: <<                                   ||\n");
    scanf ( " %[0-9] >>" , estMin);
    getchar ();
    printf("\n");
    
    printf("  ||                    Data de validade (dd / mm / aaaa): <<               ||\n");
    scanf ( " %[0-9 /] >>" , dataValid);
    getchar ();
    printf("\n");
    
    printf("  ||                                                                        ||\n");
    printf("  ||                                                                        ||\n");
    printf("  ||                 [ 0 ] <<Salvar e alterar novo produto>>                ||\n");
    printf("  ||                 [ 9 ] <<Salvar e Sair>>                                ||\n");

    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    
}    




void pesquisarProduto(void) {
    
    char nome [25];
    char cod [5];
    

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
    
    printf("  ||                         Informe o produto:                               ||\n");
    printf("  ||                                                                          ||\n");
    printf("  ||                    Nome do produto: <<                                   ||\n");
    scanf ( " %[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ] >>" , nome);
    getchar ();
    printf("\n");

    printf("  ||                    Codigo do produto (apenas números): <<                ||\n");
    scanf ( " %[0-9] >>" , cod);
    getchar ();
    printf("\n");

    printf("  ||                                                                          ||\n");
    printf("  ||                                                                          ||\n");
    printf("  ||                 [ 0 ] <<Fazer nova pesquisa>>                            ||\n");
    printf("  ||                 [ 9 ] <<Sair>>                                           ||\n");

    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}



void excluirProduto(void) {
    
    char nome [25];
    char cod [5];
    

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
    printf("\n");
    
    printf("  ||                         Informe o produto:                               ||\n");
    printf("  ||                                                                          ||\n");
    printf("  ||                    Nome do produto: <<                                   ||\n");
    scanf ( " %[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ] >>" , nome);
    getchar ();
    printf("\n");

    printf("  ||                    Codigo do produto (apenas números): <<                ||\n");
    scanf ( " %[0-9] >>" , cod);
    getchar ();
    printf("\n");

    printf("  ||                                                                          ||\n");
    printf("  ||                                                                          ||\n");
    printf("  ||                 [ 0 ] <<Excluir novo produto>>                            ||\n");
    printf("  ||                 [ 9 ] <<Sair>>                                           ||\n");

    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}



char menuEntrada(void) {
    char op;

    system("cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          |*|\n");
    printf("  *|*          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          *|*\n");
    printf("  |*|          MENU                                            MENU          |*|\n");
    printf("  *|*          MENU            ENTRADA DE PRODUTOS             MENU          *|*\n");
    printf("  |*|          MENU                                            MENU          |*|\n");
    printf("  *|*          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          *|*\n");
    printf("  |*|          MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU          |*|\n");
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
    printf("  |*|              [ 1 ] << Lancar nova entrada >>                           |*|\n");
    printf("  *|*              [ 2 ] << Alterar/atualizar entrada >>                     *|*\n");
    printf("  |*|              [ 3 ] << Consultar entrada >>                             |*|\n");
    printf("  *|*              [ 4 ] << Excluir entrada >>                               *|*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|              [ 0 ] <<Sair deste Menu>>                                 |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("Digite a opcao desejada: ");
    scanf("%c", &op);
    getchar();
    return op;
}

char menuSaida(void){
    char op;
    system("cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            |*|\n");
    printf("  *|*        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            *|*\n");
    printf("  |*|        MENU                                            MENU            |*|\n");
    printf("  *|*        MENU              SAIDA DE PRODUTOS             MENU            *|*\n");
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
    printf("  |*|              [ 1 ] << Lancar nova saida >>                             |*|\n");
    printf("  *|*              [ 2 ] << Alterar/atualizar saida >>                       *|*\n");
    printf("  |*|              [ 3 ] << Consultar saida >>                               |*|\n");
    printf("  *|*              [ 4 ] << Excluir saida >>                                 *|*\n");
    printf("  |*|              [ 5 ] << Gerar relatorio >>                               |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|              [ 0 ] <<Sair deste Menu>>                                 |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("Digite a opcao desejada: ");
    scanf("%c", &op);
    getchar();
    return op;
}

void menuRelatorio(void) {
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
    printf("  |*|                 Escolha o produto para gerar relatorio:                |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                    Nome do produto: <<__________>>                     |*|\n");
    printf("  *|*                    Codigo do produto: <<__________>>                   *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                     [ 0 ] <<Relatorio de produto especifico>>          *|*\n");
    printf("  |*|                     [ 1 ] <<Relatorio Geral>>                          |*|\n");
    printf("  *|*                     [ 9 ] <<Sair>>                                     *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



 void navegacaoEntrada(void) {
     	char opcao;
     	do {
     		opcao = menuEntrada();                          
     		switch (opcao) {
     			case '1' : 	
              cadastEntrada();
     				break;
     			case '2' : 	
              alterarEntrada();
     				break;
     			case '3' : 	
              consultarEntrada();
     				break;
     			case '4' : 	
              excluirEntrada();
     				break;
     		}
     	} while (opcao != '0');
}

void saidaProduto(void){                                           /*colocou ; em ves de abrir {*/
 	char opcao;
 	do{
 		opcao = menuEntrada();                                //duvidosas
 		switch (opcao) {
 			case '1' : 	
                //....();
 			    break;
 			case '2' : 	
                //....();		
                break;
 			case '3' : 	
                //....();
 				break;
 			case '4' : 	
                //....();
 			    break;
            /*default:
                printf("");*/
 		}
    }while (opcao != '0');
}


 //MODULO ENTRADA
void cadastEntrada(void){
  char nome[51];
  char codigo[4];
  char desc[51];
  char data[11];
  char forn[51];
  char qtde[4];

  system("cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|          ****************************************************          |*|\n");
    printf("  *|*          ****************************************************          *|*\n");
    printf("  |*|          =                                                  =          |*|\n");
    printf("  *|*          =              Cadastrar novo ENTRADA              =          *|*\n");
    printf("  |*|          =                                                  =          |*|\n");
    printf("  *|*          ****************************************************          *|*\n");
    printf("  |*|          ****************************************************          |*|\n");
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
    printf("  |*|                    Informe sobre o nova entrada:                       |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                    Nome do produto: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("  |*|                    Codigo do produto: ");
    scanf("%[0-9]", codigo);
	  getchar();
    printf("  |*|                    Descricao do produto: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", desc);
    getchar();
    printf("  |*|                    Data: ");
    scanf("%[0-9/]", data);
	  getchar();
    printf("  *|*                    Fornecedor: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", forn);
	  getchar();
    printf("  |*|                    Quantidade: ");
    scanf("%[0-9]", qtde);
	  getchar();
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                 [ 0 ] <<Salvar e cadastrar nova entrada>>              |*|\n");
    printf("  *|*                 [ 9 ] <<Salvar e Sair>>                                *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
void alterarEntrada(void){
    system("cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =            Alterar/atualizar ENTRADA             =            *|*\n");
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
    printf("  |*|              Forneca as novas informacoes sobre a entrada:             |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                    Nome do produto: <<__________>>                     |*|\n");
    printf("  *|*                    Fornecedor: <<__________>>                          *|*\n");
    printf("  |*|                    Quantidade: <<__________>>                          |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                 [ 0 ] <<Salvar e alterar nova entrada>>                |*|\n");
    printf("  *|*                 [ 9 ] <<Salvar e Sair>>                                *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
void consultarEntrada(void){
     system("cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =                Consultar ENTRADA                 =            *|*\n");
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
    printf("  |*|         Forneca alguma das informacoes abaixo sobre a entrada:         |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                    Nome do produto: <<__________>>                     |*|\n");
    printf("  *|*                    Fornecedor: <<__________>>                          *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                 [ 0 ] <<Consultar entrada>>                            |*|\n");
    printf("  *|*                 [ 9 ] <<Sair>>                                         *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
void excluirEntrada(void){
    system("cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =                 Excluir ENTRADA                  =            *|*\n");
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
    printf("  |*|                  Escolha o entrada a ser excluido:                     |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                    Nome do produto: <<__________>>                     |*|\n");
    printf("  *|*                    Fornecedor: <<__________>>                          *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                     [ 0 ] <<Excluir entrada>>                          *|*\n");
    printf("  |*|                     [ 9 ] <<Sair>>                                     |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
//MODULO SAIDA
void cadastSaida(void){
system("cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =               Cadastrar novo SAIDA               =            *|*\n");
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
    printf("  |*|                    Informe sobre o nova saida:                         |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                    Nome do produto: <<__________>>                     |*|\n");
    printf("  *|*                    Cliente: <<__________>>                             *|*\n");
    printf("  |*|                    Quantidade: <<__________>>                          |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                 [ 0 ] <<Salvar e cadastrar nova saida>>                |*|\n");
    printf("  *|*                 [ 9 ] <<Salvar e Sair>>                                *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
void alterarSaida(void){
    system("cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =             Alterar/atualizar SAIDA              =            *|*\n");
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
    printf("  |*|              Forneca as novas informacoes sobre a saida:               |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                    Nome do produto: <<__________>>                     |*|\n");
    printf("  *|*                    Cliente: <<__________>>                             *|*\n");
    printf("  |*|                    Quantidade: <<__________>>                          |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                 [ 0 ] <<Salvar e alterar nova saida>>                  |*|\n");
    printf("  *|*                 [ 9 ] <<Salvar e Sair>>                                *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
void consultarSaida(void){
     system("cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =                 Consultar SAIDA                  =            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
    printf("  *|*===================================**===================================*|*\n");
    printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|         Forneca alguma das informacoes abaixo sobre a saida:           |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                    Nome do produto: <<__________>>                     |*|\n");
    printf("  *|*                            Cliente: <<__________>>                     *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                 [ 0 ] <<Consultar saida>>                              |*|\n");
    printf("  *|*                 [ 9 ] <<Sair>>                                         *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
void excluirSaida(void){
    system("cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        =                  Excluir SAIDA                   =            *|*\n");
    printf("  |*|        =                                                  =            |*|\n");
    printf("  *|*        ****************************************************            *|*\n");
    printf("  |*|        ****************************************************            |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
    printf("  *|*===================================**===================================*|*\n");
    printf("  |*|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                  Escolha o saida a ser excluido:                       |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                    Nome do produto: <<__________>>                     |*|\n");
    printf("  *|*                    Cliente: <<__________>>                             *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                     [ 0 ] <<Excluir saida>>                            *|*\n");
    printf("  |*|                     [ 9 ] <<Sair>>                                     |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|                                                                        |*|\n");
    printf("  >>>-##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##-<<<\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
