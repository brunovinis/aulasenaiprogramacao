#include <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vin�cius da Silva\n\n");
    
    int ladoa;
    

   printf("Digite o valor do lado A do quadrado em cm:");
    scanf("%d", &ladoa);

    int area = ladoa * ladoa;
    int perimetro = ladoa + ladoa + ladoa + ladoa; 

    printf("A area do quadrado �: %d\n", area);
    printf("O perimetro do quadrado �: %d\n", perimetro);
    
}

