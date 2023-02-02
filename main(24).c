#include <stdio.h>

#define TAM 10

void PreencheMatriz(int l, int c, int m[TAM][TAM]){
  int i,j;
  for(i=0; i<l; i++){
    for(j=0; j<c; j++){
      printf("a%d%d = ",i+1,j+1);
      scanf("%d",&m[i][j]);
    }
  }
}

void ExibeMatriz(int l, int c, int m[TAM][TAM]){
  int i,j;
  for(i=0; i<l; i++){
    for(j=0; j<c; j++){
      printf("%d ",m[i][j]);
    }
    printf("\n");
  }
}

int LxC (int l, int c, int l2, int c2, int m[TAM][TAM], int m2[TAM][TAM], int linha, int coluna){
  int mul=0, i=0, j=0;
  //linha--;
  //coluna--;
  while(i<c && j<l2){
    mul+=m[linha][i]*m2[j][coluna];
    i++; 
    j++;
  }
  
  return mul;
}

void MultMatriz (int l, int c, int l2, int c2, int m[TAM][TAM], int m2[TAM][TAM], int multiplica[TAM][TAM]){
  int i,j;
  for(i=0; i<l; i++){
    for(j=0; j<c2; j++){
      multiplica[i][j]=LxC(l,c,l2,c2,m,m2,i,j);
    }
  }
}

int main(void) {
  int l,c,l2,c2,m[TAM][TAM],m2[TAM][TAM], multiplica[TAM][TAM];

  printf("\nDigite a primeira matriz: ");
  printf("\nNúmero de linhas: ");
  scanf("%d",&l);
  printf("Número de colunas: ");
  scanf("%d",&c);
  PreencheMatriz(l,c,m);

  printf("\nDigite a segunda matriz: ");
  printf("\nNúmero de linhas: ");
  scanf("%d",&l2);
  printf("Número de colunas: ");
  scanf("%d",&c2);
  PreencheMatriz(l2,c2,m2);

  printf("\n\t\tMatriz 1: \n");
  ExibeMatriz(l,c,m);
  printf("\n\t\tMatriz 2: \n");
  ExibeMatriz(l2,c2,m2);

  if(c==l2){
    printf("\n\t\t============= MULTIPLICAÇÃO ============\n");
    MultMatriz(l,c,l2,c2,m,m2,multiplica);
    ExibeMatriz(l,c2,multiplica);
  } else {
    printf("\n\tNão é possível realizar a multiplicação dessa matriz!");
  }

  return 0;
}