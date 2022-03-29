#include  <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vinícius da Silva\n\n");
    
    int alunos;
    int alunas;


    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);

    printf("Digite a quantidade de alunas: ");
    scanf("%d", &alunas);

    if(alunos > alunas){
        printf("Existem mais alunos que alunas");
        
    } else{
        printf("Existem mais alunas que alunos");
    }
}