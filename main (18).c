#include <stdio.h>

/*
  Dada uma matriz MLINHAxCOLUNA, onde LINHA e
COLUNA são constantes, e uma linha L,
desenvolver uma função que retorne um vetor
de tamanho COLUNA contendo, em cada
posição, a quantidade de vezes que os
elementos da linha L encontram-se nas demais
linhas da matriz.
  */

#define L 5
#define C 5

void ExibeM (int m[L][C]){
  int i,j;

  for(i=0; i<L; i++){//linhas
    for (j=0; j<C; j++){//colunas
      printf("%d\t", m[i][j]);
    }
    printf("\n"); //pula p próx linha
  }
}


int busca (int l, int m[l][C], int num){
  int i,j, quant=0;

    l--;
  
  for (j=0; j<C; j++){
     if (m[l][j]==num){
       quant++;
           } 
     }
  
    return quant;
}

void exibeV(int v[C]){
  int i;  
  printf("\n");
  for (i=0 ; i<C ; i++ ){
    printf("%d  ", v[i]);
  }
}

void Matriz (int m[L][C], int l, int v[C]){  
  int i,n,j;
  
  l--; //transforma linha digitada para leitura do PC
      //linha 1(humano)=linha 0(PC)
  
  for (j=0; j<C; j++){//colunas
      v[j]=0; //vetor coluna começa com zero
    for (i=0; i<L; i++ ){//linhas
      for (n=0; n<C && i!=l; n++){//n (todas as colunas) e todas as linhas menos l
        if (m[l][j]==m[i][n]){
            v[j]++; //v[j]=v[j]+1
        }
      }
    } //3 2 1 3 2 - linha 4
  }
}

int main(void) {

  int m[L][C]={1,5,7,1,6,
               6,2,1,4,7,
               3,6,9,7,1,
               2,4,5,7,4,
               2,4,8,9,2};
  int v[C];
  int l;
  
  ExibeM(m);
  
  printf("\nQual a linha: ");
  scanf("%d", &l);
  
  Matriz(m, l, v);  
  exibeV(v);
  
  
  return 0;
}