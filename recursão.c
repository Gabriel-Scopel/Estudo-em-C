/* Exercício 1
Implemente a função Pot que imprime o valor de xn, onde x∈R e n é um número inteiro.

Utilizar recursão, dupla precisão e 4 casas decimais depois da vírgula.

Exemplo:

Entrada                                                     Saída:
2  -3                                                           0.1250
5   3                                                           125 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double Pot (int,int);
int main(){
  int num=0;
  int exp=0;
  scanf("%d", &num);
  scanf("%d", &exp);
  printf("%.4lf",Pot(num,exp)) ;
}

double Pot(int num,int exp){
  double valor=num;
  if(exp>0){
    while(exp-1>0){
    return num*(Pot(num,exp-1)) ;
  }
  }
  if(exp==1){
    return num;
  }
  else{
    for(int i=0;i>exp+1;i--){
        valor=(valor*num);        
    }
    
    return 1/valor;
    }
    
  
  return 1; 
}

/* Exercício 2
Frequência de Números

Dada uma sequência de n números inteiros imprimir quantas vezes cada número aparece na entrada de dados, ou seja, deve-se escrever cada um dos valores distintos que aparecem na entrada por ordem crescente de valor.


Exemplo:

Entrada:                                                   
7
9
11
9
13
5
11
11
Saída:
5 aparece 1 vez(es)
9 aparece 2 vez(es)
11 aparece 3 vez(es)
13 aparece 1 vez(es) */

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
  int n;
  scanf("%d", &n);
  int v[n];
  for(int i=0;i<n;i++){
    scanf("%d", &v[i]);
  }
  for(int i=0;i<n;i++){
    if(v[i]<v[1+i]){
      v[i]=v[i+1];
      v[n]=v[0];
    }
  } 
  for(int i=0;i<n;i++){
    printf("%d\n", v[i]);
  }
  
} */

/* Exercício 3
Série Harmônica

Implemente, de forma recursiva, a série harmônica:

{\displaystyle \sum _{k=1}^{\infty }{\frac {1}{k}}=1+{\frac {1}{2}}+{\frac {1}{3}}+{\frac {1}{4}}+\cdots }


Utilizar recursão, dupla precisão e 4 casas decimais depois da vírgula.

Exemplo:

Entrada                                                     Saída:
1                                                                1
10                                                              2.9290 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double x=0;
double valor=0;

double sh(int);

int main(void) {
  int n;
  scanf("%d", &n);
  printf("%.4lf",sh(n));
}
double sh(int n){
  if(x==n){
    return valor;
  }
  else{
    x++;
    valor+=1/x;
    return sh(n);
  }
}

/* Exercício 4
Torre de Hanói

Torre de Hanói é um "quebra-cabeça" que consiste em uma base contendo três pinos, em um dos quais são dispostos alguns discos uns sobre os outros, em ordem crescente de diâmetro, de cima para baixo.

O problema consiste em passar todos os discos de um pino para outro qualquer, usando um dos pinos como auxiliar, de maneira que um disco maior nunca fique em cima de outro menor em nenhuma situação.

O número de discos pode variar sendo que o mais simples contém apenas três.

É interessante observar que o número mínimo de "movimentos" para conseguir transferir todos os discos da primeira estaca à terceira é 2n−1, sendo n o número de discos. 

Logo:

Para solucionar um Hanói de 4 discos, só necessários 15 movimentos

Para solucionar um Hanói de 7 discos, são necessários 127 movimentos

Para solucionar um Hanói de 15 discos, são necessários 32.767 movimentos

Para solucionar um Hanói de 64 discos, como diz a lenda, são necessários 18.446.744.073.709.551.615 movimentos.

Elaborar um programa que recebe um número inteiro positivo n e que imprima o número de movimentos para solucionar um Hanói de n discos.

Utilizar recursão.

Exemplo:

Entrada                                                     Saída:
Digite o numero de discos:                       Numero de movimentos com 15 discos: 32767.
15                        
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int count=0;
double valor=2;

double f(int );

int main(void) {
  printf("Digite o numero de discos:\n");
  int n;
  scanf("%d", &n);
  printf("Numero de movimentos com %d discos: %.0lf.",n,f(n));
}

double f(int n){
  if(count==n){
    return (valor/2)-1;
  }
  else{
    count++;
    valor=valor*2;
    return f(n);
  }
  return 1;
}