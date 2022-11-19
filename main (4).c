#include <stdio.h>
#include <string.h>

# define MAXS 10 
# define MAXC 81

int busca (int n, char vstring[][MAXC], char str[]){
  int i;

  for (i=0; i<n; i++){
    if (strcmp(vstring[i],str)==0){
      return i; //i = posição do país no vetor vstring = posição da capital
    }
  }
  
  return -1;
}

int main(void) {
  //Escreva um programa interativo que aceite um nome de um país como entrada e imprima o nome de sua capital. O programa deve executar repetidamente até que seja digitada a palavra FIM.
  
char vPais[MAXS][MAXC]={"Canadá", "Inglaterra", "França", "El Salvador", "Estados Unidos"};
  
char vCapital[MAXS][MAXC]={"Ottawa", "Londres", "Paris", "San Salvador", "Washington"};

char pais[MAXC];  
int n=5, pos;

  printf("\nDigite um país (digite 'fim' para finalizar): ");
  scanf(" %[^\n]",pais);

  while (strcmp(pais,"fim")!=0){
    pos=busca(n,vPais,pais);
      if (pos==-1){
        printf("\n\t\t Não consta na relação de países!");
      } else { //pos=i -- posiçao do pais = posiçao da capital
        printf("\n\t\tCapital do país %s é %s",pais,vCapital[pos]);
      }

    printf("\n\nDigite um país (digite 'fim' para finalizar): ");
  scanf(" %[^\n]",pais);
  }
  
  return 0;
}