//Exercício 1
#include <stdio.h>
#include <stdlib.h>

//Função que organiza os elementos que pertencem a x3
int Organiza (int * v1, int *v2, int *v3, int n1, int n2)
{
    int qtd = n1;
    int fora = 1;
    for (int i = 0; i < n2; i++){
        for (int j = 0; j < n1; j++){
            if (*(v2 + i) == *(v1 + j)){
                fora = 0; 
               }
        }
        if (fora){
            qtd++;
            v3 = realloc(v3,(qtd)*sizeof(int));
            *(v3 + (qtd-1)) = *(v2 + i);
        }
        fora = 1;
    }
    return qtd;
};

int main() {
    int n1, n2, qtd;
    int *x1, *x2, *x3;

//Define o tamanho dos vetores
    printf("Insira o tamanho de x1\n");
    scanf("%d", &n1);
  
    printf("Insira o tamanho de x2\n");
    scanf("%d", &n2);
  
    x1 = malloc(n1*sizeof(int));
    x2 = malloc(n2*sizeof(int));
    x3 = malloc(n1*sizeof(int));

    //define os elementos de x1
    for (int i = 0; i < n1; i++){
        printf("Insira o valor do elemento %d do vetor x1:\n", i);
        scanf("%d", (x1+i));
        *(x3+i) = *(x1+i);
    }

    //definindo os elementos de x2
    for (int i = 0; i < n2; i++){
        printf("Insira o valor do elemento %d do vetor x2:\n", i);
        scanf("%d", (x2+i));
    }

  //chamada da função organiza
    qtd = Organiza(x1,x2,x3,n1,n2);
  
  //print do vetor x3
    printf("X3 = { %d", *(x3+0));
    for (int i = 1; i < qtd; i++){
        printf(", %d", *(x3 + i));
    }
    printf(" }");

    free(x1);
    free(x2);
    free(x3);
  }


//Exercício 2
#include <stdio.h>
#include <stdlib.h>

int main(void){
  //definição das variaveis
  int *x1,*x2,*x3, n1,n2, elem, qtd=0;
  int iguais = 0;
  
  printf("Digite o tamanho de x1:\n");
  scanf("%d", &n1); 
  x1 = malloc(n1*sizeof(int));
  
  for (int i=0; i<n1;i++){
    printf("Digite o elemento de x1: \n");
    scanf("%d", (x1+i));
  }
  
  printf("Digite o tamanho de x2:\n");
  scanf("%d", &n2);
  x2 = malloc(n2*sizeof(int));
  
   for (int i=0; i<n2;i++){
    printf("Digite o elemento de x2: \n");
    scanf("%d", (x2+i));
  }


  //definindo a intersecção
  x3 = malloc(sizeof(int));
  for (int i=0; i<n1;i++){
    for (int j=0; j< n2; j++){
      if (*(x1+i)==*(x2+j)){
        elem = *(x1+i);
        *(x3+qtd) = elem;
        qtd = qtd + 1;
        x3 = realloc(x3,qtd*sizeof(int));
        iguais = 1;
        }
      }
    } 

  if (iguais){
  printf("x3 irá conter {\n");
  printf("{ %d", *(x3+0));
  if (qtd!=1){
    for (int i=1;i<qtd;i++){
      printf(",%d",*(x3+i));
    }
  }
  printf(" }");
  }
    
  else{
    printf("Não existe intersecção entre os conjuntos");
  }
  
  free(x1);
  free(x2);
  free(x3);
}

//Exercício 3
#include <stdio.h>
#include <stdlib.h>

int ler(int *m, int);

int main() {
  int n, *m;
  printf("Digite a quantidade de elementos do vetor: ");
  scanf("%d", &n);
  m = malloc(n*sizeof(int));
  ler(m,n);
  
  for(int j=0;j<n;j++){
    printf("%d ", m[j]);
}
  free(m);  
}

int ler(int *m, int n){
  for(int i=0;i<n;i++){
    scanf("%d", &m[i]);
  }
  
  return 0;
}

//Exercício 4
#include <stdio.h>
#include <stdlib.h>

int main() {
  int **m1;
  m1 = malloc(3*sizeof(int*));
  for (int i=0; i<3; i++){
    m1[i]=malloc(3*sizeof(int*));
  }
  for(int i=0;i<3;i++){
    for(int j=0; j<3;j++){
      scanf("%d",(*(m1+i)+j));
    }
  }

  int **m2;
  m2 = malloc(3*sizeof(int*));
  for (int i=0; i<3; i++){
    m2[i]=malloc(3*sizeof(int*));
  }
  for(int i=0;i<3;i++){
    for(int j=0; j<3;j++){
      scanf("%d",(*(m2+i)+j));
    }
  }

  int m3[3][3];
  m3[0][0] = m1[0][0]*m2[0][0]+m1[0][1]*m2[1][0]+m1[0][2]*m2[2][0];
  m3[1][0] = m1[1][0]*m2[0][0]+m1[1][1]*m2[1][0]+m1[1][2]*m2[2][0];
  m3[2][0] = m1[2][0]*m2[0][0]+m1[2][1]*m2[1][0]+m1[2][2]*m2[2][0];
  m3[0][1] = m1[0][0]*m2[0][1]+m1[0][1]*m2[1][1]+m1[0][2]*m2[2][1];
  m3[1][1] = m1[1][0]*m2[0][1]+m1[0][1]*m2[1][1]+m1[1][2]*m2[2][1];
  m3[2][1] = m1[2][0]*m2[0][1]+m1[2][1]*m2[1][1]+m1[2][2]*m2[2][1];
  m3[0][2] = m1[0][0]*m2[0][2]+m1[0][1]*m2[1][2]+m1[0][2]*m2[2][2];
  m3[1][2] = m1[1][0]*m2[0][2]+m1[1][1]*m2[1][2]+m1[1][2]*m2[2][2];
  m3[2][2] = m1[2][0]*m2[0][2]+m1[2][1]*m2[1][2]+m1[2][2]*m2[2][2];

  for(int i=0;i<3;i++){
    printf("\n");
    for(int j=0; j<3;j++){
      printf("%7d ",m3[i][j]);
    }
  }
  
  

  for(int i =0; i<3; i++){
    free(m1[i]);
  }
  free(m1);
  
  for(int i =0; i<3; i++){
    free(m2[i]);
  }
  free(m2);
 
}