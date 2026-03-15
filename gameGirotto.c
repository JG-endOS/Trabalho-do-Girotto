#include <stdio.h>
#include <stdlib.h>

// MÉTODO PARA LIMPAR A TELA TANTO NO WINDOWS QUANTO NO LINUX
void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main()
{
    int menu = 1;

    while (menu == 1)
    {
        // VARIÁVEL QUE GUARDA A ESCOLHA DE JOGO 
        int option;

        // MENU PRINCIPAL DO JOGO
        limpar_tela();
        printf("\n=====GIROTTOS'S GAME=====\n");
        printf("1: Perguntas e Respostas\n");
        printf("2: Cobra na Caixa!\n");
        printf("3: Gousmas War\n");
        printf("4: Sair\n");

        scanf("%d", &option);

        // ==== PERGUNTAS E RESPOSTAS ====
        while (option == 1)
        {
            limpar_tela();

            // ZERA AS VARIÁVEIS PARA ACESSAR O LOOP DPS 
            option = 0;
            menu = 0;
            
            // GUARDA RESPOSTA DO JOGADOR NA PRIMEIRA PERGUNTA
            char alternativa1[2];

            printf("\n=====PERGUNTAS E RESPOSTAS=====\n");
            printf("O jogo consiste em 5 perguntas, tente acertar! ;)\n\n");

            printf("PRIMEIRA PERGUNTA:\nQual o professor mais lindo do CESUPA? [A-D]\n");
            printf("\n[A] Pedro Girotto");
            printf("\n[B] Polyana Ribeiro");
            printf("\n[C] Ricardo Casseb");
            printf("\n[D] Alessandra Baganha\n\n");
            scanf(" %c", &alternativa1[0]);

            if (alternativa1[0] == 'A' || alternativa1[0] == 'a')
            {
                limpar_tela();
                printf("\nVOCÊ ACERTOU !!\n\n");
            }
            else
            {
                limpar_tela();
                printf("\nERROU !!\n");
                printf("Pressione '1' para reiniciar: ");
                scanf("%d", &option);
            }

            //CONTINUA O JOGO
            if (alternativa1[0] == 'A' || alternativa1[0] == 'a')
            {
                //GUARDA A RESPOSTA DO JOGADOR NA SEGUNDA PERGUNTA
                char alternativa2[2];

                printf("SEGUNDA PERGUNTA:\nQuanto vale esse trabalho? [A-D]\n");
                printf("\n[A] 2");
                printf("\n[B] 0.5");
                printf("\n[C] 3");
                printf("\n[D] Pra esse daqui especificamente: 0!\n\n");
                scanf(" %c", &alternativa2[0]);

                if (alternativa2[0] == 'C' || alternativa2[0] == 'c')
                {
                    limpar_tela();
                    printf("\nVOCÊ ACERTOU !!\n\n");
                }
                else
                {
                    limpar_tela();
                    printf("\nERROU !!\n");
                    printf("Pressione '1' para reiniciar: ");
                    scanf("%d", &option);
                }

                //CONTINUA O JOGO
                if (alternativa2[0] == 'C' || alternativa2[0] == 'c')
                {   
                    //GUARDA A RESPOSTA DO JOGADOR NA TERCEIRA PERGUNTA
                    char alternativa3[2];

                    printf("TERCEIRA PERGUNTA:\nQual vai ser o game do ano? [A-D]\n");
                    printf("\n[A] Resident Evil: Requiem");
                    printf("\n[B] Mineirinho 2");
                    printf("\n[C] Girotto's Game");
                    printf("\n[D] Cafe Girotto Adventure\n\n");
                    scanf(" %c", &alternativa3[0]);

                    if (alternativa3[0] == 'D' || alternativa3[0] == 'd')
                    {
                        limpar_tela();
                        printf("\nVOCÊ ACERTOU !!\n\n");
                    }
                    else
                    {
                        limpar_tela();
                        printf("\nERROU !!\n");
                        printf("Pressione '1' para reiniciar: ");
                        scanf("%d", &option);
                    }

                    // CONTINUA O JOGO
                    if (alternativa3[0] == 'D' || alternativa3[0] == 'd')
                    {   
                        //GUARDA A RESPOSTA DO JOGADOR NA QUARTA PERGUNTA
                        char alternativa4[2];

                        printf("QUARTA PERGUNTA:\nQuanto eh 2 + 2? [A-D]\n");
                        printf("\n[A] -4");
                        printf("\n[B] 0.19");
                        printf("\n[C] 321");
                        printf("\n[D] 4\n\n");
                        scanf(" %c", &alternativa4[0]);

                        if (alternativa4[0] == 'D' || alternativa4[0] == 'd')
                        {
                            limpar_tela();
                            printf("\nVOCÊ ACERTOU !!\n\n");
                        }
                        else
                        {
                            limpar_tela();
                            printf("\nERROU !!\n");
                            printf("Pressione '1' para reiniciar: ");
                            scanf("%d", &option);
                        }

                        // CONTINUA O JOGO
                        if (alternativa4[0] == 'D' || alternativa4[0] == 'd')
                        {
                            // GUARDA A RESPOSTA DO JOGADOR NA QUINTA PERGUNTA
                            char alternativa5[2];

                            printf("QUINTA PERGUNTA:\nQual a melhor my little poney? [A-D]\n");
                            printf("\n[A] Rainbow Dash");
                            printf("\n[B] Apple Jack");
                            printf("\n[C] Twilight Sparkle");
                            printf("\n[D] Pinkie Pie\n\n");
                            scanf(" %c", &alternativa5[0]);

                            if (alternativa5[0] == 'A' || alternativa5[0] == 'a')
                            {
                                limpar_tela();
                                printf("\nPARABÉNS VOCÊ É MUITO INTELIGENTE !!\n");

                                int fim_perguntas = 0;
                                printf("Você deseja jogar de novo?:\n");
                                printf("[S] Pressione '1' \n[N] Pressione '2'\n");
                                scanf("%d", &fim_perguntas);

                                // JOGA NOVAMENTE OU VOLTA PARA O MENU
                                if (fim_perguntas == 1)
                                    option = 1;
                                else
                                    menu = 1;
                            }
                            else
                            {
                                limpar_tela();
                                printf("\nERROU !!\n");
                                printf("Pressione '1' para reiniciar: ");
                                scanf("%d", &option);
                            }
                        }
                    }
                }
            }
        }

        // ==== COBRA NA CAIXA ====
        while (option == 2)
        {
            // ZERA O MENU E AS VARIÁVEIS PARA ACESSAR O LOOP DPS
            menu = 0;
            option = 0;

            //ARRAY QUE GUARDA OS NOMES
            const char *nomes[] = {"", "Pedro Alan", "João Gabriel", "Cleopatra", "Ronaldo", "Mordecai", "Rigby", "Café"};

            //PONTEIROS QUE RESGATAM OS NOMES NO ARRAY
            const char *nome_jogador1 = NULL;
            const char *nome_jogador2 = NULL;
            int escolha1 = 0, escolha2 = 0;

            limpar_tela();
            printf("========Escolha seu nome=========\n");
            printf("===========JOGADOR 1=============\n");
            printf("1. Pedro Alan\n2. João Gabriel\n3. Cleópatra\n4. Ronaldo\n5. Mordecai\n6. Rigby\n7. Café\n");
            scanf("%d", &escolha1);
            nome_jogador1 = nomes[escolha1];

            limpar_tela();
            printf("========Escolha seu nome=========\n");
            printf("==========JOGADOR 2==============\n");
            printf("1. Pedro Alan\n2. João Gabriel\n3. Cleópatra\n4. Ronaldo\n5. Mordecai\n6. Rigby\n7. Café\n");
            scanf("%d", &escolha2);
            nome_jogador2 = nomes[escolha2];

            //FAZ OS JOGADORES ESCOLHEREM OS NOMES NOVAMENTE
            if (nome_jogador1 == nome_jogador2)
            {
                limpar_tela();

                printf("'%s' ja foi escolhido!\n", nome_jogador1);
                printf("Pressione '2' para escolher os nomes novamente: ");
                scanf("%d", &option);
            }

            //CONTINUA PARA O JOGO
            if (nome_jogador1 != nome_jogador2)
            {
                limpar_tela();

                // ARRAY COM OS DOIS NOMES ESCOLHIDOS
                const char *jogadores[] = {nome_jogador1, nome_jogador2};

                // SORTEIA QUEM COMEÇA PRIMEIRO
                int sorteio = rand() % 2;

                //GUARDA OS JOGADORES SORTEADOS EM CONSTANTES
                const char *jogador_escolhido = jogadores[sorteio];
                const char *jogador_resto = jogadores[1 - sorteio];

                int rodada = 1;
                int jogo_rodando = 1; // VARIÁVEL PARA O LOOP DAS RODADAS ATÉ O JOGADOR SAIR

                limpar_tela();
                printf("O primeiro a jogar será: %s\n", jogador_escolhido);

                while (jogo_rodando)
                {   
                    // DEFINE O LOCAL DO BOTÃO E DA COBRA
                    int cobra = (rand() % 5) + 1;
                    int botao = (rand() % 5) + 1;

                    // GARANTE QUE O BOTÃO NÃO TÁ NA MESMA CAIXA QUE A COBRA
                    while (botao == cobra) 
                        botao = (rand() % 5) + 1;
                    
                    printf("\n====Rodada %d====\n\n", rodada);
                    rodada++; 

                    printf("┌────────────┐\n│  CAIXA 1   │\n└────────────┘\n");
                    printf("┌────────────┐\n│  CAIXA 2   │\n└────────────┘\n");
                    printf("┌────────────┐\n│  CAIXA 3   │\n└────────────┘\n");
                    printf("┌────────────┐\n│  CAIXA 4   │\n└────────────┘\n");
                    printf("┌────────────┐\n│  CAIXA 5   │\n└────────────┘\n");

                    printf("%s, escolha uma caixa (1-5): ", jogador_escolhido);
                    int caixa_escolhida = 0;
                    scanf("%d", &caixa_escolhida); 

                    if (caixa_escolhida == cobra)
                    {   
                        limpar_tela();
                        printf("\nCOBRA! %s perdeu!\n", jogador_escolhido);
                        printf("%s VENCEU!\n", jogador_resto);
                        jogo_rodando = 0;
                    }
                    else if (caixa_escolhida == botao)
                    {   
                        limpar_tela();
                        printf("\nBOTÃO! %s VENCEU!\n", jogador_escolhido);
                        jogo_rodando = 0;
                    }
                    else
                    {   
                        limpar_tela();
                        printf("\nCaixa vazia! Vez do próximo jogador.\n");
                        // TROCA DE JOGADOR 
                        const char *temp = jogador_escolhido;
                        jogador_escolhido = jogador_resto;
                        jogador_resto = temp;
                    }

                    int fim_cobra;
                    if (jogo_rodando == 0)
                    {
                        printf("\nDeseja jogar novamente?\n");
                        printf("1. Sim\n");
                        printf("2. Nao\n");
                        scanf("%d", &fim_cobra);
                    }
                    if (fim_cobra == 1)
                        option = 2;
                    else 
                        menu = 1;
                    
                } 
            }
        } 

        // ==== GOUSMAS WAR ====
        while (option == 3) 
        {
            limpar_tela();

            printf("=====GOUSMAS WAR=====\n");
            printf("O jogo consiste em...!\n");

            menu = 1;
        }

        // ==== SAIR ====
        if (option == 4) 
        {
            limpar_tela();
            printf("Obrigado por jogar!\n");
            return 0;
        }
    }
}
