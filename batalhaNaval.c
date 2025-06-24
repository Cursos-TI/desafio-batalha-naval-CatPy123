#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).

    int batalha[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

    };

    int navioh[3] = {3, 3, 3};

    int naviov[3] = {3, 3, 3};

    int linha_inicial_naviov = 8, coluna_inicial_naviov = 3, linha_inicial_navioh = 1, coluna_inicial_navioh = 3, k = 0, l = 0;

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    if (linha_inicial_naviov >= 9 || coluna_inicial_naviov >= 11) {
        printf("A coordenada inicial do navio vertical está fora dos limites do tabuleiro\n\n");
    }
    if (linha_inicial_navioh >= 11 || coluna_inicial_navioh >= 9){
        printf("A coordenada inicial do navio horizontal está fora dos limites do tabuleiro\n\n");
    }

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            if (i == linha_inicial_naviov && j == coluna_inicial_naviov) {
                if (naviov[k] != 0) {
                    k++;
                    linha_inicial_naviov++;
                    if (batalha[(i-1)][(j-1)] == 3) {
                        printf("Os barcos estão se sobrepondo - altere a posição de um dos barcos\n\n");
                    }
                    batalha[(i-1)][(j-1)] = 3;
                }
            }
            if (i == (linha_inicial_navioh) && j == (coluna_inicial_navioh)) {
                if (navioh[l] != 0) {
                    l++;
                    coluna_inicial_navioh++;
                    if (l <= 3) {
                        if (batalha[(i-1)][(j-1)] == 3) {
                            printf("Os barcos estão se sobrepondo - altere a posição de um dos barcos\n");
                        }
                        batalha[(i-1)][(j-1)] = 3;
                    }
                }
            }
        }
    }

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf(" %d ", batalha[(i-1)][(j-1)]);
        }
        printf("\n");
    }

    
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
