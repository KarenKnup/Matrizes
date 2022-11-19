#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Considere uma loja que mantém em uma
matriz o total vendido por cada funcionário
pelos diversos meses do ano. Ou seja, uma
matriz de 12 linhas (uma por mês) e 10 colunas
(10 funcionários). Pede-se o desenvolvimento
de uma função para cada item abaixo:

    a. Calcular o total vendido durante o ano;

    b. Dado um mês (linha) fornecido pelo usuário,
    determinar o total vendido nesse mês;

    c. Dado um funcionário (coluna) fornecido pelo
    usuário, determinar o total vendido por ele
    durante o ano;

    d. Determinar o mês com maior índice de
    vendas;

    e. Determinar o funcionário que menos
    vendeu durante o ano.
  */

#define L 3
#define C 3

// L - meses / C - funcionários
//vendas[meses][funcionarios]

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
			m[i][j] = rand()%1001; //entre 0 e 1000 
		}
	}  
}

void Exibe (float m[L][C]){
  int i,j;

  printf("\n");
  for (i=0; i<L; i++){//linhas
    for (j=0; j<C; j++){//colunas
      printf("%.2f\t",m[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

float totalVendido (float vendas[L][C]){ //letra A
  int i,j;
  float soma=0;

  for (i=0;i<L; i++){
    for (j=0; j<C; j++){
      soma+=vendas[i][j];
    }
  }

  return soma;
}

float totalVendidoMes (int linha, float vendas[L][C]){ //letra B
  int j, soma=0;

  //Converte linha do usuário para o PC
  linha--; //diminui 1
  
    for (j=0; j<L; j++){//linhas
       soma+=vendas[linha][j];
  }

  return soma;
}

float totalVendidoFuncionario(int coluna, float vendas[L][C]){
  int i, soma=0; //letra C

  //Converte coluna do usuário para o PC
  coluna--; //diminui 1
  
  for(i=0; i<C; i++){
    soma+=vendas[i][coluna];
  }
  
  return soma;
}

int MesMaiorIndicedeVenda(float vendas[L][C]){ //letra D
  int i, mes=1;
  float maior=totalVendidoMes(1,vendas), total; //janeiro
 
      //fevereiro 
  for(i=2;i<=C;i++){//i<meses
    total=totalVendidoMes(i,vendas);
      if (total>maior){
        maior=total;
        mes=i;
      }
  }
  return mes;
}

int funcionarioMenorIndiceVendas (float vendas[L][C]) {//letra E
  float menor=totalVendidoFuncionario(1,vendas), total;
  int funcionario=1, j;

  for (j=2; j<C; j++){//j<funcionarios
    total=totalVendidoFuncionario(j,vendas);
      if (total<menor){
        menor=total;
        funcionario=j;
      }
    }
  return funcionario;
}

int main(void) {
   float vendas[L][C];
  int linha, coluna;

  preencheMatriz(vendas);
  Exibe(vendas);

  printf("\n------------------------------------------------\n");
  printf("\tO total vendido durante o ano foi R$%.2f",totalVendido(vendas)); //letra A
  printf("\n-------------------------------------------------\n");

  printf("Digite um mês: ");//letra B
  scanf("%d",&linha);
  printf("\n\tO total vendido no mês %d foi R$%.2f",linha,totalVendidoMes(linha,vendas)); 
printf("\n-------------------------------------------------\n");
  
  printf("Digite o número de um funcionário: ");//letra C
  scanf("%d",&coluna);
  printf("\n\tO total vendido pelo funcionário %d foi R$%.2f",coluna,totalVendidoFuncionario(coluna,vendas));

  printf("\n-------------------------------------------------\n");
  printf("\tO mês de maior venda é %d",MesMaiorIndicedeVenda(vendas));//letra D
  printf("\n-------------------------------------------------\n");
  printf("\tO funcionário de menor índice de vendas é o %d",funcionarioMenorIndiceVendas(vendas));//letra E
  printf("\n-------------------------------------------------\n");
  
  return 0;
}