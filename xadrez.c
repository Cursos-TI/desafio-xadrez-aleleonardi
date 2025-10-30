#include <stdio.h>
#include <stdlib.h> // Para usar abs()

// --------------------------
// Nível Mestre - Função recursiva para movimentação do BISPO
// --------------------------
void mover_bispo_recursivo(int passos_restantes) {
    if (passos_restantes == 0) return;
    printf("Cima Direita\n");
    mover_bispo_recursivo(passos_restantes - 1);
}

int main() {
    // Constantes para o número de casas de movimento de cada peça
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;

    // --------------------------
    // Movimentação da TORRE (para a direita) usando estrutura FOR
    // --------------------------
    printf("Movimentacao da Torre:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    // --------------------------
    // Movimentação do BISPO usando FUNÇÃO RECURSIVA
    // --------------------------
    printf("\nMovimentacao do Bispo (Recursivo):\n");
    mover_bispo_recursivo(casas_bispo);

    // --------------------------
    // Movimentação da RAINHA (para a esquerda) usando estrutura DO-WHILE
    // --------------------------
    printf("\nMovimentacao da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casas_rainha);

    // --------------------------
    // Nível Aventureiro - Movimentação do CAVALO em L usando loops aninhados
    // --------------------------
    printf("\nMovimentacao do Cavalo:\n");
    int movimentos = 0;
    for (int dx = -2; dx <= 2; dx++) {
        for (int dy = -2; dy <= 2; dy++) {
            // Ignora movimentos que não formam L
            if (abs(dx) + abs(dy) != 3 || dx == 0 || dy == 0) {
                continue;
            }

            // Mostra direção aproximada com base em dx e dy
            if (dx == -2) printf("Cavalo: 2 Esquerda, ");
            if (dx == 2)  printf("Cavalo: 2 Direita, ");
            if (dx == -1) printf("Cavalo: 1 Esquerda, ");
            if (dx == 1)  printf("Cavalo: 1 Direita, ");

            if (dy == -2) printf("2 Baixo\n");
            if (dy == 2)  printf("2 Cima\n");
            if (dy == -1) printf("1 Baixo\n");
            if (dy == 1)  printf("1 Cima\n");

            movimentos++;

            // Exemplo de uso do break: para depois de encontrar 8 movimentos
            if (movimentos == 8) {
                break;
            }
        }
        if (movimentos == 8) {
            break;
        }
    }

    return 0;
}
