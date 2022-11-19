#include <stdio.h>

void LeC(int *L, int *C){
  printf("\nQuantas linhas a matriz deve ter? ");
  scanf("%d",L);
  printf("Quantas colunas a matriz deve ter? ");
  scanf("%d",C);
}

void Matriz (int L, int C, int m[L][C]){
  int i,j;

  for(i=0; i<L; i++){//linhas
    for(j=0; j<C; j++){//colunas
      printf("Elemento da linha %d e coluna %d: ",i+1,j+1);
      scanf("%d",&m[i][j]);
    }
  }
}

void Exibe (int L, int C, int m[L][C]){
  int i,j;
  
  for(i=0; i<L; i++){//linhas
    for(j=0; j<C; j++){//colunas
      printf("%d\t",m[i][j]);
    }
    printf("\n");
  }
}

int main(void) {
 int L, C, m[L][C];

  LeC(&L,&C);
  
printf("\n--------- CAPTURA MATRIZ: ----------\n");
  Matriz(L,C,m);

printf("\n--------- EXIBE MATRIZ: ----------\n");
  Exibe(L,C,m);
  
  
  return 0;
}