//Faca um algoritmo que leia dois numeros A e B e imprima o maior deles. Considere que os numeros informados nao serao iguais.


#include <stdio.h>

int main(){
	
	int numeroA, numeroB;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &numeroA);
	printf("Digite o segundo numero: ");
	scanf("%d", &numeroB);
	
	if (numeroA > numeroB)
		printf("O maior numero e: %d", numeroA);
	
	else
		printf("O maior numero e: %d", numeroB);
	
	
	return 0;
	
	
}