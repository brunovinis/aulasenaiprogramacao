#include  <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vin�cius da Silva\n\n");

    int numero1;
    int numero2;

    printf("Voce devera digitar dois numeros inteiros diferentes:\n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero : ");
    scanf("%d", &numero2);


    int conta1 = numero1 - numero2;
    int conta2 = numero2 - numero1;

    if(numero1 > numero2){
        printf( "A diferen�a do maior pelo menor numero �: %d ", conta1);
    } else{
        printf( "A diferen�a do maior pelo menor numero �: %d ", conta2); 
    }







}