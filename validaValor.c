#include <stdio.h>
#include <stdlib.h>

float validaValor(float valor);

int main(){

  float valor;
  int retorno;
    
  printf(" Valor de compra/unid: << R$ ");
  scanf("%f.2", &valor);
  retorno = validaValor(valor);
  if(retorno == 1){
          printf("Valor valido!\n");
      }else{
          printf("Valor invalido!\n");
          main();
      }

return 0;
}

float validaValor(float valor){
  int f;
  f  = valor;
  if(f == valor){
    return 0;
  }
  return 1;
}