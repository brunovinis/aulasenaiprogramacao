#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	// imprime o cabecalho do nosso jogo
printf("\n\n");
printf( "                  P  /_\\  P                          		\n" );
printf( "                 /_\\_|_|_/_\\                            	\n" );
printf( "             n_n | ||. .|| | n_n         Bem vindo ao    	\n" );
printf( "             |_|_|nnnn nnnn|_|_|     Jogo de Adivinha��o!	\n" );
printf( "            |     |  |_|  |     |                       	\n" );
printf( "            |_____| ' _ ' |_____|                        	\n" );
printf( "                  \\__|_|__/          						\n" );
printf("\n\n");															

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();
	int numerosecreto = numerogrande % 100;

	int chute;
	int tentativas = 1;

	double pontos = 1000;
	int novospontos = pontos * 2;
	int acertou = 0;
	int maior = chute > numerosecreto;

	int nivel;

	printf("qual o nivel de dificuldade?\n");
	printf("(1) F�cil (2) M�dio (3) Dificil\n\n");
	printf("Escolha:");
	scanf("%d", &nivel);

	int numerodetentativas;

	switch(nivel) {
		case 1:
			numerodetentativas = 20;
			break;
		case 2:
		    numerodetentativas = 15;
			break;
		default:
			numerodetentativas = 6;
			break;
	}
	/*if(nivel == 1) {
		numerodetentativas = 20;
	}
	else if (nivel == 2) {
		numerodetentativas = 15;
	}

	else {
		numerodetentativas = 6;
	}*/

	printf("%d\n", numerosecreto);

	for(int i = 1; i <= numerodetentativas; i++){
	
		printf("Tentativa %d\n", tentativas);
		printf("Qual e o seu chute?");

		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);
	
		if(chute < 0) {
			printf("Voce nao pode chutar numeros negativos\n");
			//i--;

			continue;
		}

		int maior = chute > numerosecreto;
		acertou = (chute == numerosecreto);

		if(acertou) {
			//printf("Parabens! Voce acertou!\n");
			//printf("Jogue de novo, voce e um bom jogador!!\n");

			break;
		}
			
		 if(maior) {
				printf("Seu chute foi maior que o numero secreto\n");
		}else {
			printf("Seu chute foi menor que o numero secreto\n");

		}
		tentativas++;
		
		double pontosperdidos = abs(chute - numerosecreto) / (double) 2;
		pontos = pontos - pontosperdidos;
	}
	//printf("%d\n", numerosecreto);
	printf("Fim de jogo!\n");

	if(acertou) {
	printf("\n\n");	
	printf("	     OOOOOOOOOOO                \n");      
	printf("         OOOOOOOOOOOOOOOOOOO            \n"); 
	printf("      OOOOOO  OOOOOOOOO  OOOOOO         \n"); 
	printf("    OOOOOO      OOOOO      OOOOOO       \n"); 
	printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO     \n"); 	
	printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO    \n"); 
	printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   \n"); 
	printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   \n"); 
	printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n"); 
	printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO    \n"); 
	printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO     \n"); 
	printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO      \n"); 
	printf("      OOOOOO   OOOOOOOOO   OOOOOO       \n"); 
	printf("         OOOOOO         OOOOOO          \n"); 
	printf("             OOOOOOOOOOOO               \n"); 
	printf("\n\n");
	
			printf("Parabens! Voce acertou!\n");
			printf("Voce acertou em %d tentativas\n", tentativas);
	        printf("Total de pontos %.1f\n", pontos);

		
	}else{
    printf("Voc� PERDEU! Tente de novo!\n");

	printf("   \\|/ ____ \\|/   \n");      
    printf("    @~/ ,. \\~@    \n");       
    printf("   /_( \\__/ )_\\   \n");     
    printf("      \\__U_/      \n"); 
		
	}
		

	//printf("Fim de jogo.\n");
	//printf("Voce acertou em %d tentativas\n", tentativas);
	//printf("Total de pontos %.2f\n", pontos);
}

   

