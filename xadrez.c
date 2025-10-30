#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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
// Movimentação do BISPO (diagonal superior direita) usando estrutura WHILE
// --------------------------
printf("\nMovimentacao do Bispo:\n");
int j = 0;
while (j < casas_bispo) {
printf("Cima Direita\n");
j++;
}


// --------------------------
// Movimentação da RAINHA (para a esquerda) usando estrutura DO-WHILE
// --------------------------
printf("\nMovimentacao da Rainha:\n");
int k = 0;
do {
printf("Esquerda\n");
k++;
} while (k < casas_rainha);


return 0;
}
