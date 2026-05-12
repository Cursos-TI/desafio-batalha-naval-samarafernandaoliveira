#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

// Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
// Sugestão: Expanda o tabuleiro para uma matriz 10x10.
// Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
// Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

#define LINHAS 10
#define COLUNAS 10

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

    // Exibe o tabuleiro
    for (int i = 0; i < LINHAS; i++){

        for (int j = 0; j < COLUNAS; j++){

            printf("%d ", tabuleiro [i] [j]);

        }
        printf("\n");
    }


    return 0;
}