/* Exercício 1
Multiplicação de Matriz por Vetor
Elaborar um programa cuja entrada é uma matriz M de tamanho a×b, 0<a,b≤4 e 
um vetor v com b coordenadas.
A saída é o produto da matriz M pelo vetor v.
Utilize dupla precisão e 4 casas decimais depois da vírgula. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int li,co;
  
  printf("Tamanho da matriz A:\n");
  scanf("%d %d", &li ,&co);
  double m[li][co];
  printf("Matriz A:\n");
  for (int i=0; i<li;i++){
    for(int j=0;j<co;j++){
      scanf("%lf", &m[i][j]);
    }
  }
  printf("Digite o vetor com %d coordenadas:\n", co);
  double v[co];
  for(int i=0;i<co;i++){
    scanf("%lf", &v[i]);
  }
  double v2[li];
  for(int i=0;i<li;i++){
    for(int j=0;j<co;j++){
      v2[i]+=m[i][j]*v[j];
    }
  }
  printf("Produto de A por v:\n");
  for(int i=0;i<li;i++){
    printf("%.4lf\n", v2[i]);
  }
  return 0;
    
  }

/* Exercício 2
Multiplicação de Matrizes
Elaborar um programa cuja entrada são duas matrizes A de tamanho a×b e um matriz B 
de  tamanho b×c com a,b,c≤4.
A saída é o produto  A⋅B das matrizes.
Utilize dupla precisão e 4 casas decimais depois da vírgula. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int lia,coa,lib,cob;
    printf("Tamanho da matriz A:\n");
    scanf("%d %d", &lia ,&coa);
    printf("Tamanho da matriz B:\n");
    scanf("%d %d", &lib ,&cob);
    double ma[lia][coa];
    double mb[lib][cob];
    double mr[lia][cob];
  
    if(coa==lib){
        printf("Matriz A:\n");
        for (int i=0; i<lia;i++){
        for(int j=0;j<coa;j++){
            scanf("%lf", &ma[i][j]);
        }
        }
        printf("Matriz B:\n");
        for (int i=0; i<lib;i++){
        for(int j=0;j<cob;j++){
            scanf("%lf", &mb[i][j]);
        }
        }
        for(int i =0; i<lia;i++){
        for(int j=0; j<cob; j++){
            for(int k=0; k<coa;k++){
            mr[i][j]+=ma[i][k]*mb[k][j];
            }
        }
        }
        printf("Matriz AB:\n");
        for(int i=0;i<lia;i++){
        printf(" ");
        for(int j=0;j<cob;j++){
            printf("%.4lf", mr[i][j]);
            printf("  ");
        }
        printf("\n");
        }
    
    }
    else{
        printf("Dados incorretos.");
    }
    

}