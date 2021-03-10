#include <stdio.h>
#include <string.h>

int validaFornecedor(char forn[]);

int main(void) {
  int validar;
  char forn[25];

  //quando não tem nada no for, a condição é considerada verdadeira
  for( ; ; ){ //loop infinito
   printf("Fornecedor: ");
   scanf("%s", forn);
   getchar();
   validar = validaFornecedor(forn);
   if(validar == 1){
       printf("Fornecedor valido!\n");
        break;//quebra ociclo for
   }else{
        printf("Fornecedor invalido!\n");
    }
  }  
  
  return 0;
}

int validaFornecedor(char forn[]){

  for(int i = 0; i < strlen(forn); i++){
    if((forn[i] >= 0 && forn[i] <= 64) || (forn[i] >= 122 && forn[i] <= 97)){ //se estiver nessa faixa não são letras   
      return 0;
    }else  if (strlen(forn) > 24){ // limita numero de caracteres digitados
      return 0;
    }
  }
  return 1;
}