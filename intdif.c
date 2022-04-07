#include  <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vinícius da Silva\n\n");

    printf("Voce devera digitar tres numeros inteiros doferentes:\n");

    int numeroInteiro1;
    printf("Digite o primeiro numero: ");
    scanf("%d", &numeroInteiro1);

    int numeroInteiro2;
    printf("Digite o segundo numero: ");
    scanf("%d", &numeroInteiro2);

    int numeroInteiro3;
    printf("Digite o terceiro numero: ");
    scanf("%d", &numeroInteiro3);

    if(numeroInteiro1 > numeroInteiro2 && numeroInteiro2 > numeroInteiro3){
        printf("Na ordem crescente os numeros sao: %d, %d, %d", numeroInteiro3, numeroInteiro2, numeroInteiro1);
    } 
    if(numeroInteiro1 > numeroInteiro3 && numeroInteiro3 > numeroInteiro2){
        printf("Na ordem crescente os numeros sao: %d, %d, %d", numeroInteiro2, numeroInteiro3, numeroInteiro1);
    }
    if(numeroInteiro2 > numeroInteiro1 && numeroInteiro1 > numeroInteiro3){
        printf("Na ordem crescente os numeros sao: %d, %d, %d", numeroInteiro3, numeroInteiro1, numeroInteiro2);
    }
    if(numeroInteiro2 > numeroInteiro3 && numeroInteiro3 > numeroInteiro1){
        printf("Na ordem crescente os numeros sao: %d, %d, %d", numeroInteiro1, numeroInteiro3, numeroInteiro2);
    }
    if(numeroInteiro3 > numeroInteiro1 && numeroInteiro1 > numeroInteiro2){
        printf("Na ordem crescente os numeros sao: %d, %d, %d", numeroInteiro2, numeroInteiro1, numeroInteiro3);
    }
    if(numeroInteiro3 > numeroInteiro2 && numeroInteiro2 > numeroInteiro1){
        printf("Na ordem crescente os numeros sao: %d, %d, %d", numeroInteiro1, numeroInteiro2, numeroInteiro3);
    }


    
}