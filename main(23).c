/*
Considerando a existência de uma matriz quadrada, de
ordem N (ou seja, N linhas e N colunas), desenvolver
uma função que determine se as seguintes somas
resultam no mesmo valor:

a. Soma de cada linha; 
b. Soma de cada coluna; 
c. Soma da diagonal principal;
d. Soma da diagonal secundária.

Se todas as somas resultarem no mesmo valor, a
função deverá retornar 1; caso contrário, 0.
*/

#include <stdio.h>

#define N 2

#define TRUE 1
#define FALSE 0

void exibe (int m[N][N]){
  //declaração das variáveis
  int i,j; //matriz original -- i(linhas) e j(colunas)

  printf("\n\nElementos da matriz:\n\n");
  
  //varrendo as linhas da matriz
  for (i=0;i<N;i++){

    //varrendo as colunas da matriz
    for (j=0;j<N;j++){
      printf("%d\t",m[i][j]);
    }
    printf("\n");
  }
}

int SomaLinhas (int m[N][N]){
  int soma, soma2, i, j;
  
  for(i=0; i<N; i++){//linhas
    soma=0; //toda vez que começa uma nova linha, soma zera
    for(j=0; j<N; j++){//colunas
      soma+=m[i][j]; 
    }
    if(i==0){
      soma2=soma;
    } else {
      if(soma2!=soma){
        return FALSE;
      }
    }
  }

  return soma;
}

int SomaColunas (int m[N][N]){
  int soma=0, soma2, i, j;

  //N=2 -> 00 01 ij
         //10 11
  for(i=0; i<N; i++){//linhas
    soma=0; //toda vez que começa uma nova linha, soma zera
    for(j=0; j<N; j++){//colunas
      soma+=m[j][i]; 
    }
    if(i==0){
      soma2=soma;
    } else {
      if(soma2!=soma){
        return FALSE;
      }
    }
  }  

    return soma;
}

int Principal (int m[N][N]){//i==j
  int soma=0;
  
  for(int i=0; i<N; i++){ //00 01 02 - ij - N=3
    soma+=m[i][i];        //10 11 12
  }                       //20 21 22

  return soma;
}

int Secundaria (int m[N][N]){
  int i, j, soma=0;

  for(j=0, i=N-1; j<N; j++, i--){  //20 11 01 - ij
    soma+=m[i][j];
  }

  return soma;
}

int Verifica (int m[N][N]){
  int n;

  if(SomaLinhas(m)!=FALSE){
    n=SomaLinhas(m); 
  } else {
    return FALSE;
  }
  
  if((SomaLinhas(m)==n) && (SomaColunas(m)==n) && (Principal(m)==n) && (Secundaria(m)==n)){
    return TRUE;
  } else {
    return FALSE;
  }
}

int main(void) {
  int m[N][N]={1,2,3,6},m2[N][N]={2,2,2,2};

  printf("\n------------ MATRIZ -----------");
  exibe(m);
  if(Verifica(m)==TRUE){
    printf("\n\tTodas as somas resultam no mesmo valor!");
  } else {
     printf("\n\tNEM todas as somas resultam no mesmo valor!");
  }

  printf("\n\n\n------------ MATRIZ 2 -----------");
  exibe(m2);
  if(Verifica(m2)==TRUE){
    printf("\n\tTodas as somas resultam no mesmo valor!");
  } else {
     printf("\n\tNEM todas as somas resultam no mesmo valor!");
  }
  
  return 0;
}
