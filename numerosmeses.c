#include  <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vinícius da Silva\n\n");

    int numeroEscolhido;

    printf("Digite um numero inteiro de 1 a 12 correspondente ao mes desejado:");
    scanf("%d", &numeroEscolhido);

    if(numeroEscolhido == 1){
        printf("O numero corresponde ao mes de janeiro");
    }

    if(numeroEscolhido == 2){
        printf("O numero corresponde ao mes de Fevereiro");
    }

    if(numeroEscolhido == 3){
        printf("O numero corresponde ao mes de Março");
    }

    if(numeroEscolhido == 4){
        printf("O numero corresponde ao mes de Abril");
    }

    if(numeroEscolhido == 5){
        printf("O numero corresponde ao mes de Maio");
    }

    if(numeroEscolhido == 6){
        printf("O numero corresponde ao mes de junho");
    }

    if(numeroEscolhido == 7){
        printf("O numero corresponde ao mes de julho");
    }

    if(numeroEscolhido == 8){
        printf("O numero corresponde ao mes de Agosto");
    }
    if(numeroEscolhido == 9){
        printf("O numero corresponde ao mes de Setembro");
    }

    if(numeroEscolhido == 10){
        printf("O numero corresponde ao mes de Outubro");
    }

    if(numeroEscolhido == 11){
        printf("O numero corresponde ao mes de Novembro");
    }

    if(numeroEscolhido == 12){
        printf("O numero corresponde ao mes de Dezembro");
    }

    if(numeroEscolhido == 0){
        printf("O numero nao corresponde a nenhum mes do ano");
    }
    
    if(numeroEscolhido > 12){
        printf("O numero nao corresponde a nenhum mes do ano");
    }
    

}