#include <stdio.h>

// Função para movimentar a Torre
void moverTorre(int casas) {
    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= casas; i++) {
        printf("Passo %d: Direita\n", i);
    }
    printf("\n");
}

// Função para movimentar o Bispo
void moverBispo(int casas) {
    printf("Movimentação do Bispo:\n");
    int i = 1;
    while (i <= casas) {
        printf("Passo %d: Cima, Direita\n", i);
        i++;
    }
    printf("\n");
}

// Função para movimentar a Rainha
void moverRainha(int casas) {
    printf("Movimentação da Rainha:\n");
    int i = 1;
    do {
        printf("Passo %d: Esquerda\n", i);
        i++;
    } while (i <= casas);
    printf("\n");
}

int main() {
    // Definição do número de casas para cada peça
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    
    // Chamando funções para simular movimentos
    moverTorre(casasTorre);
    moverBispo(casasBispo);
    moverRainha(casasRainha);
    
    return 0;
}
