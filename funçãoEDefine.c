//Exercício 1
/* Elaborar um programa para exibir a distância entre dois pontos em R2. 
Use uma função dist2


Exemplo

Entrada:           

Digite as coordenadas do 1o. ponto:

0 0

Digite as coordenadas do 2o. ponto:

1 1

Saída:

Distancia entre os dois pontos: 1.414214

For example:

Input	Result
0 0
1 1
Digite as coordenadas do 1o. ponto:
Digite as coordenadas do 2o. ponto:
Distancia entre os dois pontos: 1.414214
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dist2(float, float, float, float);

int main(){
  float a, b, c, d;
  printf("Digite as coordenadas do 1o. ponto:");
  scanf("%f",&a);
  scanf("%f",&b);
  printf("Digite as coordenadas do 2o. ponto:");
  scanf("%f",&c);
  scanf("%f",&d);
  printf("Distancia entre os dois pontos: %f", dist2(a, b, c, d));
}

float dist2 (float a, float b, float c, float d){
  float x;
  x=sqrtf(((a-c)*(a-c))+((b-d)*(b-d)));
  
  return x;
}

//Exercício 4
/* Elaborar um programa para exibir o cosseno de um ângulo dado em graus.
Use uma função cosseno().


Exemplo

Entrada:           

Digite o angulo em graus:

45

Saída:

O cosseno de 45.000000 graus eh 0.707107 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  float a, x;
  printf("Digite o angulo em graus:");
  scanf("%f", &a);
  x = cos(a*M_PI/180);
  printf("O cosseno de %f graus eh %f", a, x);

}

//Exercício 6
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  float a, x;
  printf("Digite o angulo em radianos:\n");
  scanf("%f", &a);
  x = a*57.295780;
  printf("O angulo de %f radianos equivale a %f graus.",a, x); 
}

//Exercício 11
/* Elaborar um programa que informa se  dado um número inteiro e positivo  é primo ou se é composto.
Utilize variável int
Exemplo

Entrada                      Saída

Digite um numero inteiro e positivo: 

13                                Primo

Digite um numero inteiro e positivo: 

45                                Composto */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int a,i,count;
  count=0;
  printf("Digite um numero inteiro e positivo: ");
  scanf("%d", &a);
  for(i=1;i<=a;i++){
    if(a%i==0){
      count+=1;
    }
  }
  if(count>2){
    printf("Composto");
    
  }
  else{
    printf("Primo");
    
    }
    
}



