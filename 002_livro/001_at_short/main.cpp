#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	short int idade = 0;
	float altura = 0;
	
		printf("\n Digite sua idade: ");
		scanf("%d", &idade);
		printf("\n Digite sua altura utilizando 'ponto': ");
		scanf("%f", &altura);
		printf("\n Voce tem %d anos de idade.\n", idade);
		printf("\n Voce tem %.2f de altura.\n", altura);
	
	//como resolver a diferenÇa entre ponto e vÍrgula?
	// como declarar todas as respostas utilizando apenas um printf?
	// Objetivo da atividade, entender que as variaveis ocupam espaços na memoria e como otimizar a alocação desses espaços.
	// Boas práticas, iniciar variaveis int e float com zero.
	
	
	return 0;
}
