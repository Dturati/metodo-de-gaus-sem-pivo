#include <stdio.h>
#include <stdlib.h>

void aloca(float ***mt, int m, int n);
void preenche(float **mt, int m, int n);
void inicio();


int main(){

  inicio();
  return 0;

}

void inicio(){
  float **mt;
  int m,n;
  printf("Digite o número de linhas da matriz:");
  scanf("%d",&m);
  while(m<0){
    printf("Não existe matriz negativa:");
    scanf("%d",&m);
  }

  printf("Dogite o número de colunas da matriz:");
  scanf("%d",&n);
  while(n<0){
    printf("Não existe matriz negativa:");
    scanf("%d",&n);
  }

  aloca(&mt,m,n);
  preenche(mt,m,n);

}

void preenche(float **mt, int m, int n){
  register int i,j;
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      printf("%d%d:",i,j);
      scanf("%f",&mt[i][j]);
    }
  }

}

void aloca(float ***mt,int m, int n){
  register int i;
  *mt = malloc(m  * sizeof(float *));
  for (i=0;i<m;i++){
    (*mt)[i] = malloc(n * sizeof(float));
  }
}
