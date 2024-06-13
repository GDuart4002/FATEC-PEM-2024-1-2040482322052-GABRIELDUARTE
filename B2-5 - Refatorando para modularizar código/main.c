// arquivo: main.c
#include "tabuleiro.h"
#include <stdio.h>

int main() {
    char board[LINHA][COLUNA][CARACTERE] = {
        {"Tb1", "Cb1", "Bb1", "Db1", "Rb1", "Bb2", "Cb2", "Tb2"},
        {"Pb1", "Pb2", "Pb3", "Pb4", "Pb5", "Pb6", "Pb7", "Pb8"},
        {"   ", "   ", "   ", "   ", "   ", "   ", "   ", "   "},
        {"   ", "   ", "   ", "   ", "   ", "   ", "   ", "   "},
        {"   ", "   ", "   ", "   ", "   ", "   ", "   ", "   "},
        {"   ", "   ", "   ", "   ", "   ", "   ", "   ", "   "},
        {"Pp1", "Pp2", "Pp3", "Pp4", "Pp5", "Pp6", "Pp7", "Pp8"},
        {"Tp1", "Cp1", "Bp1", "Dp1", "Rp1", "Bp2", "Cp2", "Tp2"},
    };
    
    printf("Tabuleiro organizado");
    print_tab(board);
    
    jogada(board, 1, 4, 3, 4);
    printf("---------------------------------\n");
    printf("Jogada 1\n");
    printf("---------------------------------");
    print_tab(board);
    
    jogada(board, 6, 4, 4, 4);
    printf("---------------------------------\n");
    printf("Pretas jogam\n");
    printf("---------------------------------");
    print_tab(board);
    
    jogada(board, 0, 5, 3, 2);
    printf("---------------------------------\n");
    printf("Jogada 2\n");
    printf("---------------------------------");
    print_tab(board);
    
    jogada(board, 7, 1, 5, 2);
    printf("---------------------------------\n");
    printf("Pretas jogam\n");
    printf("---------------------------------");
    print_tab(board);
    
    jogada(board, 0, 3, 4, 7);
    printf("---------------------------------\n");
    printf("Jogada 3\n");
    printf("---------------------------------");
    print_tab(board);
    
    jogada(board, 7, 6, 5, 5);
    printf("---------------------------------\n");
    printf("Pretas jogam\n");
    printf("---------------------------------");
    print_tab(board);
    
    jogada(board, 4, 7, 6, 5);
    printf("---------------------------------\n");
    printf("Jogada 4\n");
    printf("---------------------------------");
    print_tab(board);
    
    printf("Cheque mate brancas vencem o jogo.");
    return 0;
}
