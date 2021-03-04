#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validaNome.h"

int main(){

    char nome[20];
    int validar;
    do{
      printf("Nome: ");
      scanf("%c", nome);
      validar = validaNome(nome);
    }while(validar != 0);

  getchar();
  return 1;
}

int validaNome(char nome[]){
  int i;
  for(i =0; i < strlen(nome); i++){
    if((nome[i] >= 65 && nome[i] <= 90) || (nome[i] >= 97 && nome[i] <= 122)){
        printf("Nome valido!");
        return 0;
    }else{
      printf("Nome invalido!");
    }
  }
  return 1;
}

