#include <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vinícius da Silva\n\n");
    
    int ladoa;
    

   printf("Digite o valor do lado A do quadrado em cm:");
    scanf("%d", &ladoa);

    int area = ladoa * ladoa;
    int perimetro = ladoa + ladoa + ladoa + ladoa; 

    printf("A area do quadrado é: %d\n", area);
    printf("O perimetro do quadrado é: %d\n", perimetro);
    
}

