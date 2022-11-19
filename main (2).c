#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Desenvolver uma função que, dada uma matriz M15×10, determine se um número X se encontra na linha L da matriz.

#define L 15
#define C 10

#define TRUE 1
#define FALSE 0

void preencheMatriz (float m[L][C]){
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

void Exibir (float m[L][C]){
  //declaração de variáveis
	int i, j;
	
	printf ("\nElementos da matriz:\n\n");
	
	//varrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//varrendo as colunas
		for (j=0;j<C;j++)
		{
			printf ("%5.1f ", m[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n\n");
}

int buscarElemento (float m[L][C], float numero, int linha) {
  //declaração de variáveis
	int i, j;
	
	//tranformando linha de 1 a L (usuário) para 0 a L-1 (linguagem C)
	linha--;
	
	//varrendo a matriz
	for (i=0;i<L;i++)
	{
		for (j=0;j<C;j++)
		{
			//verificando se a linha 'i' é a linha desejada
			if (i == linha)
			{
				//verificando se o elemento foi encontrado
				//if (m[i][j] == numero)
        if (m[linha][j]==numero) //percorre apenas a linha passada por parâmetro.
				{
					return TRUE;
				}
			}
		}
	}
	
	  return FALSE;
  }

int main(void) {
  //Declaração de variáveis
  float m[L][C], num;
  int linha;

  //Preenchendo a matriz original
  preencheMatriz(m);

  //Exibindo a matriz original
  Exibir (m);

  //Perguntando o valor a ser buscado
	printf ("Entre com o valor a ser buscado: ");
	scanf ("%f",&num);
	
	//perguntando a linha ser percorrida
	printf ("Em qual linha deve ser feita a busca? ");
	scanf ("%d", &linha);
	
	//chamando a função
	if (buscarElemento (m, num, linha) == TRUE){
		printf ("\nO valor %.1f foi encontrado na linha %d da matriz!", num, linha);
	}
	else	{
		printf ("\nO valor %.1f NÃO foi encontrado na linha %d da matriz!", num, linha);
	}	
  
  return 0;
}