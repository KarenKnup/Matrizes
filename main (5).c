#include <stdio.h>
#include <string.h>

//Faça uma função que receba uma matriz com 4 notas ( 3 notas e uma média), um vetor de nomes e um nome, mostrando as notas dos alunos que são identificados por este nome

//COMO PODE TER MAIS DE UM ALUNO COM MESMO NOME NÃO É POSSÍVEL USAR A BUSCA!!!!

void mmNome (int n, char vNomes[][12], char nome[], float mNotas[][4]){
  int i, j;

  for (i=0; i<n; i++){//vai rodar 5x = n
    if (strcmp(vNomes[i],nome)==0){
      printf("\nNome: %s", vNomes[i]);
      for (j=0; j<4; j++){
        printf("\n\tP %d: %.2f",j+1,mNotas[i][j]);
      }
    }
  }
}

int main(void) {
  int n=5; //qtde de nomes
  char vNomes[5][12]={"Karen","Ivis","Oz","Glen","Glen"};
  char nome[12];
  float vNotas[5][4]={2.0, 3.5, 4.5, 5.5,
                      2.0, 3.5, 4.5, 5.5,
                      2.0, 3.5, 4.5, 5.5,
                      2.0, 3.5, 4.5, 5.5,
                      2.0, 3.5, 4.5, 5.5};

  printf("\nDigite um nome: ");
  scanf(" %[^\n]",nome);

  mmNome(n,vNomes,nome,vNotas);
  
  
  return 0;
}