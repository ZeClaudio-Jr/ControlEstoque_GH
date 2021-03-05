#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validaCodigo.h"

int main(){

    char codigo[5];
    int validar;
    
    do{
      printf("Codigo: ");
      scanf("%[0-9^A-Za-z]", codigo);
      getchar();
      validar = validaCodigo(codigo); 
      if(validar == 1){
          printf("Codigo valido!\n");
      }else{
          printf("Codigo invalido!\n");
      }
    }while(validar != 1);
  return 0;
}

int validaCodigo(char codigo[]){
  for(int i = 0; i < strlen(codigo); i++){
    if((codigo[i] >= 0 && codigo[i] <= 47) || (codigo[i] >= 58 && codigo[i] <= 126)){
      return 0;
    }
  }
  return 1;
}
