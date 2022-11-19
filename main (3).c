#include <stdio.h>
#include <string.h>

//string -> vetor de caracteres -> matriz de caracteres

int main(void) {
char vNomes[50][12]; //pode armazenar até 50 strings, cada uma com no máximo 11 caracteres.

  //char nomedavariável [nº de strings] [nº de caract das strings];

  //Acessar uma string
  char meses[12][20] = {"Janeiro","Fevereiro" , "Março", "Abril", "Maio", "Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};

int dia, mes, ano;

printf("\nDigite o dia,mes e ano do evento: ");

scanf("%d%d%d",&dia,&mes,&ano);

printf("\nRio, %d de %s de %d",dia,meses[mes-1],ano);

  printf("\n---------------------------------\n");

  
  
  
  return 0;
}