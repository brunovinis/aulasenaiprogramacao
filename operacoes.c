#include <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vinícius da Silva\n\n");

    int numero1;
    int numero2;

    printf("Digite o primeiro numero:");
    scanf("%d", &numero1);
    printf("Digite o segundo numero:");
    scanf("%d", &numero2);

    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;
    int produto = numero1 * numero2;
    int divisao = numero1 / numero2;
    double media = soma / 2.0;

    printf("A soma de %d + %d = %d\n", numero1, numero2, soma);
    printf("A subtracao de %d - %d = %d\n", numero1, numero2, subtracao);
    printf("O produto de %d X %d = %d\n", numero1, numero2, produto);
    printf("A media entre %d e %d = %.2f", numero1, numero2, media);


    



}
