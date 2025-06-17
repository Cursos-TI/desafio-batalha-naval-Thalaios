#include <stdio.h>

    int main() {
    //Declarando a matrix do tabuleiro.
    char tabuleiro[10][10];

    for(int i = 0; i < 10; i++) 
    { for(int j = 0; j < 10; j++)
        {  tabuleiro[i][j] = '-';
        }
    } 
    
    int navioHorizontal_Linha = 0, navioHorizontal_Coluna = 4;
    int navioVertical_Linha = 1, navioVertical_Coluna  = 3;
    
    char navioHorizontal[3] = {'x', 'x', 'x'};
    char navioVertical[5] = {'x', 'x', 'x', 'x', 'x'};
    
    for(int i = 0; i < 3; i++){
        tabuleiro[navioHorizontal_Linha][navioHorizontal_Coluna] = navioHorizontal[i];
    }
    for(int i = 0; i < 5; i++){
        tabuleiro[navioVertical_Linha][navioVertical_Coluna] = navioVertical[i];
    }

    //exibição do tabuleiro com o espaçamento necessario para alinhar as letras das colunas.
    printf("== TABULEIRO BATALHA NAVAL == \n  ");
    for (char letra = 'A'; letra <= 'J'; letra++) 
    {   printf(" %c", letra);
    } 
    printf("\n");
    
    // Imprimir o tabuleiro com números de linha.
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}