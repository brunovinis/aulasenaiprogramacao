#include  <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vin�cius da Silva\n\n");

    int numero;

    printf("Digite um numero inteiro positivo:");
    scanf("%d", &numero);

    printf(" Os numeros impares menores %d s�o:\n", numero);

    for(int i = 1; i <= numero; i++){
        if(i %2 != 0){
            printf("%d\n", i);
        }
    }
}