/* Exercício 1
Leia um vetor Valores com n componentes do tipo double e

defina uma função para determinar a média entre os n elementos do vetor  Valores.

Teste a função fazendo uma chamada dentro da função "main".

Imprima o resultado solicitado com 2 casas após o ponto decimal.


Exemplo:

Entrada:                             Saída:

5 -9.5 4.9 5.3 0 3.6              0.86 */

#include <stdio.h>

double media(double[], int);

int main(){
  int lim;
  scanf("%d", &lim);
  double v[lim];
  for (int i=0; i< lim; i++){
    scanf("%lf", &v[i]);
    }
  printf("%.2lf", media(v, lim));
  
}

double media(double v[], int lim){
  double soma=0;
  double media;
  for (int i=0; i<lim; i++){
    soma+= v[i];
  }
  media=soma/lim;
  return media;
}

/* Exercício 7
Elaborar um programa para exibir em graus um ângulo dado em radianos.
Use uma função graus(). 

Utilize dupla precisão e imprima o resultado solicitado com 4 casas após o ponto decimal.
Valor de PI =  3.14159265358979323846

Exemplo

Entrada:           

Digite o angulo em radianos:

3.141593

Saída:

O angulo de 3.1416 radianos equivale a 180.0000 graus. */

#include <stdio.h>

double graus(double);
#define M_PI  3.14159265358979323846

int main(){
  double ang;
  printf("Digite o angulo em radianos:\n");
  scanf("%lf", &ang);
  
  printf("O angulo de %lf radianos equivale a %.4lf graus.", ang, graus(ang));
}

double graus(double ang){
  double a = (ang*180)/M_PI;
  return a;
}