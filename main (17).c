#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 Desenvolver uma função que receba duas matrizes de 
inteiros, ambas de ordem 10, com as seguintes 
características:

a. M1: matriz contendo números inteiros 
quaisquer;
b. M2: matriz contendo apenas os valores 0 ou 1.

Desenvolver uma função que a partir destas matrizes 
gere a matriz M3, também de ordem 10, cujos 
elementos são definidos da seguinte forma:
M2ij = 0 → M3ij = M1ij ~~ M2(21)=0 -> M3(21)=M1(21)
M2ij = 1 → M3ij = soma dos elementos  da linha i com os da 
coluna j da matriz.~~ M2(13)=1 ->M3(13)=soma linha i com coluna j
*/

#define L 10
#define C 10

void preencheMatriz1 (int m[L][C]){
//declaração de variáveis
	int i, j;
	
	srand (time(NULL));
	
	//varrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//varrendo as colunas
		for (j=0;j<C;j++)
		{
			m[i][j] = 1+(rand()%9); //de 1 a 9
		}
	}  
}

void preencheMatriz2 (int m[L][C]){
  int i,j;
  for (i=0; i<L; i++){
    for (j=0; j<C; j++){
      if (i==j){
        m[i][j]=0;
      } else {
        m[i][j]=1;
      }
    }
  }
}

void Exibe (int m[L][C]){
  int i,j;

  printf("\n");
  for (i=0; i<L; i++){//linhas
    for (j=0; j<C; j++){//colunas
      printf("%d\t",m[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int SomaColuna (int j, int m[L][C]){
  int i, soma;

    soma=0; //o soma zera sempre que acaba uma coluna
    for (i=0; i<L; i++){//só o i varia
      soma+=m[i][j];//soma todos os elementos da linha
    }
    
  return soma;
}

int SomaLinha (int i, int m[L][C]){
  int j, soma=0;

  for (j=0; j<C; j++){
   soma+=m[i][j]; 
  }
  
  return soma;
}

void Matriz (int m1[L][C], int m2[L][C], int m3[L][C]){
  int i,j;
  /*
    M2ij = 0 → M3ij = M1ij ~~ M2(21)=0 -> M3(21)=M1(21)

M2ij = 1 → M3ij = soma dos elementos  da linha i com os da 
coluna j da matriz.~~ M2(13)=1 ->M3(13)=soma linha i com coluna j (de M1)
  */
  for (i=0; i<L; i++){
    for (j=0; j<C; j++){
      if (m2[i][j]==0){
        m3[i][j]=m1[i][j];
      } else{//m2[i][j]=1
        m3[i][j]=SomaLinha(i,m1)+SomaColuna(j,m1);
      }
    }
  }
}


int main(void) {
  int M1[L][C], M2[L][C], M3[L][C];

  printf("\n----------- MATRIZ 1: ------------\n");
  preencheMatriz1(M1);
  Exibe(M1);
  printf("\n----------- MATRIZ 2: ------------\n");
  preencheMatriz2(M2);
  Exibe(M2);
  printf("\n----------- MATRIZ 3: ------------\n");
  Matriz(M1,M2,M3);
  Exibe(M3);
    
  
    return 0;
}