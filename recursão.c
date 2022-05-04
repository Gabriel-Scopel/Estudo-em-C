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