/*
Inverter uma matriz
*/

#include <stdio.h>
#include <stdlib.h>

//definição de constantes
#define L 3
#define C 3

void exibir (int M[L][C]){
    int i, j;
    printf ("\nElementos da matriz:\n\n");
  
  for (i=0;i<L;i++){
        for (j=0;j<C;j++){
            printf ("%3d ", M[i][j]);
        }
        printf ("\n");
    }
    printf ("\n");
}

void zera (int m[L][C]){
  for(int i=0;i<L; i++){
    for(int j=0;j<C;j++){
      m[i][j]=0;
    }
  }
}

void Inverte (int m[L][C]){
  int l=L-1, c=C-1, temp[L][C];

  zera(temp);

  for(int i=0;i<L;i++){
    for(int j=0;j<C;j++){
      temp[i][j]=m[l-i][c-j];
    }
  }

  for(int i=0;i<L;i++){
    for(int j=0;j<C;j++){
      m[i][j]=temp[i][j];
    }
  }
}
  
int main(void){
  int M[L][C]={1,2,3,4,5,6,7,8,9};

  exibir(M);
  printf("\n\n\n------- INVERTIDA ------\n");
  Inverte(M);
  exibir(M);
  
  return 0;
}