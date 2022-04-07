#include  <stdio.h>


float conta(){
    float grausc;
    printf("Digite a temperatura em °C: ");
    scanf("%f", &grausc);
    float grausf = grausc * 1.8 + 32;
    printf("A temperatura em °F: %.2f", grausf);
 
}

int main(){
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vinícius da Silva\n\n");

    conta();
    

}
