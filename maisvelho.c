#include  <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vin�cius da Silva\n\n");

    int idadePedro;
    int idadeJoana;
    int idadeIsmael;

    printf("digite a idade de Pedro: ");
    scanf("%d", &idadePedro);

    printf("digite a idade de Joana: ");
    scanf("%d", &idadeJoana);

    printf("digite a idade de Ismael : ");
    scanf("%d", &idadeIsmael);

    if(idadePedro > idadeIsmael ){
       if(idadePedro > idadeJoana ){
           printf("Pedro � o mais velho entre os tres");
       }
       
    }

    if(idadeJoana > idadeIsmael ){
       if(idadeJoana > idadePedro){
           printf("Joana � a mais velha entre os tres");
       }
       
    }

    if(idadeIsmael > idadePedro ){
       if(idadeIsmael > idadeJoana ){
           printf("Ismael � o mais velho entre os tres");
       }
       
    }





    
    
    

}