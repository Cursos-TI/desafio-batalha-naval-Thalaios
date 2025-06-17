#include <stdio.h>
 
int main() {

    char tabuleiro[10][10];
 
    char navioHorizontal[3] = {'3','3','3'};
    char navioVertical[5] = {'3','3','3','3','3'};
    char navioDiagonal[] = {'3'};

    //Preenchendo o tabuleior com '0'
      for (int i = 0; i < 10; i++)
      { for(int j = 0; j < 10; j++)
        { tabuleiro[i][j] = '-';  } 
      }

    //Definindo poçisão para navio Horizontal
    int linhanavioHorizontal = 2, colunanavioHorizontal = 6; // Começa em C4

    //Definindo poçisão para navio Vertical
    int linhaNavioVertical = 5, colunaNavioVertical = 8; // Começa em G6

    //Imprime o navio Horizontal
    for(int i = 0; i < 3; i++)
    { tabuleiro[linhanavioHorizontal][colunanavioHorizontal + i] = navioHorizontal[i]; }

    //Imprime o navio Vertical
    for(int i = 0; i < 5; i++)
    { tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = navioVertical[i]; }

    //Imprime o navio Diagonal Principal
    for (int i = 1; i < 4; i++)
    { for(int j = 1; j < 4; j++)
        { if(i != j) {
            continue;
            } else {
                tabuleiro[i][j] = '3';
            }
        }
    }

    //Imprime o navio Diagonal Secundaria
    for (int i = 8; i >= 4; i--)
    { int j = 10 - i; 
        tabuleiro[i][j] = '3';
    }

      //Cabeçalho do Tabuleiro
      printf("=== TABULEIRO DE BATALHA NAVAL ===\n   ");

      //Imprime as letras das coordenadas do tabuleiro
      for(char letra = 'A'; letra < 'K'; letra++){
        printf("%c ", letra); }
        printf("\n");

      //Imprime o tabuleiro com os numeros para coordenadas
      for(int i = 0; i < 10; i++){
        printf("%2d ", 1 + i);
        for(int j = 0; j < 10; j++){
            printf("%c ", tabuleiro[i][j]);  }
            printf("\n");
        }
 
    return 0;
}