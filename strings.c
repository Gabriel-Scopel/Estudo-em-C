/* Exercício 1
Leia uma string com tamanho máximo 50 e defina uma função com assinatura

int tamanho (char *s)

que retorne o tamanho dessa string.


Teste a função fazendo uma chamada dentro da função "main".

Obs.: Não utilize nenhuma biblioteca adicional.


Exemplo:

Entrada:                             Saída:

!@wesDFa+-3                     11 */

#include <stdio.h> 


int tamanho (char []);

int main() {
  char s[51];
  fgets(s,51,stdin);
  printf("%d", tamanho(s));
}
int tamanho (char *s){
  int i=0;
  int count = 0;
  while(s[i]!='\0'){
      count+=1;
      i++;
  }
  return count-1;
}

/* Exercício 2
Leia uma string com tamanho máximo 50 e defina uma função com assinatura

void maiusculas (char *s)

que retorne a quantidade de caracteres maiúsculos.


Teste a função fazendo uma chamada dentro da função "main".

Obs.: Não utilize nenhuma biblioteca adicional.


Exemplo:

Entrada:                             Saída:

!@wesDFa+-3                     2 */

#include <stdio.h> 


int maiusculas (char []);

int main() {
  char s[51]={};
  fgets(s,51,stdin);
  printf("%d", maiusculas(s));
}
int maiusculas (char *s){
  int count = 0;
  for(int i=0; i<51;i++){
    if(s[i]>='A' && s[i]<='Z'){
      count+=1;
    }
    
  }
  return count;
}

/* Exercício 3
Leia uma string com tamanho máximo 50 e defina uma função com assinatura

void minusculas (char *s)

que retorne a quantidade de caracteres minúsculos.


Teste a função fazendo uma chamada dentro da função "main".

Obs.: Não utilize nenhuma biblioteca adicional.


Exemplo:

Entrada:                             Saída:

!@wesDFa+-3                     4
 */

#include <stdio.h> 


int minusculas (char []);

int main() {
  char s[51]={};
  fgets(s,55,stdin);
  printf("%d", minusculas(s));
}
int minusculas (char *s){
  int count = 0;
  for(int i=0; i<55;i++){
    if(s[i]>='a' && s[i]<='z'){
      count+=1;
    }
    
  }
  return count;
}
/* 
Exercício 4
Leia uma string com tamanho máximo 50 e defina uma função com assinatura

void inverteMaiusMinus (char *s, int n)

que imprime os caracteres maiúsculos em minúsculos e os caracteres minúsculos em caracteres maiúsculos.


Teste a função fazendo uma chamada dentro da função "main".

Obs.: Não utilize nenhuma biblioteca adicional.


Exemplo:

Entrada:                             Saída:

!@wesDFa+-3                     !@WESdfA+-3  */

#include <stdio.h> 

void inverteMaiusMinus (char *s, int);

int main() {
  int n=32;
  char s[51]={};
  fgets(s,51,stdin);
  inverteMaiusMinus(s, n);
}
void inverteMaiusMinus(char *s,int n){
  for(int i=0; i<51;i++){
    if(s[i]>='a' && s[i]<='z'){
      s[i]=s[i]-n;
    }
    else if(s[i]>='A' && s[i]<='Z'){
      s[i]=s[i]+n;
    }
  }
  for(int i=0;i<51;i++){
    if(s[i]!='\0'){
      printf("%c", s[i]);
    }
    
  }
}
