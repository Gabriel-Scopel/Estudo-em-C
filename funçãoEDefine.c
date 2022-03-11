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

float dist2(int, int, int, int);

int main(){
  int a, b, c, d;
  printf("Digite as coordenadas do 1o. ponto:\n");
  scanf("%d",&a);
  scanf("%d",&b);
  printf("Digite as coordenadas do 2o. ponto:\n");
  scanf("%d",&c);
  scanf("%d",&d);
  printf("Distancia entre os dois pontos: %f", dist2(a, b, c, d));
}

float dist2 (int a, int b, int c, int d){
  float x;
  x=sqrt((a-c)*(a-c)+(b-d)*(b-d));
  
  return x;
}

/* Exercício 2
Elaborar um programa para exibir a distância entre dois pontos do R3. 
Use uma função dist3


Exemplo

Entrada:           

Digite as coordenadas do 1o. ponto:

0 0 0

Digite as coordenadas do 2o. ponto:

1 1 1

Saída:

Distancia entre os dois pontos: 1.732051 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dist3(float, float, float, float, float, float);

int main(){
  float a, b, c, d, e, f;
  printf("Digite as coordenadas do 1o. ponto:\n");
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);
  printf("Digite as coordenadas do 2o. ponto:\n");
  scanf("%f",&d);
  scanf("%f",&e);
  scanf("%f",&f);
  printf("Distancia entre os dois pontos: %f", dist3(a, b, c, d, e, f));
}

float dist3(float a, float b, float c, float d, float e, float f){
  float x;
  x=sqrt(((a-d)*(a-d))+((b-e)*(b-e))+((c-f)*(c-f)));
  
  return x;
}

/* Exercício 3
Elaborar um programa para exibir o produto escalar de dois vetores em R3. 
Use uma função prodEsc.


Exemplo

Entrada:           

Digite as coordenadas do 1o vetor:

2.8 9.4 -8.4

Digite as coordenadas do 2o vetor:

2.8 -4.2 3.7

Saída:

Produto Escalar: -62.719997 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float prodEsc(float, float, float, float, float, float);

int main(){
  float a, b, c, d, e, f;
  printf("Digite as coordenadas do 1o vetor:\n");
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);
  printf("Digite as coordenadas do 2o vetor:\n");
  scanf("%f",&d);
  scanf("%f",&e);
  scanf("%f",&f);
  printf("Produto Escalar: %f", prodEsc(a, b, c, d, e, f));
}

float prodEsc (float a, float b, float c, float d, float e, float f){
  float x;
  x=((a*d)+(b*e)+(c*f));
  
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
#define PI 3.1415926535

int main(){
  double a, x;
  printf("Digite o angulo em graus:\n");
  scanf("%lf", &a);
  x = cos(a*PI/180);
  printf("O cosseno de %lf graus eh %lf", a, x);

}

/* Exercício 5
Elaborar um programa para exibir o arco cujo cosseno é um valor x∈[-1, 1] .
Use uma função arccos()


Exemplo

Entrada:           

Digite o valor do arccos:

0.5

Saída:

O arccos de 0.500000 eh 60.00 graus. */

#include <stdio.h>
#include <math.h>
#define PI 3.1415926535
double arccos(double);
int main(){
    double a;
    printf("Digite o valor do arccos:\n");
    scanf("%lf", &a);
    printf("O arccos de %lf eh %.2lf graus.",a,arccos(a));
}
double arccos(double a){
    double x, y;
    x=acos(a);
    y=x*180/PI;
    return y;
}

//Exercício 6
/* Elaborar um programa para exibir em graus um ângulo dado em radianos.
Use uma função graus()


Exemplo

Entrada:           

Digite o angulo em radianos:

3.141593

Saída:

O angulo de 3.141593 radianos equivale a 180.000000 graus. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926535

int main(){
  double a, x=0;
  printf("Digite o angulo em radianos:\n");
  scanf("%lf", &a);
  x = (a*180)/PI;
  printf("O angulo de %.6f radianos equivale a %.6f graus.",a, x); 
}

/* Exercício 7
Elaborar um programa para exibir o módulo de um vetor em R3. 
Use uma função modulo() e variavel float


Exemplo

Entrada:           

Digite as coordenadas do vetor:

-1 2 4.5

Saída:

Modulo do vetor: 5.024938 */

#include <stdio.h>
#include <math.h>


int main(){
    float a, b, c, d;
    printf("Digite as coordenadas do vetor:\n");
    scanf("%f %f %f", &a, &b, &c);
    d = sqrt((a*a)+(b*b)+(c*c));
    printf("Modulo do vetor: %f",d);
}

/* Exercício 9
Elaborar um programa para exibir a média μ  de n números reais.

μ=∑ni=1xin

Utilize variável float


Exemplo

Entrada

4 1 2 3 4

Saída

Media = 2.500000 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a, b, soma,i, media;
    soma=0;
    scanf("%f", &a);
    for(i=1;i<=a;i++){
        scanf("%f", &b);
        soma+=b;
    }
    media=soma/a;
    printf("Media = %f", media);
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
  printf("Digite um numero inteiro e positivo: \n");
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



