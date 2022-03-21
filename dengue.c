#include <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini\n");
    printf("Bruno Vinícius da Silva\n\n");

    int suspeito;
    int confirmados;
    int mortes;

    printf("Preencha com as seguintes informações sobre a Dengue em Votuporanga:\n");

    printf("Casos suspeitos:\n");
    scanf("%d", &suspeito);

    printf("Casos Comfirmados:\n");
    scanf("%d", &confirmados);

    printf("Quantidade de Mortes:\n");
    scanf("%d", &mortes);

    printf("Informacoes sobre a dengue em Votuporanga:\n");

    printf("Casos suspeitos: %d\n", suspeito);
    printf("Casos Comfirmados: %d\n", confirmados);
    printf("Quantidade de Mortes: %d\n\n", mortes);

    printf("Total de dados: %d", suspeito + confirmados + mortes);


}