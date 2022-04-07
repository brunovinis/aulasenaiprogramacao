#include  <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vinícius da Silva\n\n");

    int bandeira;
    printf("Digite o numero da bandeira (1 ou 2): ");
    scanf("%d", &bandeira);

    int kilometro;
    printf("Digite qual a kilometragem rodada ");
    scanf("%d", &kilometro);

    float bandeira1 = kilometro * 1.80;
    float bandeira2 = kilometro * 2.30;

    if(bandeira == 1){
        printf("valor da kilometragem é R$ %.2f", bandeira1);

    } else{
        printf("valor da kilometragem é R$ %.2f", bandeira2);

    }


}