#include <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vinícius da Silva\n\n");

    int numero;
    printf("digite um numero inteiro:");
    scanf("%d", &numero);

    if(numero %2 == 0 ){
        printf("O numero %d é par", numero);
    } else{
        printf("O numero %d é impar", numero);
    }



}