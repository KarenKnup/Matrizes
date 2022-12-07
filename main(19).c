/*
	Dada uma matriz MLxC, onde L e C são constantes, desenvolver 
	uma função que verifique se os elementos da matriz estão 
	ordenados de forma crescente. Para isto, as seguintes regras 
	devem ser atendidas:

	a.	Os elementos de cada linha devem estar ordenados 
	    crescentemente (ou seja, cada elemento será maior ou 
		igual àquele da mesma linha, porém da coluna anterior - 
		caso exista);
	b.	O primeiro elemento de cada linha deve ser maior ou igual ao último da linha anterior (caso exista).

	Caso a matriz M atenda aos critérios definidos, o valor 1 
	deverá ser retornado pela função; caso contrário, 0.
*/
#include <stdio.h>
#include <stdlib.h>

#define L 3
#define C 3

#define TRUE 1
#define FALSE 0

void exibir (int M[L][C]){
    int i, j;
    printf ("Elementos da matriz:\n\n");
  
  for (i=0;i<L;i++){
        for (j=0;j<C;j++){
            printf ("%3d ", M[i][j]);
        }
        printf ("\n");
    }
    printf ("\n");
}

int MatrizCrescente (int m[L][C]){
  int i,j;

  for(i=0; i<L; i++){
    for(j=0; j<C; j++){
      if (m[i][j] > m[i][j+1]){
        return FALSE;
      }
    }
  }

  return TRUE;
}

int main(void) {
  int M1[L][C]={1,2,3,4,5,6,7,8,9}, M2[L][C]={9,8,7,6,5,4,3,2,1}, M3[L][C]={1,2,3,2,5,6,7,8,9};

  printf("\n--------MATRIZ 1----------\n");
  exibir(M1);
  if(MatrizCrescente(M1)==TRUE){
    printf("\n\tMatriz crescente!");
  } else {
    printf("\n\tMatriz NÃO crescente!");
  }

  printf("\n\n--------MATRIZ 2----------\n");
  exibir(M2);
  if(MatrizCrescente(M2)==TRUE){
      printf("\n\tMatriz crescente!");
    } else {
      printf("\n\tMatriz NÃO crescente!");
    }

  printf("\n\n--------MATRIZ 3----------\n");
  exibir(M3);
  if(MatrizCrescente(M3)==TRUE){
      printf("\n\tMatriz crescente!");
    } else {
      printf("\n\tMatriz NÃO crescente!");
    }
  
  return 0;
}