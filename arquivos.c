/* Exercício 1
Considere um arquivo que possui uma lista de números reais. Elabore um programa para determinar qual o maior valor, qual sua posição e quantos números possui esse arquivo.

Obs.: Utilize o arquivo: maiorR.txt

Exemplo:

Maior: # na posicao #


Total de Elementos: #

For example:

Result
Maior: 74.4600 na posicao 31
Total de Elementos: 32 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fr = fopen("maiorR.txt","r");
    
    int i, ind=0;
    float maior=0, num1;
    int total = sizeof(float)*sizeof(fr);
    
    
    for(i=0;i<sizeof(float)*sizeof(fr);i++){
        fscanf(fr,"%f", &num1);
        if(maior<num1){
            maior=num1;
            ind=i;
        }
    }

    printf("Maior: %.4f na posicao %d\n", maior, ind + 1);
    printf("Total de Elementos: %d\n", total);
}


//Exercício 2
/* Considere um arquivo que possui uma lista de, no máximo, 20 pares de números reais (valores x e y).

Elabore um programa para calcular o valor z=x2+y2, para cada par de valores, e colocar a tabela x,y,z. 

A saída deve ter, em cada linha, uma tripla de valores x,y,z. 

Utilize 4 casas decimais depois da vírgula.

Obs.: Utilize o arquivo: quadradoR.txt

Exemplo:

1.0000   2.0000  5.0000

3.0000   4.0000  25.0000

1.0000   6.0000  37.0000

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fr = fopen("quadradoR.txt", "r");

    float z;
    float x, y; 

    for(int i = 0; i < 8; i++){
        fscanf(fr, "%f %f", &x, &y);
        z = (x * x) + (y * y);
        printf("%.4f %.4f %.4f\n", x, y, z);
    }
    
    return 0;
}

/* Exercício 3
Considere um arquivo que possui uma lista de, no máximo, 20 linhas, onde cada linha possui o nome de um discente (apenas uma palavra) e a sua respectiva nota (0...10). 

Elabore um programa que mostre na tela do computador apenas os alunos que obtiveram nota maior ou igual a 5.0.

Utilize 1 casa decimal depois da vírgula.

Obs.: Utilize o arquivo: notasR.txt

Exemplo:

Artur 7.2

Maria 5.4

Rui  6.3 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fr = fopen("notasR.txt", "r");

    char Nome[500];
    float Nota;
    

    for (int i = 0; i < 500; i++){
        fscanf(fr, "%s %f", Nome, &Nota);
        if(Nota >= 5){
            printf("%s %.1f\n", Nome, Nota);
        }       
    }
    return 0;
}

/*Exercício 4
 Leia três vetores u, v e w com componentes do tipo float e de tamanho  n=3 de um arquivo.

Utilize funções para determinar o volume de um paralelepípedo formado pelos vetores  u, v e w.

O volume de um paralelepípedo é igual ao módulo do produto misto de u, v e w e

o produto misto de u, v e w é dado por:

(u,v,w)=u⋅(v×w),

assim o volume de um paralelepípedo é:

Volume=|(u,v,w)|

Teste a função fazendo uma chamada dentro da função "main".

Imprima o resultado solicitado com 4 casas após o ponto decimal.

Obs.: Utilize o arquivo prodMistoR.txt

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    
    FILE *fr = fopen("prodMistoR.txt","r");
    int k;
    int d1=0, d2=0, d3=0;
    float num1;
    float x[3]={}, y[3]={}, z[3]={} ;
    for (k = 0; k < 9; k++){
        fscanf(fr, "%f", &num1);
        if (k>=0 && k<3){
            if(d1==0 && d2==0 &&d3==0){
                x[d1]= num1;
                d1 +=1;
            }
            else if(d1==1 && d2==0 &&d2== 0){
                y[d2]= num1;
                d2 +=1;
            }
            else if(d1==1 && d2==1 && d3==0){
                z[d3]= num1;
                d3 +=1;
            }
            
        }
        else if(k>=0 && k<6){
            if(d1==1 && d2==1 &&d3==1){
                x[d1]= num1;
                d1 +=1;
            }
            else if(d1==2 && d2==1 &&d2== 1){
                y[d2]= num1;
                d2 +=1;
            }
            else if(d1==2 && d2==2 && d3==1){
                z[d3]= num1;
                d3 +=1;
            }
        }
        else if(k>=6 && k<9){
            if(d1==2 && d2==2 &&d3==2){
                x[d1]= num1;
                d1 +=1;
            }
            else if(d1==3 && d2==2 &&d2== 2){
                y[d2]= num1;
                d2 +=1;
            }
            else if(d1==3 && d2==3 && d3==2){
                z[d3]= num1;
                d3 +=1;
            }
        }
    }
    fclose(fr);
    printf("x = (%.4f, %.4f, %.4f)\n", x[0], x[1], x[2]);
    printf("y = (%.4f, %.4f, %.4f)\n", y[0], y[1], y[2]);
    printf("z = (%.4f, %.4f, %.4f)\n", z[0], z[1], z[2]);
    float valor = x[0]*((y[1]*z[2])-(y[2]*z[1])) - x[1]*((y[0]*z[2])-(y[2]*z[0])) + x[2]*((y[0]*z[1])-(y[1]*z[0]));
    printf("Volume: %.4f\n", sqrt(pow(valor,2)));
}

/* Exercício 5
Elabore um programa que exibe os valores abaixo solicitados de uma determinada empresa. 

Considere o arquivo empresaR.txt

A cada linha desse arquivo contém o primeiro nome do funcionário (string),

gênero (m ou f, char) e a idade (int), nesta ordem.

Exemplo:

Maria f 23

Valores Solicitados:

a quantidade total de funcionários;
o nome dos funcionários com mais de 25 anos e sua idade;
a quantidade de funcionários com mais de 25 anos de idade;
a quantidade total de funcionários do sexo feminino.

Saída:

Total de funcionarios: 10

Nome do funcionario +25: Artur   idade: 54
Nome do funcionario +25: Pedro   idade: 60
Nome do funcionario +25: Juca    idade: 30
Nome do funcionario +25: Bene    idade: 48
Nome do funcionario +25: Caio    idade: 32
Nome do funcionario +25: Dirce   idade: 45
Nome do funcionario +25: Maria   idade: 34

Total de funcionarios +25: 7

Total de funcionarias: 5
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fr = fopen("empresaR.txt", "r");
    int tam = sizeof(fr)+2;
    char nome[tam];
    char genero;
    int idade; 

    int total25 = 0;
    int totalf = 0;

    
    printf("Total de funcionarios: %d\n\n", tam);

    for (int i = 0; i < tam; i++){
        fscanf(fr, "%s %c %d", nome, &genero, &idade);
        if(idade>25){
            total25 = total25 + 1;
            printf("Nome do funcionario +25: %s idade: %d\n", nome, idade);
        }
        if(genero == 'f'){
            totalf = totalf + 1;
        }    
    }
    printf("\nTotal de funcionarios +25: %d\n", total25);
    printf("\nTotal de funcionarias: %d", totalf);
    return 0;
}