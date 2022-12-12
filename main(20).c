
/*
Desenvolver uma função que, dada uma matriz de
inteiros com L linhas e C colunas, onde L e C são
constantes, inverta os elementos de cada uma de suas
linhas.
*/

#include <stdio.h>
#include <stdlib.h>

#define L 3
#define C 3

void exibe (int m[L][C]){
  //declaração das variáveis
  int i,j; //matriz original -- i(linhas) e j(colunas)

  printf("\n\nElementos da matriz:\n\n");
  
  //varrendo as linhas da matriz
  for (i=0;i<L;i++){

    //varrendo as colunas da matriz
    for (j=0;j<C;j++){
      printf("%d\t",m[i][j]);
    }
    printf("\n");
  }
}

/*
  
    int x[5]={1,2,3,4,5};
    int i;
    
    //Eu coloquei 4 porque em um vetor de 5 posições, a primeira posição é 0. 
    for(i=4;i>=0;i--){
        printf("%d", x[i]);
    }   
*/


void exibeL (int l, int m[l][C]){
  for(int j=0; j<C; j++){
    printf("%d ",m[l][j]);
  }
  printf("\n");
}

void inverteL(int l, int m[l][C]){
  int a=C-1, temp=0;
  for(int j=0; j<C/2; j++,a--){
    temp=m[l][j];
    m[l][j]=m[l][a];
    m[l][a]=temp;
  }
}

void InverteMatriz(int m[L][C]){
  for(int i=0; i<L; i++){
    inverteL(i,m);
  }
}

int main(void) {
  int m[L][C]={1,2,3,4,5,6,7,8,9};

  exibe(m);
  //inverteL(1,m);
  //exibeL(1,m);
  InverteMatriz(m);
  exibe(m);
  
  return 0;
}