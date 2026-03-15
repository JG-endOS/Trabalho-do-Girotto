#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 50

int main()
{

    // VARAIVEL PARA RETORNAR AO MENU
    int menu = 1;

    while (menu == 1)
    {

        // VARIAVEL PARA ESCOLHA DO JOGO
        int option;

        // MENU PRINCIPAL DO JOGO
        printf("\n=====GIROTTOS'S GAME=====\n");

        printf("1: Pergunta e Resposta\n");
        printf("2: Cobra na Caixa!\n");
        printf("3: Gousmas War\n");
        printf("4: Sair\n");

        scanf("%d", &option);

        //==== PERGUNTA E RESPOSTA ====
        while (option == 1) {

            // ZERANDO AS VARIAVEIS
            option = 0;
            menu = 0;

            // RESPOSTA DO JOGADOR NESSA PERGUNTA
            char alternativa1[2];

            printf("\n=====PERGUNTA E RESPOSTA=====\n");
            printf("O jogo consiste em 5 perguntas, tente acertar! ;)\n\n");

            printf("PRIMEIRA PERGUNTA:\nQual o professor mais lindo do CESUPA? [A-D]\n");

            printf("\n[A] Pedro Girotto");
            printf("\n[B] Polyana Ribeiro");
            printf("\n[C] Ricardo Casseb");
            printf("\n[D] Alessandra Baganha\n\n");

            scanf("%s", &alternativa1[0]);

            if (alternativa1[0] == 'A' || alternativa1[0] == 'a')
            {

                printf("\nVOCE ACERTOU !!\n\n");
            }
            else
            {

                printf("\nERROU !!\n");
                printf("Pressione '1' para reiniciar: ");
                scanf("%d", &option);
            }

            if (alternativa1[0] == 'A' || alternativa1[0] == 'a')
            {

                // RESPOSTA DO JOGADOR NESSA PERGUNTA
                char alternativa2[2];

                printf("SEGUNDA PERGUNTA:\nQuanto vale esse trabalho? [A-D]\n");

                printf("\n[A] 2");
                printf("\n[B] 0.5");
                printf("\n[C] 3");
                printf("\n[D] Pra esse daqui especificamente: 0!\n\n");

                scanf("%s", &alternativa2[0]);

                if (alternativa2[0] == 'C' || alternativa2[0] == 'c')
                {

                    printf("\nVOCE ACERTOU !!\n");
                }
                else
                {

                    printf("\nERROU !!\n");
                    printf("Pressione '1' para reiniciar: ");
                    scanf("%d", &option);
                }

                if (alternativa2[0] == 'C' || alternativa2[0] == 'c')
                {

                    // RESPOSTA DO JOGADOR NESSA PERGUNTA
                    char alternativa3[2];

                    printf("TERCEIRA PERGUNTA:\nQual vai ser o game do ano? [A-D]\n");

                    printf("\n[A] Resident Evil: Requiem");
                    printf("\n[B] Mineirinho 2");
                    printf("\n[C] Girotto's Game");
                    printf("\n[D] Cafe Girotto Adventure\n\n");

                    scanf("%s", &alternativa3[0]);

                    if (alternativa3[0] == 'D' || alternativa3[0] == 'd')
                    {

                        printf("\nVOCE ACERTOU !!\n\n");
                    }
                    else
                    {

                        printf("\nERROU !!\n");
                        printf("Pressione '1' para reiniciar: ");
                        scanf("%d", &option);
                    }

                    if (alternativa3[0] == 'D' || alternativa3[0] == 'd')
                    {

                        // RESPOSTA DO JOGADOR NESSA PERGUNTA
                        char alternativa4[2];

                        printf("QUARTA PERGUNTA:\nQuanto eh 2 + 2? [A-D]\n");

                        printf("\n[A] -4");
                        printf("\n[B] 0.19");
                        printf("\n[C] 321");
                        printf("\n[D] 4\n\n");

                        scanf("%s", &alternativa4[0]);

                        if (alternativa4[0] == 'D' || alternativa4[0] == 'd')
                        {

                            printf("\nVOCE ACERTOU !!\n");
                        }
                        else
                        {

                            printf("\nERROU !!\n");
                            printf("Pressione '1' para reiniciar: ");
                            scanf("%d", &option);
                        }

                        if (alternativa4[0] == 'D' || alternativa4[0] == 'd')
                        {

                            // RESPOSTA DO JOGADOR NESSA PERGUNTA
                            char alternativa5[2];

                            printf("QUINTA PERGUNTA:\nQual a melhor my little poney? [A-D]\n");

                            printf("\n[A] Rainbow Dash");
                            printf("\n[B] Apple Jack");
                            printf("\n[C] Twilight Sparkle");
                            printf("\n[D] Pinkie Pie\n\n");

                            scanf("%s", &alternativa5[0]);

                            if (alternativa5[0] == 'A' || alternativa5[0] == 'a')
                            {

                                printf("\nPARABENS VOCE EH MUITO INTELIGENTE !!\n");

                                // VARIAVEL PARA RETORNO AO MENU OU JOGAR NOVAMENTE
                                int fim = 0;

                                if (fim == 0)
                                {

                                    printf("Você deseja jogar de novo?:\n");
                                    printf("[S] Pressione '1' \n[N] Pressione '2'\n");
                                    scanf("%d", &fim);

                                    // JOGAR NOVAMENTE
                                    if (fim == 1)
                                    {

                                        option = 1;

                                        // RETORNA AO MENU
                                    }
                                    else
                                    {

                                        menu = 1;
                                    }
                                }
                            }
                            else
                            {

                                printf("\nERROU !!\n");
                                printf("Pressione '1' para reiniciar: ");
                                scanf("%d", &option);
                            }
                        }
                    }
                }
            }
        }

        while (option == 2)
        {
            srand(time(NULL));
            menu = 0;
            option = 0;

            // ARRAY COM OS NOMES
            const char *nomes[] = {"", "Pedro Alan", "João Gabriel", "Cleopatra", "Ronaldo", "Mordecai", "Rigby", "Café"};

            // VARIÁVEIS COM PONTEIRO
            const char *nome_jogador1 = NULL;
            const char *nome_jogador2 = NULL;

            int escolha1 = 0, escolha2 = 0;

            printf("========Escolha seu nome=========\n");
            printf("===========JOGADOR 1=============\n");
            printf("1. Pedro Alan\n");
            printf("2. Joao Gabriel\n");
            printf("3. Cleopatra\n");
            printf("4. Ronaldo\n");
            printf("5. Mordecai\n");
            printf("6. Rigby\n");
            printf("7. Cafe\n");
            scanf("%d", &escolha1);

            // APONTA PARA O NOME NO ARRAY
            nome_jogador1 = nomes[escolha1];

            printf("========Escolha seu nome=========\n");
            printf("==========JOGADOR 2==============\n");
            printf("1. Pedro Alan\n");
            printf("2. Joao Gabriel\n");
            printf("3. Cleopatra\n");
            printf("4. Ronaldo\n");
            printf("5. Mordecai\n");
            printf("6. Rigby\n");
            printf("7. Cafe\n");
            scanf("%d", &escolha2);

            nome_jogador2 = nomes[escolha2];

            // COMPARA OS NOMES 
            if (nome_jogador1 == nome_jogador2) {
                
                printf("'%s' ja foi escolhido!\n", nome_jogador1);
                printf("Pressione '2' para escolher os nomes novamente: ");
                scanf("%d", &option);
            }

            if (nome_jogador1 != nome_jogador2) {
                
            // TESTE DO NOME
            //printf("Jogador 1: %s\n", nome_jogador1);
            //printf("Jogador 2: %s\n", nome_jogador2);
            const char *jogadores[] = {nome_jogador1, nome_jogador2};
            int sorteio = rand() % 2;
            
            const char *jogador_escolhido = jogadores[sorteio];
            const char *jogador_resto = jogadores[1 - sorteio];

            int rodada = 1;

            int cobra = (rand() % 6) +1;
            int botão = (rand() % 6) +1;
            int vazia = (rand() % 6) +1;



            printf("O primeiro a jogar será: %s\n", jogador_escolhido);

            printf("\n====Rodada %d====\n\n", rodada);
            rodada++;
            printf("┌────────────┐\n│  CAIXA 1   │\n└────────────┘\n");
            printf("┌────────────┐\n│  CAIXA 2   │\n└────────────┘\n");
            printf("┌────────────┐\n│  CAIXA 3   │\n└────────────┘\n");
            printf("┌────────────┐\n│  CAIXA 4   │\n└────────────┘\n");
            printf("┌────────────┐\n│  CAIXA 5   │\n└────────────┘\n");
            
            printf("Escolha uma caixa (1-5): ");
            //scanf("",);

            
            }
        }

        while (option == 3)
        {

            printf("=====GOUSMAS WAR=====\n");
            printf("O jogo consiste em...!\n");
        }

        while (option == 4)
        {

            printf("Obrigado por jogar!\n");
        }
    }
}



/*
int sorteados[5]; // Vetor para guardar 5 números
    int i, j, novo_num;
    bool repetido;

    for (i = 0; i < 5; i++) {
        do {
            repetido = false;
            novo_num = (rand() % 10) + 1; // Sorteia entre 1 e 10

            // Verifica se o número já foi sorteado antes
            for (j = 0; j < i; j++) {
                if (sorteados[j] == novo_num) {
                    repetido = true;
                    break;
                }
            }
        } while (repetido); // Se for repetido, volta para o 'do' e sorteia outro

        sorteados[i] = novo_num;
        printf("Sorteado %d: %d\n", i + 1, sorteados[i]);
    }*/
