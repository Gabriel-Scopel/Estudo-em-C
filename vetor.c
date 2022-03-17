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
/* Exercício 2
Leia um vetor Taxas com n componentes do tipo double e

defina uma função para determinar o índice do maior valor dentre os n elementos do vetor  Taxas.

Teste a função fazendo uma chamada dentro da função "main". O resultado deverá ser do tipo int

Exemplo:

Entrada:                             Saída:

5 -9.5 4.9 5.3 0 3.6              2 */

#include <stdio.h>

int maior(double[], int);

int main(){
  int lim;
  scanf("%d", &lim);
  double Taxas[lim];
  for (int i=0; i< lim; i++){
    scanf("%lf", &Taxas[i]);
    }
  printf("%d", maior(Taxas, lim));
  
}

int maior(double Taxas[], int lim){
  int indice;
  int valor=Taxas[0];
  for(int i=0; i<lim;i++){
    if (Taxas[i]>valor){
      valor=Taxas[i];
      indice=i;
      
    }
  }
  return indice;
  
}

/* Exercício 3
Leia um vetor com n componentes do tipo int e

defina uma função para inverter os n elementos do vetor.

Exemplo:

Entrada:                             Saída:

5 9 5 3 7 1                          1 7 3 5 9 */ 

#include <stdio.h>

int inv(int[],int);

int main(){
  int lim;
  scanf("%d", &lim);
  int v[lim];
  for (int i=0; i< lim; i++){
    scanf("%d", &v[i]);
    }
  inv(v, lim);

}

int inv(int v[], int lim){
  for (int i=lim-1; i>=0; i--){
    printf("%d ", v[i]);
    }
  return 0;
  
}

/* Exercício 4
Leia um vetor Valores com n componentes do tipo double e

defina uma função para determinar o desvio padrão amostral s dos n elementos do vetor  Valores.

Teste a função fazendo uma chamada dentro da função "main".

Imprima os resultados do desvio padrão e a variância amostral s2  com 2 casas após o ponto decimal.


s=∑ni=1(xi−x¯¯¯)2n−1−−−−−−−−−−−−√

e

x¯¯¯=∑ni=1xin

Exemplo

Entrada

5 -5 6 -9 8 5

Saída

Desvio Padrao Amostral = 7.52

Variancia Amostral = 56.50 */

#include <stdio.h>
#include <math.h>

double calc(double[], int);
double calc2(double[], int);

int main(){
  int n;
  scanf("%d", &n);
  double v[n];
  for (int i=0; i<n; i++){
    scanf("%lf", &v[i]);
    }
  printf("Desvio Padrao Amostral = %.2lf\n",calc2(v, n));
  printf("Variancia Amostral = %.2lf", calc(v, n));
  
}

double calc(double v[], int n){
  double soma=0;
  double soma2=0;
  for (int i=0;i<=n;i++){
    soma+=v[i];
    soma2=soma2+(v[i]*v[i]); 
  }
  double vari=(soma2-(soma*soma)/n)/(n-1);
 

  return vari;
}
double calc2(double v[], int n){
  double soma=0;
  double soma2=0;
  for (int i=0;i<=n;i++){
    soma+=v[i];
    soma2=soma2+(v[i]*v[i]); 
  }
  double vari=(soma2-(soma*soma)/n)/(n-1);
  double desv=sqrt(vari);

  return desv;

  
}

/* Exercício 5
Leia um vetor x  com componentes do tipo double e de tamanho  n. 

Defina uma função para determinar o módulo do vetor  x,   |x|.

|x|=∑i=1nx2i−−−−−√ 

Teste a função fazendo uma chamada dentro da função "main".

Imprima o resultado solicitado com 2 casas após o ponto decimal.

Exemplo:

Entrada:                             Saída:

2 3 4                                   Modulo = 5.00 */

#include <math.h>
#include <stdio.h>

double calc(double[],int);

int main(){
  int lim;
  scanf("%d", &lim);
  double v[lim];
  for (int i=0; i<lim; i++){
    scanf("%lf", &v[i]);
    }
  printf("Modulo = %.2f", calc(v, lim));

}

double calc(double v[], int lim){
  double b=0;
  for (int i=0; i<lim; i++){
    double a=v[i]*v[i];
    b+=a;
    }
  return sqrt(b);
  
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