#include <stdio.h>

#define L 2
#define C 3

void Exibe (int m[L][C]){
  int i,j;

  for (i=0; i<L; i++){//linhas
    for (j=0; j<C; j++){//colunas
      printf("%d\t",m[i][j]);
    }
    printf("\n");
  }
}

void Oposta (int m[L][C]){
  int i,j;

  for (i=0; i<L; i++){//linhas
    for (j=0; j<C; j++){//colunas
      m[i][j]=m[i][j]*(-1);
    }
  }
  
}

int main(void) {
  int m[L][C]={0,-1,2,5,0,-3};

  printf("\n------ MATRIZ: -------\n");
    Exibe (m);
  
  printf("\n\n------ MATRIZ OPOSTA: -------\n");
    Oposta(m);
    Exibe(m);
  
  return 0;
}