#include  <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vinícius da Silva\n\n");

    int base1;
    printf("Digite a base do primeiro retangulo em cm: ");
    scanf("%d", &base1);

    int altura1;
    printf("Digite a altura do primeiro retangulo em cm: ");
    scanf("%d", &altura1);

    int base2;
    printf("Digite a base do segundo retangulo em cm: ");
    scanf("%d", &base2);

    int altura2;
    printf("Digite a altura do segundo retangulo em cm: ");
    scanf("%d", &altura2);

    int area1 = base1 *  altura1;
    printf("A area do primeiro retangulo: %dcm\n", area1);

    int area2 = base2 *  altura2;
    printf("A area do segundo retangulo: %dcm\n", area2);

    if(area1 > area2){
        printf("A area do primeiro retangulo e maior");
    }    

    if(area1 < area2){
        printf("A area do segundo retangulo e maior");

    } 
    
    if(area1 == area2){
        printf("A area dos retangulos sao iguais");
    }
    
    

}