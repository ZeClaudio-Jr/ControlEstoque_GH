#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validaNome.h"

int main(){

    char nome[20];
    int validar;

    do{
      printf("Nome: ");
      scanf("%s\n", nome);
      getchar();
      validar = validaNome(nome);
      if(validar == 1){
          printf("Nome valido!\n");
      }else{
          printf("Nome invalido!\n");
      }
    }while(validar != 1);
  return 0;
}

int validaNome(char nome[]){

  for(int i = 0; i < strlen(nome); i++){
    if((nome[i] >= 0 && nome[i] <= 64) || (nome[i] >= 122 && nome[i] <= 97)){    
      continue;
    }else  if (strlen(nome) > 24){
      return 0;
    }
  }
  return 1;
}
