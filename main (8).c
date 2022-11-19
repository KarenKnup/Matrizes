#include <stdio.h>

#define L 2
#define C 2

void Exibe (int m[L][C]){
  int i,j;

  for(i=0; i<L; i++){//linhas
    for (j=0; j<C; j++){//colunas
      printf("%d\t",m[i][j]);
    }
    printf("\n");
  }
}

void Subtrai (int m1[L][C], int m2[L][C], int ms[L][C]){
int i,j;

  for (i=0; i<L; i++){
    for (j=0; j<C; j++){
      ms[i][j]=m1[i][j]-m2[i][j];
    }
  }
  
}

int main(void) {
int m1[L][C]={8,7,6,5}, m2[L][C]={1,2,3,4}, ms[L][C];

  
  printf("\n------- MATRIZ 1: -------\n");
    Exibe(m1);
  
  printf("\n------- MATRIZ 2: -------\n");
    Exibe(m2);
  
  printf("\n------- SUBTRAÇÃO: -------\n");
    Subtrai(m1,m2,ms);
    Exibe(ms);
  
  return 0;
}