#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
  Desenvolver uma função que, dada uma matriz de 
inteiros M10x10, troque de posição dos elementos da 
linha L com os valores da coluna C. Caso a troca seja 
possível, a função deverá retornar a constante TRUE; 
caso contrário, FALSE.
  */


#define TRUE 1
#define FALSE 0 

  void Preencher_Matriz (int L, int C, int m[L][C]){
   //declaração das variáveis
  int i,j; //matriz original -- i(linhas) e j(colunas)

  srand(time(NULL));
  //varrendo as linhas da matriz
  for (i=0;i<L;i++){
    //varrendo as colunas da matriz
    for (j=0;j<C;j++){
      m[i][j]=rand()%10;
    }
  }
}

  int Verifica (int L, int C, int m[L][C]){
  int i,j ;
  for (i=0; i<L; i++){//linhas
    for (j=0; j<C; j++); //colunas
    } 

  if (i==j){
          return TRUE;
        }
    return FALSE;
  }

void Inverte (int L, int C, int m[L][C], int m2[L][C]){
 int i,j;

  for(i=0;i<L;i++){
    for (j=0;j<C;j++){
      m2[j][i]=m[i][j];
    }
  }
}

void Exibe (int L, int C, int m[L][C]){
int i, j;
  printf("\n");
  for (i=0; i<L; i++){//linhas
    for (j=0; j<C; j++){//colunas
      printf("%d\t", m[i][j]);
    } 
    printf("\n");
  }
}

int main(void) {
  int L,C;

  printf("\n----- Matriz Original ------\n");
  //Preenchendo a matriz original
  printf("\nDigite a quantidade de linhas: ");
  scanf("%d",&L);
  printf("Digite a quantidade de colunas: ");
  scanf("%d",&C);

  int m[L][C], m2[L][C];
  
  Preencher_Matriz(L,C,m);
  Exibe(L,C,m);

   printf("\n\n----- Matriz Invertida ------\n");
  if (Verifica(L,C,m)==TRUE){
    printf("\n\t É possível fazer a troca!\n");
    Inverte(L,C,m,m2);
    Exibe(L,C,m2);
    
  } else{
    printf("\n\t NÃO é possível fazer a troca!");
  }

    return 0;
}