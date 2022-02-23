/* Exercício 1
Elaborar um programa para exibir 2 números inteiros em ordem crescente.
Exemplo:
5 3
Saída
3 5 */

#include <stdio.h>

int main() {
  int a;
  int b;
  scanf("%d %d", &a, &b);
  if (a<b){
    printf("%d %d", a, b);
}
  else{
    printf("%d %d", b, a);
  }
  
  
}

/* Exercício 2
Elaborar um programa para exibir 3 números inteiros em ordem crescente.
Exemplo:
5 3 4
Saída
3 4 5 */

#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if (a>b && b>c){
    printf("%d %d %d", c, b, a);
}
  else if (a>c && b<c) {
    printf("%d %d %d", b, c, a);
  }
  else if (b>a && c<a) {
    printf("%d %d %d", c, a, b);
  }
  else if (b>c && a<c) {
    printf("%d %d %d", a, c, b);
  }
  else if (c>b && a<b) {
    printf("%d %d %d", a, b, c);
  }
  else {
    printf("%d %d %d", c, a, b);
  }
  
}

/* Exercício 4
Determinar se, dados os comprimentos de 3 varetas, é ou não é possível
formar um triângulo. (Utilize números inteiros)
Exemplo de Entrada:               Exemplo de Saída:
5 3 4                             S   
5 3 9                             N */

#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if ( a<b && b<c && c<a+b){
    printf("S");
  }
  else if (a<b && b<c && b<a+c){
    printf("S");
  }
  else if ( b<a && c<a && a<c+b){
    printf("S");
  }
  else if (b>a && b>c && b<a+c){
    printf("S");
}
  else if (c>a && a>b && c<a+b){
    printf("S");
  }
  else if (c>b && c>a && c<a+b){
    printf("S");
  }
  else{
    printf("N");
  }
}