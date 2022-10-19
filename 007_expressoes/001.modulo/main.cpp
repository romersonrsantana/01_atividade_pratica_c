#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

/*Estes operadores funcionam apenas com operarores inteiros, ou seja, variáveis do tipo int;*/
	
	int numb, divisor, resp_div, resp_mod;
	
		printf("\n\t Calculo DIV e Modulo: \n\n Digite o primeiro valor: \n\n");
		scanf("%d", &numb);
		
		printf("\n Digite o segundo valor: \n\n");
		scanf("%d", &divisor);
		
		resp_div = numb / divisor;
		resp_mod = numb % divisor;
		
		printf("\n Temos como resultado de: %d DIV %d o valor (inteiro) de: %d \n", numb, divisor, resp_div);
		printf("\n Temos como resultado de: %d MOD(%) %d o valor(resto da divisao) de: %d \n", numb, divisor, resp_mod);
		
		if(numb < divisor){
			
			printf("\n Quando o primeiro valor e menor que o segundo, a DIV sera sempre 0 (zero) \n\n e o MOD sera o primeiro valor(dividendo) \n\n neste caso %d", numb);
			printf("\n\n Isso acontece porque a DIV e o Modulo(%), consideram apenas o resultado inteiro na divisao");
		
		}else{
		
		printf("\n Perceba que os resultados sao diferentes de uma divisao comum\n");
	
		printf("\n Programa concluido com sucesso!/n");
		}
		.
	
	return 0;
}
