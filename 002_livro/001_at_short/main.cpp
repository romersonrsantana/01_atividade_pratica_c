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
	
	//como resolver a diferen�a entre ponto e v�rgula?
	// como declarar todas as respostas utilizando apenas um printf?
	// Objetivo da atividade, entender que as variaveis ocupam espa�os na memoria e como otimizar a aloca��o desses espa�os.
	// Boas pr�ticas, iniciar variaveis int e float com zero.
	
	
	return 0;
}
