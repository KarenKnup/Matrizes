#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
  Implementar uma função que, dada uma matriz
M10×8, gere um vetor V de tamanho 8, onde
cada elemento do vetor consiste na soma dos
elementos de uma coluna de M. Ou seja, o
elemento V[0] consiste na soma dos elementos
da primeira coluna de M, o elemento V[1]
consiste na soma dos elementos da segunda
coluna de M, e assim por diante.
  */

#define L 10
#define C 8


void preencheMatriz (int m[L][C]){
//declaração de variáveis
	int i, j;
	
	srand (time(NULL));
	
	//varrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//varrendo as colunas
		for (j=0;j<C;j++)
		{
			m[i][j] = rand () % 100; //de 0 a 99
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

void SomaColuna (int m[L][C],int v[C]){
  int i, j, soma=0;

  for(j=0; j<C; j++){//8 colunas
    soma=0; //o soma zera sempre que acaba uma coluna
    for (i=0; i<L; i++){//10 linhas
      soma+=m[i][j];//soma todos os elementos da linha
    }
    v[j]=soma;
  }
}

void ExibeVetor (int v[C]){
  int j;

  printf("\nVETOR = ");
  for(j=0; j<C; j++){
    printf("%d ",v[j]);
  }
}

int main(void) {
  int m[L][C], v[C];

  preencheMatriz(m);
  Exibe(m);
  SomaColuna(m,v);
  ExibeVetor(v);
  
  return 0;
}