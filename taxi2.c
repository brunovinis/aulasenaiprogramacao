#include  <stdio.h>

int main(){
   int bandeira;
   float valorkm;
   float kilometro;
   float valorcorrida;
   float taxaminima = 3.50;
       
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vinícius da Silva\n\n");
    printf("ATENCAO: taxa minima do taxi : 3.50 \n");
 
    printf("Digite o numero da bandeira (1 ou 2): ");
    scanf("%d", &bandeira);
    
    printf("Digite qual a kilometragem rodada ");
    scanf("%f", &kilometro);

    if(bandeira == 1){
        valorkm = 1.80;
    }
    if(bandeira == 2){
        valorkm = 2.30;
    }

    valorcorrida = valorkm * kilometro;

    if(valorcorrida < taxaminima ){
        printf("O valor da corrida é: %.2f", taxaminima);
    } else{
        printf("O valor da corrida é: %.2f", valorcorrida);
    }
    


  

   
   
    /*if(bandeira == 1 ){
        
        if(bandeira1 > 1.80){
        printf("valor da kilometragem é R$ %.2f", bandeira1);
        //printf("O valor da corrida é R$ 3.50");
        } else{
            printf("O valor da corrida é R$ 3.50");
            //printf(" O valor da kilometragem é R$ %.2f", bandeira1);
        }
    }
     
    if(bandeira == 2 ){
        
        
        if( bandeira2 > 2.30){
            printf("valor da kilometragem é R$ %.2f", bandeira2);
            //printf("O valor da corrida é R$ 3.50");
        } else{
            printf("O valor da corrida é R$ 3.50");
            //printf("valor da kilometragem é R$ %.2f", bandeira2);
        }
    }*/
}