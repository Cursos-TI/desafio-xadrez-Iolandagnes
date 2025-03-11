#include <stdio.h>

//Implementação dos procedimentos do nível mestre

//Implementação da Torre - Cinco casas para a direita
void moverTorre (int casas) {
    if (casas > 0) {
        moverTorre(casas - 1);
        printf("Movimento %d para direita\n", casas);
    }
}

//Implementação da Rainha - oito casas para a esquerda
void moverRainha (int casas) {
    if (casas > 0) {
        moverRainha(casas - 1);
        printf("Movimento %d para esquerda\n", casas);
    }
}

// Implementação de Movimentação do Bispo - Cinco casas na diagonal para cima e à direita
void moverBispo (int casas) {
    if (casas > 0) {
        moverBispo(casas - 1);
        printf("Movimento %d para cima e à direita\n", casas);
    }
}


int main() {
    int i, j = 1, k = 1, l = 1, m;
    int casasTorre = 5, casasRainha = 8, casasBispo = 5;

    // Nível Novato - Movimentação das Peças

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

    // Implementação do cavalo - duas casas para baixo e uma casa para a esquerda
    printf("\nMovimentação do cavalo\n");
    while(l--) {
        for(m = 1; m <= 2; m++) {
            printf("Movimento %d para baixo\n", m);
        }
        printf("Movimento 1 perpendicular para a esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    printf("\nNível Mestre - movimentações\n");

    printf("\nMovimentação da Torre\n");
    moverTorre(casasTorre);

    printf("\nMovimentação da Rainha\n");
    moverRainha(casasRainha);

    printf("\nMovimentação do cavalo\n");
    for (int aux = 1; aux <= 1; aux++)
    {
        for(m = 1; m <= 2; m++) {
            printf("Movimento %d para cima\n", m);
        }
        printf("Movimento %d perpendicular para a direita\n", aux);
    }

    printf("\nMovimentação do Bispo\n");
    moverBispo(casasBispo);

    return 0;
}
