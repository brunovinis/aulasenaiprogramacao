#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main(){

    printf("****************************************\n");
    printf("*Bem vindo ao nosso jogo de adivinhação*\n");
    printf("****************************************\n");
    //Imprime o cabeçalho do jogo
    

    int numerosecreto = 42;
    //int numerodetentativas = 5;
    int chute;

    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++){
        printf("tentativa %d de 5\n", i, NUMERO_DE_TENTATIVAS );
        // Mostra em que tentativa está
        printf("Qual é o seu chute?");
        scanf("%d", &chute);
        printf("Seu chute foi o número %d\n", chute);

        //int acertou = (chute == numerosecreto);
        //int maior = (chute > numerosecreto);
        //int menor = (chute < numerosecreto);

        if(chute<0){
            printf("Número invalido tente um numero maior que 0\n");
            i--;
            continue;
        }
        int acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);
        int menor = (chute < numerosecreto);

       
         if(acertou){
            printf("Parabéns, você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");
            // Parar de executar o for
            break;
        
        }
    
        else if(maior){
            printf("Você ERROU, seu chute foi maior que o número secreto\n");
        }else{
             printf("Você ERROU, seu chute foi menor que o número secreto\n");
        }
    }   
}
   


   

