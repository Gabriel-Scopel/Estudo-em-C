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