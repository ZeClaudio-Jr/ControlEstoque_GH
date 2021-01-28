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
//void menuSobre(void);


/// Programa Principal <main>
int main(void) {
    //menuSobre();
    menuPrincipal();

    return 0;

}



void menuSobre(void) {

    printf("\n");
    printf("         Bem vindo ao seu programa de Controle de Estoque SIG-UFRN\n");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///          UFRN - Universidade Federal do Rio Grande do Norte             ///\n");
    printf("///             Centro de Ensino Superior do Serido - Caico                 ///\n");
    printf("///               Departamento de Computacao e Tecnologia                   ///\n");
    printf("///                   Disciplina DCT1106 * Programacao                      ///\n");
    printf("///             SIG-Inventory: Sistema de Controle de Estoque               ///\n");
    printf("///       Developed by: Annielly Ferreira de Sousa - Jan, 2021, and         ///\n");
    printf("///                     Jose Claudio de Araujo Junior - Jan, 2021           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///        = = SIG-Inventory: Sistema de Controle de Estoque = =            ///\n");
    printf("///                                                                         ///\n");
    printf("///             Programa desenvolvido em prol do desenvolvimento e          ///\n");
    printf("///            aperfeiçoamento da disciplina DCT1106 - Programacao.         ///\n");
    printf("///          Tal trabalho pretende instituir um programa de controle        ///\n");
    printf("///            de estoque, com finalidade didatica e ilustrativos.          ///\n");
    printf("///         Convem conter todos os modulos e funcionalidades exigidos       ///\n");
    printf("///              pela disciplina para um controle de estoque mais           ///\n");
    printf("///                         interativo e eficiente.                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("Digite 0 para retornar ao MENU PRINCIPAL(Ainda sem direcionar) \n");
    getchar();
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