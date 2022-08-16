#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

void bsortcomentado(int v[], int n){
	int i,j;
	int t=0; //
	for(i=1;i<n;i++){                             
		for(j=0;j<n-i;j++){
			if(v[j]>v[j+1]){
				troca(&v[j],&v[j+1]);
				t = 1;//
			}
		}
		if (t == 0){//
			return 0;//
		}
	}
}
//**********************************************
int main(){
	int *vet, n,i;
	printf("Tamanho do vetor:");
	scanf("%d",&n);
	vet = malloc(sizeof(int)*n);// alocando o vetor dinamicamente
	geraVet(vet,n);
	printVetor(vet,n);
	bsort(vet,n);
	printf("Vetor ordenado:\n");
	printVetor(vet,n);
}
