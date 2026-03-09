#include <stdio.h>
#include <locale.h>

int main() {

    while(1) {
        int option;

        printf("=====GIROTTOS'S GAME=====\n");

        printf("1: Pergunta e Resposta\n");
        printf("2: Cobra na Caixa!\n");
        printf("3: Gousmas War\n");
        printf("4: Sair\n");

        scanf("%d", &option);

        if(option == 1) {
            printf("=====PERGUNTA E RESPOSTA=====\n");
            printf("O jogo consiste em 5 perguntas, tente acertar! ;)\n");

        }

        if(option == 2) {
            printf("=====COBRA NA CAIXA=====\n");
            printf("O jogo consiste em...!\n");
        }

        if(option == 3) {
            printf("=====GOUSMAS WAR=====\n");
            printf("O jogo consiste em...!\n");
        }

        if(option == 4) {
            printf("Obrigado por jogar!\n");
            break;
        }
    }
}