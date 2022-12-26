/*
INVERTE OS NUMEROS DE CERTA LINHA
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

void Inverte (int m[L][C], int l){
  l--;
  int c=C-1, temp=0;

  for(int i=0;i<L;i++){
    if(i == l){
      for(int j=0; j<C/2; j++){
        temp=m[i][j];
        m[i][j]=m[i][c];
        m[i][c]=temp;
        c--;
      }
    }
  }

}
  
int main(void){
  int M[L][C]={1,2,3,4,5,6,7,8,9},l;

  exibir(M);
  printf("\n\n\n------- INVERTIDA ------\n");
  printf("\nDigite uma linha: ");
  scanf("%d",&l);
    if(l>0 && l<=C-1){
      Inverte(M,l);
      exibir(M);
    } else {
     printf("\nEssa linha não existe! Tente novamente: ");
     scanf("%d",&l);
    }
    
  return 0;
}
