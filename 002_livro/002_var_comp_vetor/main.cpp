#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int idade [2];
	
	
		printf("\n Digite um numero: ");
		scanf("%d",&idade[0]);
		printf("\n Digite mais um numero: ");
		scanf("%d", &idade[1]);
		printf("\n digite mais um numero: ");
		scanf("%d", &idade[2]);
		printf("\n O vetor correspondente a posicao [0] e: %d", idade[0]);
		printf("\n O vetor correspondente a posicao [1] e: %d", idade[1]);
		printf("\n O vetor correspondente a posicao [2] e: %d", idade[2]);
			printf("\n digite mais um numero: ");
			scanf("%d", &idade[3]);
			printf("\n O vetor correspondente a posicao [3] e: %d", idade[3]);
			printf("\n o valor correspondnte a posicao [1] e: %d", idade[1]);
	
	// mesmo eu definindo o tamnho do vetor ele aumenta a medida que os valores são inseridos.
	return 0;
}
