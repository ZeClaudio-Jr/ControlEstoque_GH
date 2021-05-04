#include <string.h>
#include "validacao.h"

// função validaNome
int validaNome(char nome[]){

  for(int i = 0; i < strlen(nome); i++){
    if((nome[i] >= 0 && nome[i] <= 31) || (nome[i] >= 33 && nome[i] <= 64) || (nome[i] >= 122 && nome[i] <= 97)){    
      return 0;
    }else  if (strlen(nome) > 24){ // limita numero de caracteres digitados
      return 0;
    }
  }
  return 1;
}

// função validaCodigo
int validaCodigo(char codigo[]){

  for(int i = 0; i < strlen(codigo); i++){
    if((codigo[i] >= 0 && codigo[i] <= 47) || (codigo[i] >= 58 && codigo[i] <= 126)){    return 0;
    }else  if (strlen(codigo) > 4){ // limita numero de caracteres digitados
      return 0;
    }
  }
  return 1;
}

// função validaDescricao
int validaDescricao(char desc[]){

  for(int i = 0; i < strlen(desc); i++){
    if((desc[i] >= 0 && desc[i] <= 31) || (desc[i] >= 33 && desc[i] <= 64) || (desc[i] >= 122 && desc[i] <= 97)){    
        return 0;
    }else  if (strlen(desc) > 49){ // limita numero de caracteres digitados
      return 0;
    }
  
  }
  return 1;
}

// função validaFornecedor
int validaForne(char forn[]){

  for(int i = 0; i < strlen(forn); i++){
    if((forn[i] >= 0 && forn[i] <= 31) || (forn[i] >= 33 && forn[i] <= 64) || (forn[i] >= 122 && forn[i] <= 97)){   //se estiver nessa faixa não são letras   
      return 0;
    }else  if (strlen(forn) > 24){ // limita numero de caracteres digitados
      return 0;
    }
  }
  return 1;
}
// função validaQuantidade
int validaQuant(char qtde[]){

  for(int i = 0; i < strlen(qtde); i++){
    if((qtde[i] >= 0 && qtde[i] <= 47) || (qtde[i] >= 58 && qtde[i] <= 126)){    return 0;
    }else  if (strlen(qtde) > 4){ // limita numero de caracteres digitados
      return 0;
    }
  }
  return 1;
}

// Função valiData
int valiData(int dd, int mm, int aaaa){
  
  if ((mm >= 1 && mm <= 12) && (aaaa >= 2000 && aaaa <= 2100)) {
    if((dd >= 1 && dd <= 31) && (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)){
      return 1;
    }else if((dd >= 1 && dd <= 30) && (mm == 4 || mm == 6 || mm == 9 || mm == 11)){
      return 1;
    }else if ((dd >= 1 && dd <= 28) && (mm == 2)){
      return 1;
    }else if (dd == 29 && mm == 2 &&  bissexto(aaaa)){
      return 1;  
    }
  }else{
    
  }
   return 0;
}

// Função bissexto
int bissexto(int aaaa) {
    
    if ((aaaa % 4 == 0) && ((aaaa % 100 != 0) || (aaaa % 400 == 0))) {
        return 1;
    } 
    
    else {
        return 0;
    }
}

// Função validaValor
double validaValor(double valor){
  int f;
  f  = valor;
  if(f == valor){
    return 0;
  }
  return 1;
}