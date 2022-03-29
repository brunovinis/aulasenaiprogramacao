#include  <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vinícius da Silva\n\n");

    
   
   
    int numeroNotas;
    int nota;
    double mediaNotas = 0;

    printf("De quantos numeros voce deseja calcular a media:");
    scanf("%d", &numeroNotas);

    for(int i = 1; i <= numeroNotas; i++){
        printf("Digite um dos numeros:");
        scanf("%d", &nota);
        mediaNotas = mediaNotas + nota;
    }
   
    double resultado = mediaNotas / numeroNotas;

    printf("A media dos numeros fornecidos é:%.1f", resultado);


   

}
