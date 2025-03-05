#include <stdio.h>

int main() {
    // Nível Novato - Movimentação das Peças
    int i, j = 1, k = 1;

    printf("\nDesafio de Xadrez - MateCheck\n");

    // Implementação de Movimentação do Bispo - Cinco casas na diagonal para cima e à direita
    printf("\nMovimentação do Bispo\n");
    for(i = 1; i <= 5; i++) {
        printf("Movimento %d para cima e à direita\n", i);
    }

    // Implementação de Movimentação da Torre - Cinco casas para a direita
    printf("\nMovimentação da Torre\n");
    while(j <= 5) {
        printf("Movimento %d para direita\n", j);
        j++;
    }

    // Implementação de Movimentação da Rainha - oito casas para a esquerda
    printf("\nMovimentação da Rainha\n");
    do {
        printf("Movimento %d para esquerda\n", k);
        k++;
    } while (k <= 8);
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
