#include <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vin�cius da Silva\n\n");

    int numero;
    printf("Digite aqui um numero:");
    scanf("%d", &numero);

    

    for(int i = 0; i <= 10; i++){
        int conta = numero * i;

        printf("%d x %d = %d\n", numero, i,conta);


    }
}