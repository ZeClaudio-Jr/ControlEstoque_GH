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

void menuPrincipal(void);
void menuSobre(void);
void menuProdutos(void);
void entradaProdutos(void);
void saidaProdutos(void);


/// Programa Principal <main>

int main(void) {
    //menuSobre();
    //menuPrincipal();
    menuProdutos();
    //menuEntrada();
    //menuSaida();
    return 0;

}


void menuPrincipal(void) {
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
    printf("  |*|               VEJA AS OPCAO E DIGITE SUA ESCOLHA                       |*|\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|              [ 1 ] << Saiba mais sobre nosso projeto >>                |*|\n");
    printf("  *|*              [ 2 ] << Cadastrar produto >>                             *|*\n");
    printf("  |*|              [ 3 ] << Cadastrar entrada de produto >>                  |*|\n");
    printf("  *|*              [ 4 ] << Cadastrar saida de produto >>                    *|*\n");
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void menuSobre(void) {

    printf("\n");
    printf("         Bem vindo ao seu programa de Controle de Estoque SIG-UFRN\n");
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
    printf("  //=  o usuario podera adicionar produtos, alterar suas informacoes, assim   =//\n");
    printf("  //=                     como remove-los do estoque.                         =//\n");
    printf("  //=                                                                         =//\n");
    printf("  //= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =//\n");
    printf("  ///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("         Digite 0 para retornar ao MENU PRINCIPAL(Ainda sem direcionar) \n");
    getchar();
}


void menuProdutos(void) {
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
    printf("\t\t\t      >>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void entradaProdutos(void) {
    system("cls");
    printf("\n");
    printf("  *#--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--##--#*\n");
    printf("  *|*                                                                        *|*\n");
    printf("  |*|        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            |*|\n");
    printf("  *|*        MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU**MENU            *|*\n");
    printf("  |*|        MENU                                            MENU            |*|\n");
    printf("  *|*        MENU            ENTRADA DE PRODUTOS             MENU            *|*\n");
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
    printf("  |*|              [ 1 ] <<                     >>                           |*|\n");
    printf("  *|*              [ 2 ] <<                     >>                           *|*\n");
    printf("  |*|              [ 3 ] <<                     >>                           |*|\n");
    printf("  *|*              [ 4 ] <<                     >>                           *|*\n");
    printf("  |*|              [ 5 ] <<                     >>                           |*|\n");
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
    printf("\t\t\t      >>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void saidaProdutos(void) {
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
    printf("  |*|              [ 1 ] <<                     >>                           |*|\n");
    printf("  *|*              [ 2 ] <<                     >>                           *|*\n");
    printf("  |*|              [ 3 ] <<                     >>                           |*|\n");
    printf("  *|*              [ 4 ] <<                     >>                           *|*\n");
    printf("  |*|              [ 5 ] <<                     >>                           |*|\n");
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
    printf("\t\t\t      >>> Tecle <ENTER> para continuar...\n");
    getchar();
}