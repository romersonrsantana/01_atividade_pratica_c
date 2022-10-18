#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/* int resultado = 43%3;
	printf("Operacao modulo 43%3 = %d", resultado); */
	
	int numb;
	int divisor;
	
		printf("\n\t Calculo Modulo: \n\n Digite o dividendo: \n\n");
		scanf("%d", &numb);
		printf("\n Digite o divisor: \n\n");
		scanf("%d", &divisor);
		printf("\n Temos como resultado (resto da operacao): %d\n", numb%divisor);
		
	//considera somente a parte inteira do consciente, pesquisar.
	
	return 0;
}
