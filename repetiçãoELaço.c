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

/* Exercíio 3
Elaborar um programa para exibir 4 números inteiros em ordem crescente.
Exemplo:
5 3 4 2
Saída
2 3 4 5 */

#include <stdio.h>

int main() {
  int a, b, c, d;
  scanf("%d%d%d%d", &a, &b, &c, &d);
  if (c>d && d>a && a>b){
    printf("%d %d %d %d", b, a, d, c);
  }
  else if(c>d && d>b && b>a){
    printf("%d %d %d %d", a, b, d, c);
  }
  else if(c>b && b>a && a>d){
    printf("%d %d %d %d", d, a, b, c);
  }
  else if(c>b && b>d && d>a){
    printf("%d %d %d %d", a, d, b, c);
  }
  else if(c>a && a>d && d>b){
    printf("%d %d %d %d", b, d, a, c);
  }
  else if(c>a && a>b && b>d){
    printf("%d %d %d %d", d, b, a, c);
  }
  else if (d>c && c>a && a>b){
    printf("%d %d %d %d", b, a, c, d);
  }
  else if(d>c && c>b && b>a){
    printf("%d %d %d %d", a, b, c, d);
  }
  else if(d>b && b>a && a>c){
    printf("%d %d %d %d", c, a, b, d);
  }
  else if(d>b && b>c && c>a){
    printf("%d %d %d %d", a, c, b, d);
  }
  else if(d>a && a>c && d>b){
    printf("%d %d %d %d", b, c, a, d);
  }
  else if(d>a && a>b && b>c){
    printf("%d %d %d %d", c, b, a, d);
  }
  else if (b>d && d>a && a>c){
    printf("%d %d %d %d", c, a, d, b);
  }
  else if(b>d && d>c && c>a){
    printf("%d %d %d %d", a, c, d, b);
  }
  else if(b>c && c>a && a>d){
    printf("%d %d %d %d", d, a, c, b);
  }
  else if(b>c && c>d && d>a){
    printf("%d %d %d %d", a, d, c, b);
  }
  else if(b>a && a>d && d>c){
    printf("%d%d%d%d", c, d, a, b);
  }
  else if(b>a && a>c && b>d){
    printf("%d %d %d %d", d, c, a, b);
  }
  if (a>d && d>c && c>b){
    printf("%d %d %d %d", b, c, d, a);
  }
  else if(a>d && d>b && b>c){
    printf("%d %d %d %d", c, b, d, a);
  }
  else if(a>b && b>c && c>d){
    printf("%d %d %d %d", d, c, b, a);
  }
  else if(a>b && b>d && d>c){
    printf("%d %d %d %d", c, d, b, a);
  }
  else if(a>c && c>d && d>b){
    printf("%d %d %d %d", b, d, c, a);
  }
  else if(a>c && c>b && b>d){
    printf("%d %d %d %d", d, b, c, a);
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

/* Exercício 5
Determinar se, dados os comprimentos de quatro varetas, é ou não possível 
selecionar três varetas, dentre as quatro, e formar um triângulo.
(Utilize números inteiros)
Exemplo de Entrada:               Exemplo de Saída:
5 3 4 9                            S   
5 3 9 8                            N */

#include <stdio.h>

int main() {
  int a, b, c, d;
  scanf("%d%d%d%d", &a, &b, &c, &d);		
  if ((c<d+a || c<a+b || d<a+b) && (c>d && d>a && a>b)){
    printf("S");    
    } 
  else if((c<d+b || c<d+a || d<b+a) && (c>d && d>b && b>a)){			
    printf("S");    
  }
  else if((c<b+d || c<b+a || b<d+a) && (c>b && b>d && d>a)){
    printf("S");		
  }
  else if((c<b+d || c<b+a || b<d+a) && (c>b && b>d && d>a)){
    printf("S");		
  }
  else if((c<a+d || c<a+b || a<d+b) && (c>a && a>d && d>b)){
    printf("S");		
  }
  else if((c<a+b || c<a+d || a<b+d) && (c>a && a>b && b>d)){
    printf("S");		
  }
  else if ((d<c+a || d<a+b || c<a+b) && (d>c && c>a && a>b)){
    printf("S");		
  }
  else if((d<c+b || d<c+a || c<b+a) && (d>c && c>b && b>a)){
    printf("S");		
  }
  else if((d<b+a || d<b+c || b<a+c) && (d>b && b>a && a>c)){
    printf("S");		
  }
  else if((d<b+c || d<b+a || b<a+c) && (d>b && b>c && c>a)){
    printf("S");		
  }
  else if((d<a+c || d<a+b || a<c+b) && (d>a && a>c && d>b)){
    printf("S");		
  }
  else if((d<a+b || d<a+c || a<b+c) && (d>a && a>b && b>c)){
    printf("S");		
  }
  else if ((b<d+a || b<d+c || d<a+c) && (b>d && d>a && a>c)){
    printf("S");		
  }
  else if((b<d+c || b<d+a || d<a+c) && (b>d && d>c && c>a)){
    printf("S");		
  }
  else if((b<c+a || b<c+d || c<a+d) && (b>c && c>a && a>d)){
    printf("S");		
  }
  else if((b<c+d || b<c+a || c<d+a) && (b>c && c>d && d>a)){
    printf("S");		
  }
  else if((b<a+d || b<a+c || a<d+c) && (b>a && a>d && d>c)){
    printf("S");		
  }
  else if((b<a+c || b<a+d || a<c+d) && (b>a && a>c && b>d)){
    printf("S");		
  }
  else if ((a<d+c || a<d+b || d<c+b) && (a>d && d>c && c>b)){
    printf("S");		
  }
  else if((a<d+b || a<d+c || d<b+c) && (a>d && d>b && b>c)){
    printf("S");		
  }
  else if((a<d+c || a<b+d || b<c+d) && (a>b && b>c && c>d)){
    printf("S");		
  }
  else if((a<b+d || a<b+c || b<d+c) && (a>b && b>d && d>c)){
    printf("S");		
  }
  else if((a<c+d || a<c+b || c<d+b) && (a>c && c>d && d>b)){
    printf("S");		
  }
  else if((a<c+b || a<c+d || c<b+d) && (a>c && c>b && b>d)){
    printf("S");		
  }
  else{
    printf("N");
  }
}

/* exercício 6
Elaborar um programa para exibir os múltiplos de um número compreendidos entre dois valores dados.
Exemplo de Entrada:               Exemplo de Saída:
5  9  20                          10 15 20
9  5  30                           9 18 27 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, c, i;
    scanf("%d%d%d", &a, &b, &c);
    for(i=b; i<=c;i++){
        if(i%a==0){
            printf("%d ", i);
        }
    }
}

/* Exercício 7
Elaborar um programa que gere o n-ésimo termo da sequência de Fibonacci.
Exemplo:

Entrada:             Saída:

1                         0

2                         1

3                         1

4                         2

6                         5 */

#include <stdio.h>

int main() {
  int i, n, ant, prox, soma;
  scanf("%d", &n);
  ant=0;
  prox=1;
  soma=0;
  for (i=1; i<=n-1; i++){
    soma=prox+ant; 
    ant=prox; 
    prox=soma; 
  }
  printf("%d", ant);
}

/* Exercício 8
Elaborar um programa que inverte números.
Exemplo:

Entrada:             Saída:

812                     218 */

#include <stdio.h>
#include <string.h>


int main() {
  char a[20];
  scanf("%s", a);
  int i;
  if (a[strlen(a)-1]=='0'){
    for(i=strlen(a)-2; i>=0; i--){
    printf("%c", a[i]);}
    
  }
  else
    for(i=strlen(a)-1; i>=0; i--){
    printf("%c", a[i]);}
  
}

/* Exercício 9
Elaborar um programa para exibir máximo divisor comum de 2 números inteiros.
Entrada:             Saída:

8 12                     MDC = 4 */

#include <stdio.h>

int main() {
  int a, b, i, r;
  scanf("%d %d", &a, &b);
  if (a>b){
    for (i=1;i<=a;i++){
      if(a%i==0 && b%i==0){
        r=i;
      }
      
    }
  }
  if(b>a){
    for (i=1;i<=b;i++){
      if(a%i==0 && b%i==0){
        r=i;
      }
    }
  }
  printf("MDC = %d", r);
  
}