#include <stdio.h>

// Função para mover a torre 
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita.\n");
    moverTorre(casas - 1);
}

// Função para mover o Bispo 
void moverBispo(int casas, int x, int y) {
    if (casas == 0) return;
    printf("Cima, Direita.\n");
    moverBispo(casas - 1, x + 1, y + 1);
}

// Função para mover a Rainha 
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda.\n");
    moverRainha(casas - 1);
}

// Função para mover o Cavalo 
void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        printf("Cima\n");
        printf("Cima\n");
        printf("Direita\n");
    }
}

int main() {
    printf("\n*=====================*\n");
    printf("Movimento da TORRE:\n");
    moverTorre(5);
    printf("*=====================*\n\n");

    printf("*=====================*\n");
    printf("Movimento do BISPO:\n");
    moverBispo(4, 0, 0);
    printf("*=====================*\n\n");

    printf("*=====================*\n");
    printf("Movimento da RAINHA:\n");
    moverRainha(8);
    printf("*=====================*\n\n");

    printf("*=====================*\n");
    printf("Movimento do CAVALO:\n");
    moverCavalo(1); // Faz um movimento do Cavalo
    printf("*=====================*\n\n");
    
    return 0;
}
