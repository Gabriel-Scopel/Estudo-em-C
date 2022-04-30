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