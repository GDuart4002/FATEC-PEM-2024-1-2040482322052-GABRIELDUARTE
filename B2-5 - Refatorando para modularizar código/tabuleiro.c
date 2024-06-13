// arquivo: tabuleiro.c
#include "tabuleiro.h"
#include <stdio.h>
#include <string.h>

void print_tab(char board[LINHA][COLUNA][CARACTERE]) {
    printf("\n   a   b   c   d   e   f   g   h\n");
    printf("  -------------------------------\n");
    
    for (int i = 7; i >= 0; i--) {
        printf("%d|", i+1);
        for (int j = 0; j < 8; j++) {
            printf("%s ", board[i][j]);
        }
        printf("\n");
    }
}

void jogada(char board[LINHA][COLUNA][CARACTERE], int from_row, int from_col, int to_row, int to_col) {
    strcpy(board[to_row][to_col], board[from_row][from_col]);
    strcpy(board[from_row][from_col], "   ");
}
