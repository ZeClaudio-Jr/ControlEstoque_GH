#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <validaDesccricao.h>


int main(){

    char desc[50];
    int validar;

    do{
      printf("Descricao: ");
      scanf("%s\n", desc);
      getchar();
      validar = validaDescricao(desc);
      if(validar == 1){
          printf("Descricao valida!\n");
      }else{
          printf("Descricao invalida!\n");
      }
    }while(validar != 1);
  return 0;
}

int validaDescricao(char desc[]){
  
  for(int i = 0; i < strlen(desc); i++){
    if((desc[i] >= 0 && desc[i] <= 64) || (desc[i] >= 122 && desc[i] <= 97)){    
      return 0;
    }else  if (strlen(desc) > 49){ // limita numero de caracteres digitados
      return 0;
    }
  }
  return 1;
}
