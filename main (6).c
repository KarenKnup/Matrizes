#include <stdio.h>

#define L 5
#define C 5

void PreencheMatriz (int m[L][C]){
  int i, j; //i - linhas / j- colunas

  for (i=0;i<L; i++){//linhas
    for (j=0; j<C; j++){//colunas
      if (i==j){
        m[i][j]=0;
        } else {
        m[i][j]=1;
        }
    }
  }
}

void ExibeMatriz (int m[L][C]){
  int i,j;

  for(i=0; i<L; i++){//linhas
    for (j=0; j<C; j++){//colunas
      printf("%d\t", m[i][j]);
    }
    printf("\n"); //pula p próx linha
  }
}

int main(void) {
int m[L][C];

  PreencheMatriz(m);
  printf("\n\n");
  ExibeMatriz (m);
  
  return 0;
}