#include <stdio.h>
#include <stdlib.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

// Nível Mestre - Habilidades Especiais com Matrizes
// Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
// Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
// Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

#define LINHAS 10
#define COLUNAS 10
#define HABILIDADE 5

int main() {

    int tabuleiro [LINHAS] [COLUNAS];

    // Inicializa o tabuleiro com água

    for (int i = 0; i < LINHAS; i++){

        for (int j = 0; j < COLUNAS; j++){

            tabuleiro [i] [j] = 0;

                }

    }

    // Posiciona os navios
    
    // Navio horizontal
    for (int i = 0; i < 3; i++){

            tabuleiro [1] [2 + i] = 3;
    }
    
    // Navio vertical
    for (int i = 0; i < 3; i++){

            tabuleiro [4 + i] [5] = 3;
    }

    // Navio diagonal 1
    for (int i = 0; i < 3; i++){

            tabuleiro [6 + i] [1 + i] = 3;
    }

    // Navio diagonal 2
    for (int i = 0; i < 3; i++){

            tabuleiro [9 - i] [6 + i] = 3;
    }

    printf("\n Tabuleiro base \n");

    // Exibe números das colunas 
    printf("  ");

    for (int j = 0; j < COLUNAS; j++){

        printf("%d ", j);
    }
    printf("\n");

    // Exibe o tabuleiro
    for (int i = 0; i < LINHAS; i++){

        printf("%d ", i); // Exibe o número das linhas

        for (int j = 0; j < COLUNAS; j++){

            printf("%d ", tabuleiro [i] [j]);

        }
        printf("\n");
    }

    // Habilidade em Cone
    int cone [5] [5] = {0};

    for (int i = 0; i < 5; i++){

        for (int j = 0; j < 5; j++){

            if (j >= 2 && j <= 2 + i){

                cone [i] [j] = 1;
            }
        }
    }

    // Habilidade em Cruz
    int cruz [5] [5] = {0};

    for (int i = 0; i < 5; i++){

        for (int j = 0; j < 5; j++){

            if (i == 2 || j == 2){

                cruz [i] [j] = 1;
            }
        }
    }

    // Habilidade em Octaedro
    int octaedro [5] [5] = {0};

    for (int i = 0; i < 5; i++){

        for (int j = 0; j < 5; j++){

            if (abs(i - 2) + abs(j - 2) <= 2){

                octaedro [i] [j] = 1;
            
            }
        }
    }

    // Cone no tabuleiro
    int origemLinha = 4;
    int origemColuna = 4;

    for (int i = 0; i < 5; i++){

        for (int j = 0; j < 5; j++){

            int linhaTabuleiro = origemLinha + i - 2;
            int colunaTabuleiro = origemColuna + j - 2;

            if (linhaTabuleiro >= 0 && linhaTabuleiro < LINHAS &&
            colunaTabuleiro >= 0 && colunaTabuleiro < COLUNAS){

                if (cone [i] [j] == 1){
                    tabuleiro [linhaTabuleiro] [colunaTabuleiro] = HABILIDADE;
                }
            }
        }
    }

    // Cruz no tabuleiro
    origemLinha = 5;
    origemColuna = 5;

    for (int i = 0; i < 5; i++){

        for (int j = 0; j < 5; j++){

            if (cruz [i] [j] == 1){

                int linhaTabuleiro = origemLinha + i - 2;
                int colunaTabuleiro = origemColuna + j - 2;

                if (linhaTabuleiro >= 0 && linhaTabuleiro < LINHAS &&
                colunaTabuleiro >= 0 && colunaTabuleiro < COLUNAS){
                    tabuleiro [linhaTabuleiro] [colunaTabuleiro] = HABILIDADE;
                }
            }
        }
    }

    // Octaedro no tabuleiro
    origemLinha = 7;
    origemColuna = 7;

    for (int i = 0; i < 5; i++){

        for (int j = 0; j < 5; j++){

            if (octaedro [i] [j] == 1){

                int linhaTabuleiro = origemLinha + i - 2;
                int colunaTabuleiro = origemColuna + j - 2;

                if (linhaTabuleiro >= 0 && linhaTabuleiro < LINHAS &&
                colunaTabuleiro >= 0 && colunaTabuleiro < COLUNAS){
                    tabuleiro [linhaTabuleiro] [colunaTabuleiro] = HABILIDADE;
                }
            }
        }
    }

    printf("\n Tabuleiro com habilidades \n");

    // Exibe números das colunas 
    printf("  ");

    for (int j = 0; j < COLUNAS; j++){

        printf("%d ", j);
    }
    printf("\n");

    // Exibe o tabuleiro
    for (int i = 0; i < LINHAS; i++){

        printf("%d ", i); // Exibe o número das linhas

        for (int j = 0; j < COLUNAS; j++){

            printf("%d ", tabuleiro [i] [j]);

        }
        printf("\n");
    }



    return 0;
}