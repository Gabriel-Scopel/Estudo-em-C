//Exercício 1
//Elaborar um programa para calcular e exibir o quadrado de apenas UM número inteiro.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    scanf("%d",&a);
    printf("%d",a*a);
      
return 0;
}

//Exercício 2
//Dados os coeficientes reais a, b e c, de um polinômio do segundo grau, com a diferente de zero. Elaborar um programa para calcular e exibir a abcissa do vértice da parábola. A saída deve ser um número com 4 casas após o ponto decimal. 

#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    
    printf("%.4f",-b/(2*a));
      
return 0;
}

//Exercício 3
//Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.
//Exemplo:
//456767
//126:52:47

#include <stdio.h>
#include <stdlib.h>

int main(){
    int tempo, hora, min, seg, resto;
    scanf("%d", &tempo);
    hora = tempo/3600;
    resto=tempo%3600;
    min=resto/60;
    seg=resto%60;
    
    printf("%d:%d:%d", hora, min, seg);
    
return 0;
}

//Exercício 4
//Leia 3 valores, no caso, variáveis Q, L e P, que são as três notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota Q tem peso 2, a nota L tem peso 3 e a nota P tem peso 5. Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
//O arquivo de entrada contém 3 valores com uma casa decimal, de dupla precisão (double)

#include <stdio.h>
#include <stdlib.h>

int main(){
    float Q,L,P;
    scanf("%f", &Q);
    scanf("%f", &L);
    scanf("%f", &P);
    
    printf("MEDIA = %.1f", (Q*2+L*3+P*5)/10);
      
return 0;
}

//Exercício 5
//Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.
//Exemplo:
//576
//5 nota(s) de R$ 100,00
//1 nota(s) de R$ 50,00
//1 nota(s) de R$ 20,00
//0 nota(s) de R$ 10,00
//1 nota(s) de R$ 5,00
//0 nota(s) de R$ 2,00
//1 nota(s) de R$ 1,00

#include <stdio.h>
#include <stdlib.h>

int main(){
    int v, a, b, c, d, e, f, g, h, i, j, k, l, m;
    scanf("%d", &v);
    a=v/100;
    printf("%d nota(s) de R$ 100,00\n", a);
    b=v-a*100;
    c=b/50;
    printf("%d nota(s) de R$ 50,00\n", c);
    d= v - ((a*100) + (c*50));
    e=d/20;
    printf("%d nota(s) de R$ 20,00\n", e);
    f=v-((a*100) + (c*50) + (e*20));
    g=f/10;
    printf("%d nota(s) de R$ 10,00\n", g);
    h=v-((a*100) + (c*50) + (e*20)+(g*10));
    i=h/5;
    printf("%d nota(s) de R$ 5,00\n", i);
    j=v-((a*100) + (c*50) + (e*20)+(g*10)+(i*5));
    k=j/2;
    printf("%d nota(s) de R$ 2,00\n", k);
    l=v-((a*100) + (c*50) + (e*20)+(g*10)+(i*5)+(k*2));
    m=l/1;
    printf("%d nota(s) de R$ 1,00\n", m);
    
return 0;
} 

//Exercício 6
//Dado um número de 3 algarismos construir outro número de quatro algarismos com a seguinte regra:
//a) os três primeiros algarismos, contados da esquerda para direita são iguais aos do número dado
//b) O quarto algarismo é um dígito de controle calculado da seguinte forma: Primeiro algarismo + segundo algarismo x 3 + terceiro algarismo x 5; 
//o dígito de controle é igual ao resto da divisão dessa soma por 7

#include <stdio.h>
#include <stdlib.h>

int main(){
  int num, result, num1, num2, num3;

  scanf("%d", &num);

  num1=(num/100) % 10;
  num2=(num / 10)%10;
  num3=num % 10;


  result = (num1+ (num2 * 3) + (num3 * 5)) % 7;

  printf("%d%d", num, result);

  return 0;
}