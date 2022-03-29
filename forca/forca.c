#include  <stdio.h>
#include  <string.h>
#include <stdlib.h>
#include "forca.h"
#include <time.h>
#define TAMANHOPALAVRA 20
//LISTA DE FUNÇÃO QUE APARECERÃO NO ARQUIVO DO JOGO


//variaveis globais
char palavrasecreta[TAMANHOPALAVRA];
char chutes[26];
int chutesdados = 0;

    
    int enforcou(){
        return chuteserrados() >= 5;
        /*int erros = 0;
        // vamos fazer o loop em todos os chutes dados
        for(int i = 0; i < chutesdados; i++){
            int existe = 0;
        // agora vamos olhar letra a letra da palavra secreta
        // e ver se encontramos o chute aqui 
            for(int j = 0; j < strlen(palavrasecreta); j++){
                if(chutes[i] == palavrasecreta[j]){
                    //encontramos, vamos quebrar o loop
                    existe = 1;
                    break;
                }

            }
            // se não encontrou, soma mais um na quantidade de erros
            if(!existe) erros++;
        }
        //se tivemos mais do que 5 erros, retornamos 1
        //caso contrário, retornamos 0.
        return erros >= 5;*/
    }

    void abertura(){
        //IMPRIME O CABEÇALHO
        printf("/****************/\n");
        printf("/ Jogo de Forca */\n");
        printf("*****************\n\n");
    }

    void escolhepalavra(){
        FILE* f;

        f = fopen("palavras.txt", "r");
        if (f == 0){
           printf("Banco de dados não disponivel\n\n");
           exit(1);
        }
        int qtddepalavras;
        fscanf(f, "%d", &qtddepalavras);
        //gera numero aleatorio
        //nao esqueça de incluir time.h
        srand(time(0));
        //pega a quantidade de palavras -1, pq o rand devolve numero grande e eu quero um numero útil p mim
        int randomico = rand() % qtddepalavras;
        // aqui vai um loop que vai de 0 até o numero randômico q eu escolhi
        for(int i = 0; i <= randomico; i++){
           fscanf(f, "%s", palavrasecreta);
        }
        fclose(f);
    }

    void adicionapalavra(){
        char quer;

        printf("Você deseja adicionar uma nova palavra no jogo (S/N)?");
        scanf(" %c", &quer);

        if(quer == 'S'){

            char novapalavra[TAMANHOPALAVRA];

            printf("Digite aqui a nova palavra, em letras maiusculas: ");
            scanf(" %s", &novapalavra);

            FILE* f;
            
            f = fopen("palavras.txt", "r+");
            if (f == 0){
                printf("Banco de dados não disponivel\n\n");
                exit(1);
            }
            int qtd;
            fscanf(f, "%d", &qtd);
            qtd++;
            fseek(f, 0, SEEK_SET);
            fprintf(f, "%d", qtd);
            fseek(f, 0, SEEK_END);
            fprintf(f, "\n%s", novapalavra);
            
            fclose(f);
        }
            
    }

    


    void chuta(){
        char chute;
        printf("Qual a letra? ");
        scanf(" %c", &chute);

        chutes[chutesdados] = chute;
        chutesdados++;
    }

    

    int ganhou(){
        for(int i = 0; i < strlen(palavrasecreta); i++){
            if(!jachutou(palavrasecreta[i])){
                return 0;
            }
        }
        return 1;
    }
    
    void desenhaforca(){

        int erros = chuteserrados();

        printf("  _______       \n");
        printf(" |/      |      \n");
        printf(" |      %c%c%c  \n", (erros>=1?'(':' '), (erros>=1?'_':' '), (erros>=1?')':' '));
        printf(" |      %c%c%c  \n", (erros>=3?'\\':' '), (erros>=2?'|':' '), (erros>=3?'/': ' '));
        printf(" |       %c     \n", (erros>=2?'|':' '));
        printf(" |      %c %c   \n", (erros>=4?'/':' '), (erros>=4?'\\':' '));
        printf(" |              \n");
        printf("_|___           \n");
        printf("\n\n");

        printf("Você ja deu %d chutes\n", chutesdados);

        // imprime a palavra secreta
        for(int i = 0; i < strlen(palavrasecreta); i++){
            //int achou = 0;
            
            // a letra ja foi chutada
            if(jachutou(palavrasecreta[i])){
                printf("%c ", palavrasecreta[i]);
            } else{
                printf("_ ");
                }
        }
        printf("\n");
    }

    int jachutou(char letra){
        int achou = 0;
        for(int j = 0; j < chutesdados; j++){
                
            if(chutes[j] == letra){
                        
                achou = 1;
                break;
            }
        }
        return achou;
    }

    int letraexiste(char letra){
        for(int j = 0; j < strlen(palavrasecreta); j++){
            if(letra == palavrasecreta[j]){
                return 1;
            }
            
        }
        return 0;
    }

    int chuteserrados(){
        int erros = 0;

        for(int i = 0; i < chutesdados; i++){

            if(!letraexiste(chutes[i])){
                erros++;
            }
        }
        return erros;
    }

    int main(){
        abertura();

        //sprintf(palavrasecreta, "MELANCIA");

        int acertou = 0;
       
        escolhepalavra();
        //printf("%d %d", chutes, &chutes[1]);
         
        do {

            chuta();
            desenhaforca();

            
        } while(!ganhou() && !enforcou()); 

            if(ganhou()) {
            printf("\nParabéns, você ganhou!\n\n");

            printf("       ___________      \n");
            printf("      '._==_==_=_.'     \n");
            printf("      .-\\:      /-.    \n");
            printf("     | (|:.     |) |    \n");
            printf("      '-|:.     |-'     \n");
            printf("        \\::.    /      \n");
            printf("         '::. .'        \n");
            printf("           ) (          \n");
            printf("         _.' '._        \n");
            printf("        '-------'       \n\n");

        } else {
            printf("\nPuxa, você foi enforcado!\n");
            printf("A palavra era **%s**\n\n", palavrasecreta);

            printf("    _______________         \n");
            printf("   /               \\       \n"); 
            printf("  /                 \\      \n");
            printf("//                   \\/\\  \n");
            printf("\\|   XXXX     XXXX   | /   \n");
            printf(" |   XXXX     XXXX   |/     \n");
            printf(" |   XXX       XXX   |      \n");
            printf(" |                   |      \n");
            printf(" \\__      XXX      __/     \n");
            printf("   |\\     XXX     /|       \n");
            printf("   | |           | |        \n");
            printf("   | I I I I I I I |        \n");
            printf("   |  I I I I I I  |        \n");
            printf("   \\_             _/       \n");
            printf("     \\_         _/         \n");
            printf("       \\_______/           \n");
        }

        adicionapalavra();
    }