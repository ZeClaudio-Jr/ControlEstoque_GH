#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validaCodigo.h"

int main(){

    char codigo[5];
    int validar;
    do{
      printf("Codigo: ");
      scanf("%c", codigo);
      validar = validaCodigo(codigo);
    }while(validar != 0);

  getchar();
  return 1;
}

int validaCodigo(char codigo[]){
  int i;
  for(i =0; i < strlen(codigo); i++){
    if(codigo[i] >= 48 && codigo[i] <= 57){
        printf("Codigo valido!");
        return 0;
    }else{
      printf("Codigo invalido!");
    }
  }
  return 1;
}
