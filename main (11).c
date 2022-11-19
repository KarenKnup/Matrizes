#include <stdio.h>

/*
Desenvolver uma função que gere a seguinte
matriz M5x5:
              1 2 3 4 5 - a00 a01 a02 a03 a04
              2 3 4 5 6 - a10 a11 a22 a23 a24
              3 4 5 6 7
              4 5 6 7 8
              5 6 7 8 9
  */

#define L 5
#define C 5

void Exibe (int m[L][C]){
  int i,j;

  printf("\n");
  for (i=0; i<L; i++){//linhas
    for (j=0; j<C; j++){//colunas
      printf("%d\t",m[i][j]);
    }
    printf("\n");
  }
}

void Matriz(int m[L][C]){
  int i,j/*cont*/;

  for (i=0; i<L; i++){ //linhas
    //cont=i+1
    for (j=0; j<C; j++){ //colunas
      m[i][j]=i+j+1;
      //m[i][j]=cont
      //cont++
    }
  }
}

int main(void) {
  int m[L][C];

  Matriz(m);
  Exibe(m);
  
  
  return 0;
}