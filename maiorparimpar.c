#include  <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vinícius da Silva\n\n");

    int numero1;
    int numero2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero1);

   printf("Digite outro numero inteiro: ");
    scanf("%d", &numero2);

    if(numero1 > numero2 && numero1 %2 == 0){
        printf("O primeiro numero é maior que o segundo e par");
    }
    if(numero1 > numero2 && numero1 %2 != 0){
        printf("O primeiro numero é maior que o segundo e impar");
    }

    if(numero1 < numero2 && numero2 %2 == 0){
        printf("O segundo numero é maior que o primeiro e par");
    }
    if(numero1 < numero2 && numero2 %2 != 0){
        printf("O segundo numero é maior que o primeiro e impar");
    }

}