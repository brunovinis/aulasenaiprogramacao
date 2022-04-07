#include  <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vinícius da Silva\n\n");

    float nota;
    float soma = 0;
    float numeroMaior = 0;
    float numeroMenor = 10;
 

    for(int i = 1; i <= 10; i++){
        printf("Digite a %d.a nota: ", i);
        scanf("%f", &nota);
        

        if(nota <0 && nota >10){
            printf("\nDados incorretos. A nota deve estar entre 0 e 10:");
            scanf("%f", &nota);
        }
        soma = soma + nota;

        if( nota > numeroMaior){
            numeroMaior = nota;
        }

        if(nota < numeroMenor){
            numeroMenor = nota;
        }
    }

    printf("A soma das notas é: %.2f\n", soma);

    float media = soma / 10;

    printf( "A media das notas fornecidas é de: %.2f\n", media);
    printf("A maior nota é: %.1f\n", numeroMaior);
    printf("A menor nota é: %.1f\n", numeroMenor);


}