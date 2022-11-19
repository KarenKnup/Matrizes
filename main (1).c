#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Faça uma função que, dada uma matriz M8×5 de reais, gere a matriz Mt, sua transposta.

/*a12 -> vira a21

  */

#define L 8
#define C 5

void transposta (float m[L][C], float mt[C][L]){
  int i,j;

  for(i=0;i<L;i++){
    for (j=0;j<C;j++){
      mt[j][i]=m[i][j];
    }
  }
}

void Exibir (float m[L][C]){
  //declaração das variáveis
  int i,j; //matriz original -- i(linhas) e j(colunas)

  printf("\nElementos da matriz:\n");
  
  //varrendo as linhas da matriz
  for (i=0;i<L;i++){

    //varrendo as colunas da matriz
    for (j=0;j<C;j++){
      printf("%.1f\t",m[i][j]);
    }
    printf("\n");
  }
}

void Exibir_Transposta (float mt[C][L]) {
  //declaração das variáveis
  int i,j; //matriz original -- i(linhas) e j(colunas)

  printf("\nElementos da matriz:\n");
  
  //varrendo as linhas da matriz
  for (i=0;i<L;i++){

    //varrendo as colunas da matriz
    for (j=0;j<C;j++){
      printf("%.1f\t",mt[i][j]);
    }
    printf("\n");
  }
}

void Preencher_Matriz (float m[L][C]){
   //declaração das variáveis
  int i,j; //matriz original -- i(linhas) e j(colunas)

  srand(time(NULL));
  //varrendo as linhas da matriz
  for (i=0;i<L;i++){
    //varrendo as colunas da matriz
    for (j=0;j<C;j++){
      m[i][j]=rand()%101;
    }
  }
}

int main(void) {
//Declaração de variáveis
  float matriz[L][C], matriz_transposta[C][L];

  //Preenchendo a matriz original
  Preencher_Matriz(matriz);

  //Exibindo a matriz original
  Exibir(matriz);

  //Chamando a função
  transposta(matriz, matriz_transposta);

  //Exibir transposta
  Exibir_Transposta(matriz_transposta);
  
  
  return 0;
}