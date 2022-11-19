#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Fazer uma função que, dada uma matriz M6×6,
determine se ela é simétrica.
M = M transposta

  2 3 -1 - a00 a01 a02 ~~~~ a01=a10 / a02=a20 / a21=a12 
  3 4  5 - a10 a11 a12   
 -1 5  0 - a20 a21 a22


  */

#define L 6
#define C 6

#define TRUE 1
#define FALSE 0

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

int simetrica (int m[L][C]){
  //declaração de variáveis
	int i, j;
	
	//varrendo a matriz
	for (i=0;i<L-1;i++) 
	{
		for (j=i+1;j<C;j++) 
		{
			//verificando se não é simétrica
			if (m[i][j] != m[j][i]) //a10=01
			{
				return FALSE;
			}
		}
	}
	
	return TRUE;
}

int main(void) {
  int m[L][C]/*={2,3,-1,3,4,5,-1,5,0}*/;

  preencheMatriz(m);
  Exibe(m);
  if (simetrica(m)==TRUE){
    printf("\n\tA matriz é simétrica!");
  } else{
    printf("\n\tA matriz NÃO é simétrica!");
  }
  
    return 0;
}     