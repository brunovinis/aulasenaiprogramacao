#include <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vinícius da Silva\n\n");

    printf("ATENCAO: As idades nao devem ser iguais!\n");



    int idadePedro;
    int idadeJoana;

    printf("Digite a idade de Pedro:");
    scanf("%d", &idadePedro);
    printf("Digite a idade de Joana:");
    scanf("%d", &idadeJoana);




    
    if(idadePedro < idadeJoana){
        printf("Joana e a mais velha");    
    }
    if(idadePedro > idadeJoana){
        printf("Pedro e o mais velho");
    } else{
        printf("Os numeros são iguais");
    }

    
}
