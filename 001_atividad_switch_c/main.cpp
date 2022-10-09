#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
int num, esc_1, esc_2, esc_3, esc_5, esc_6;

do{
	printf("\n\n\tDigite um numero com sua opção desejada:\n ");
	printf("\n\n\t\t(1) Musica. \n\n\t\t(2) Cinema. \n\n\t\t(3) Futebol. \n\n\t\t(4) outras opcoes. \n\n\t\t(5) Eventos. \n\n\t\t(6) Viagens \n\n\t\t ");
	scanf("%d", &num);

}while((num<1) || (num>6));

switch (num){
	
	
	case 1: do{printf("\n\n\t\t Parabens pela escolha!! \n\n\t\t voce gosta de qual estilo? \n\n\t\t(1) Rock \n\n\t\t(2) mpb \n\n\t\t(3) Sertanejo \n\n\t\t(4) Outras opcoes \n\n\t\t");
			scanf("%d", &esc_1);
			}while((esc_1 < 1) || (esc_1 > 4));
		
		switch (esc_1){
			
			case 1: printf("\n\t Bom saber que curte um Rock!! Dia 13 de julho é o dia Mundial do Rock!\n A historia do rock comecou com influencia cultural da musica dos escravos\n vindos da Africa. Nas colheitas de algodao os escravos cantavam para celebrar\n sua espiritualidade e seus ancestrais, cantavam tambem sobre suas mazelas\n da escravidao.\n");			
				break;
			
			case 2: printf("\n\t Entao voce prefere o estilo musical MPB ou como ficou conhecida no Pais nos anos 60: 'A musica da universidade'.\n Um dos marcos do inicio da MPB foi ainterpretacao da musica 'Arrastao' de\n Vinicius de Moraes e Edu Lobo por Elis Regina.\n ");			
					printf("'Dispara' de Geraldo Vandre e 'A banda' de Chico Buarque tambem marcaram o\n surgimento desse novo estilo musical.");			
				break;
				
			case 3: printf("\n\t Voce sabia que a viola, principal instrumento da musica sertaneja\n\n de raiz, chegou ao Brasil no periodo colonial por meio dos jejuitas\n\n com o intuito de catequizar os nativos? \n\n  ");	
				break;
			
			case 4: printf("\n\t Infelizmente nao ainda nao tenho curiosidades sobre sobre seu estilo favorito! \n\n\t espero colocar em breve! agradeco o contato!\n\n");			
				break;	
		}							
	break;
	
	case 2: do{printf("\n\n\t\t E bom saber que gosta de filmes!! \n\n\t\t qual seu genero favorito?\n\n\t\t(1) Terror, \n\n\t\t(2) Comedia \n\n\t\t(3) Suspense, \n\n\t\t(4) Ficcao, \n\n\t\t(5) Aventura \n\n\t\t(6) OUTRO\n\n\t\t");	
			scanf("%d", &esc_2);
			}while((esc_2 < 1) || (esc_2 > 7));
			
	switch (esc_2){
		
		case 1 : 
			printf("\n\n\t\t Voce escolheu terror!! \n\n\t\t O primeiro longa de terror surgiu em 1920: \n\n\t\t O Gabinete do Doutor Caligari.\n\n");
			break;
			
		case 2 :
			printf("\n\n\t\t Voce escolheu comedia!\n\n\t\t O filme frances L'arroeseur arrose. \n\n\t\t ('O Regador Regado') dos irmaos Lumiere. \n\n\t\t E Considerado a primeira comedia da historia do cinema.\n\n");
			break;
		
		case 3 :
			printf("\n\n\t\t Voce conhece 'O mestre do Suspense'?\n\n\t\t Alfred Joseph Hitchoock nasceu em Londres em 1899.");
			printf("\n\n\t\t Eleito em 2002 o segundo maior diretor da historia do cinema.\n\n");
			break;
		
		case 4 :
			printf("\n\n\t 'Viagem a Lua' e considerado por muitos o primeiro filme de ficcao\n\n da historia do cinema.\n\n Lancado em 1902, essa producao francesa foi inspirada em dois livros: ");
			printf("\n\n 'Da Terra a Lua' de Julio Verne e 'Os Primeiros Homens da Lua' de H.G. wells.\n\n Esse filme teve direcao de Georges Melies com assistencia\n\n de seu irmao Gaston Melies\n\n");
			break;
			
		case 5:
			printf("\n\n\t A tematica de aventura chegou ao cinema gracas aos livros de: \n\n Emilio Salgari, Julio Verne, Edgar Rice, entre outros. \n\n Suas obras literarias foram e ainda sao grandes fontes de inspiracao.\n\n");
			break;
			
		case 6:
			printf("\n\n\t\t Infelizmente seu genero preferido ainda nao foi incluido! \n\n\t\t Obrigado por chegar ate aqui!\n\n\t\t");
			break;
	}
	break;
	case 3: do{
		printf("\n\n\t\t Voce assiste com mais frequencia: \n\n\t\t(1) Campeonato brasileiro. \n\n\t\t(2) Champeons League \n\n\t\t(3) Outros Campeonatos\n\n\t\t");
		scanf("%d", &esc_3);
	}while((esc_3 < 1) || (esc_3 > 3));
			
		switch(esc_3){
			
			case 1:
				printf("\n\n\t O campeonato brasileiro, conhecido como brasileirao surgiu em 1959.\n\n A competicao era conhecida como Taca Brasil, logo depois foi unificada\n\n pela CBF como o inicio do que veio a ser conhecido como Campeonato Brasileiro,\n\n principal competicao de futebol do Brasil.\n\n");
				break;
			case 2:
				printf("\n\t A Champions League foi criada em 1955, inicialmente a competicao era\n\n chamada de 'Copa dos Clubes Campeoes Europeus'. A final aconteceu no dia 16 de\n\n junho de 1956 entre Real Madri e Stade Reims e teve o Real Madri como\n\n o primeiro campeao da competicao.\n\n");
				break;
			case 3:
				printf("\n\n\t\t Infelizmente ainda nao consta curiosidades\n\n\t\t sobre outros campeonatos! Obrigado por chegar ate aqui!\n\n");
				break;
	}
	break;
	
	case 4: 
		printf("\n\n\t\t E uma pena que nenhuma das escolhas foi a sua preferida! \n\n\t\tAgradeco por ter chegado ate aqui! \n\n\t\tEm breve colocaremos mais opcoes!\n\n");
		break;
			
	case 5: do{
		printf("\n\n\t\t Bom saber que voce gosta de eventos!\n\n\t\t Qual e seu tipo de evento favorito? \n\n\t\t");
		printf("\n\n\t\t(1) Show \n\n\t\t(2) Festivais de musica \n\n\t\t(3) Festivais Gastronomicos \n\n\t\t(4) Outros\n\n\t\t ");
		scanf("%d", &esc_5);
	}while((esc_5 < 1) || (esc_5 > 4));	
	
		switch (esc_5){
			
			case 1: 
				printf("\n\n\t Voce sabia que o maior show da historia teve...\n\n");
				break;
				
			case 2:
				printf("\n\n\t Glastonbury e um dos festivais mais antigos do planeta! Acontece todo \n\n ano desde 1970 na Inglaterra em uma Vila com pouco mais de 1.000 habitantes.\n\n");
				break;
				
			case 3:
				printf("\n\t Para os amantes de alho ou para aqueles que ainda nao se apaixonaram\n\n por esse tempero ");
				printf("\n\n Garlic Festival apresenta receitas que tem como principal ingrediente o alho. \n\n Realizado no mes de agosto na Inglaterra tem cerca de\n\n 300 estandes com muitos entretenimentos. ");
				printf("\n\n Um outro ingrediente que nao pode faltar e a solidariedade, \n\n ja que durante o evento sao \n\n arrecados recursos financeiros para instituicoes de caridade.\n\n");
				break;
				
			case 4:
				printf("\n\n\t\tAinda nao temos curiosidades sobre outros festivais! \n\n\t\tObrigado por chegar ate aqui!\n\n");
				break;
		}	
		break;
		
	case 6: do{
		
		printf("\n\n\t\t Entao voce curte uma viagem? \n\n\t\t Voce prefere viagens: \n\n\t\t(1) Nacionais \n\n\t\t(2) Internacionais \n\n\t\t(3) Todas as duas \n\n\t\t");
		scanf("%d", &esc_6);
		
	}while((esc_6 <1) || (esc_6 > 3));
	
		switch(esc_6){
			
			case 1: 
				printf("\n\n\t No Brasil os tres pontos turisticos mais visitado sao: Cristo Redentor\n\n no Rio de Janeiro, Centro historico de Ouro Preto em Minas Gerais e o Parque\n\n do Ibirapuera em Sao Paulo.\n\n");
				break;
				
			case 2:
				printf("\n\n\t Os tres pontos turisticos mais visitados do mundo são: A Torre Eiffel\n\n em Paris, as Piramides de Gize, Gize e o Coliseu na Roma.\n\n ");
				break;
				
			case 3:
				printf("\n\n\t As primeiras viagens maritimas aconteceram durante o seculo XV.\n\n O intuito das grandes navegações eram explorar o Oceano Atlantico o \n\n primeiro Pais a ter condicoes, necessarias para iniciar o periodo\n\n de Grandes Navegacoes foi Portugal \n\n");
				break;
		
		break;
			
												
}
return 0;
}
}
