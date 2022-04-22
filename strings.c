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

/* Exercício 5
Leia uma string com tamanho máximo 60 e defina uma função com assinatura

void inverte (char *orig, int n)

que inverte a string.

Teste a função fazendo uma chamada dentro da função "main".

Obs.: Não utilize nenhuma biblioteca adicional.


Exemplo:

Entrada:                             Saída:

!@wesDFa+-3                     3-+aFDsew@!  */

#include <stdio.h> 
#include <stdlib.h>

void inverte (char *, int );

int main() {
  int n=0;
  char orig[61]={};
  fgets(orig,61,stdin);
  for (int i=0;i<61;i++){
    if(orig[i]!='\0'){
      n+=1;
    }
  }
  inverte(orig, n);
}
void inverte (char *orig, int n){
  for(int i=n; i>=0 ;i--){
    if(orig[i]!='\0' && orig[i] != '\n'){
      printf("%c", orig[i]);
    }
  }
  
}

/* Exercício 6
Leia duas strings com tamanho máximo 50 e defina funções que calculem a soma dos números de cada string. 

Teste a função fazendo uma chamada dentro da função "main".

Obs.: Não utilize nenhuma biblioteca adicional.


Exemplo:

Entrada:                             Saída:

ab2dc1*cU                          371             (21 + 350 = 371) 

TR$3uty5Yg0y   */

#include <stdio.h>
#include <stdlib.h>

int main() {
  char str1[51]={};
  fgets(str1,51,stdin);
  char str2[51]={};
  char r1[51]={};
  char r2[51]={};
  fgets(str2,51,stdin);
  for (int i=0;i<51;i++){
    if(str1[i]<='9' && str1[i]>='0' && str1[i]!='\0'){
      r1[i]= (int)str1[i];
    }
  }
 for (int i=0;i<51;i++){
    if(str2[i]<='9' && str2[i]>='0' && str2[i]!='\0'){
      r2[i]=str2[i];
    }
   }
  }

/* exercício 7
Implemente um programa denominado combinador, que recebe duas strings e deve combiná-las, alternando as letras de cada string, começando com a primeira letra da primeira string, seguido pela primeira letra da segunda string, em seguida pela segunda letra da primeira string, e assim sucessivamente. 
As letras restantes da cadeia mais longa devem ser adicionadas ao fim da string resultante e retornada.


Obs.: Não utilize nenhuma biblioteca adicional.


Exemplo:

Entrada:                             Saída:

Tpo oCder                           TopCoder                  

aa bb                                   abab
 */

#include <stdio.h>
#include <stdlib.h>
void combinador(char *, char *);

int main() {
  char str1[51]={};
  fgets(str1,51,stdin);
  char str2[51]={};
  fgets(str2,51,stdin);
  combinador(str1,str2);
}
void combinador(char *str1,char *str2){
  for( int i=0; i<51; i++){
    if(str1[i]!='\0' && str1[i]!='\n'){
      printf("%c", str1[i]);
    }
    if((str2[i]!='\0' && str2[i]!='\n'))
    {
      printf("%c", str2[i]);
    }
  }
}
