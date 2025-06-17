#include <stdio.h>

int main() {

    int agua = 0;
    char tabuleiro[10][10];

    // Preencher o tabuleiro com '0'
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';
        }
    }

    int linha_h = 1, coluna_h = 1; // Começa em B2
    int linha_v = 4, coluna_v = 4; // Começa em E5

    
    char navio_horizontal[3] = {'x', 'x', 'x'};
    char navio_vertical[5] = {'x', 'x', 'x', 'x', 'x'};


    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_h][coluna_h + i] = navio_horizontal[i];
    }

    for (int i = 0; i < 5; i++) {
        tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];
    }

    // Imprimir cabeçalho
    printf(" === TABULEIRO BATALHA NAVAL ===\n   ");
    for (char letra = 'A'; letra <= 'J'; letra++) {
        printf("%c ", letra);
    }
    printf("\n");

    // Imprimir o tabuleiro com números de linha
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
