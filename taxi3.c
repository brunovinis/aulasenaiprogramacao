#include  <stdio.h>

int main(){
   int bandeira;
   float valorkm;
   int kilometro;
   float valorcorrida;
   float taxaminima = 3.50;
   float valorDesconto;
   int desconto;
       
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vinícius da Silva\n\n");
    printf("ATENCAO: taxa minima do taxi : 3.50 \n");
 
    printf("Digite o numero da bandeira (1 ou 2): ");
    scanf("%d", &bandeira);
    
    printf("Digite qual a kilometragem rodada ");
    scanf("%d", &kilometro);

    printf("O taxi oferece desconto de 30% ? < 1 - SIM  ou 2 - NAO > ");
    scanf("%d", &desconto);

   
    if(bandeira == 1){
        valorkm = 1.80;
    }
    if(bandeira == 2){
        valorkm = 2.30;
    }

    
    valorcorrida = valorkm * kilometro;
    valorDesconto = (valorcorrida * 70) / 100;

    if(desconto == 2){
        
        if(valorcorrida < taxaminima ){
            printf("O valor da corrida é: %.2f", taxaminima);
        } else{
            printf("O valor da corrida é: %.2f", valorcorrida);
        }

    }

    if(desconto == 1){
        if(valorcorrida < taxaminima){
            printf("O valor da corrida é: %.2f", taxaminima);
        } else{
            printf("O valor da corrida é: %.2f", valorDesconto);
        }

    }
}

    
