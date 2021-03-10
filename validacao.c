#include <string.h>

// função validaNome
int validaNome(char nome[]){

  for(int i = 0; i < strlen(nome); i++){
    if((nome[i] >= 0 && nome[i] <= 64) || (nome[i] >= 122 && nome[i] <= 97)){ //se estiver nessa faixa não são letras   
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
    if((desc[i] >= 0 && desc[i] <= 64) || (desc[i] >= 122 && desc[i] <= 97)){    
        return 0;
    }else  if (strlen(desc) > 49){ // limita numero de caracteres digitados
      return 0;
    }
  }
  return 1;
}

// função validaFornecedor
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

// função validaCodigo
int validaQuant(char qtde[]){

  for(int i = 0; i < strlen(qtde); i++){
    if((qtde[i] >= 0 && qtde[i] <= 47) || (qtde[i] >= 58 && qtde[i] <= 126)){    return 0;
    }else  if (strlen(qtde) > 4){ // limita numero de caracteres digitados
      return 0;
    }
  }
  return 1;
}