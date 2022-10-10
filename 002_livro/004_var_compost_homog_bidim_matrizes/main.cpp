#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
// objetivo, criar uma Matriz em C para armazenar as notas do primeiro e segundo bimestre de dois aluno;	

	
	float notas [1][4];
	// aluno A
	printf("\n Notas do primeiro aluno:\n Digite a nota do Primeiro bimestre: ");
		scanf("%f", &notas [0][0]);
	printf("\n ................ Segundo bimestre: ");
		scanf("%f", &notas [0][1]);
	printf("\n ................ terceiro bimestre: ");
		scanf("%f", &notas [0][2]);
	printf("\n ................ quarto bimestre: ");
		scanf("%f", &notas [0][3]);
	
	//Aluno B	
	printf("\n Notas do segundo aluno:\n Digite a nota do Primeiro bimestre: ");	
		scanf("%f", &notas [1][0]);
	printf("\n ................ Segundo bimestre: ");
		scanf("%f", &notas [1][1]);
	printf("\n ................ terceiro bimestre: ");
		scanf("%f", &notas [1][2]);
	printf("\n ................ quarto bimestre: ");
		scanf("%f", &notas [1][3]);
		
	printf("\n Notas do aluno A: ");
	printf("\t %.1f", notas[0][0]);
	printf("\t %.1f", notas[0][1]);
	printf("\t %.1f", notas[0][2]);
	printf("\t %.1f", notas[0][3]);
	
	printf("\n Notas do aluno B: ");
	printf("\t %.1f", notas[1][0]);
	printf("\t %.1f", notas[1][1]);
	printf("\t %.1f", notas[1][2]);
	printf("\t %.1f", notas[1][3]);
	
	return 0;
}
