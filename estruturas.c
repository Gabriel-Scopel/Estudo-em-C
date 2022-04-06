/* Exercício 2
Elabore um programa cuja entrada seja uma data e cuja saída é essa data no formato abaixo:

Utilize estrutura.

Exemplo:

Entrada

Digite o dia:

23

Escreva o mes:

junho

Digite o ano:

2011

Saída

Data: 23/junho/2011 */

#include <stdio.h>
#include <stdlib.h>


struct{
int ano;
char mes[10];
int dia;
}Nasc;

int main(void){
  printf("Digite o dia:\n");
  scanf("%d", &Nasc.dia);
  printf("Escreva o mes:\n");
  scanf("%s", Nasc.mes);
  printf("Digite o ano:\n");
  scanf("%d", &Nasc.ano);
 printf("Data: %d/%s/%d\n", Nasc.dia, Nasc.mes, Nasc.ano);
}