#include <stdio.h>
#include <string.h>

#define LINHA 8 
#define COLUNA 8 
#define CARACTERE 4 

void print_board(char board[LINHA][COLUNA][CARACTERE]) {
    
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
    print_board(board);
    
    strcpy(board[3][4], board[1][4]);
    strcpy(board[1][4], "   ");
    printf("---------------------------------\n");
    printf("Jogada 1\n");
    printf("---------------------------------");
    print_board(board);
    
    strcpy(board[4][4], board[6][4]);
    strcpy(board[6][4], "   ");
    printf("---------------------------------\n");
    printf("Pretas jogam\n");
    printf("---------------------------------");
    print_board(board);
    
    strcpy(board[3][2], board[0][5]);
    strcpy(board[0][5], "   ");
    printf("---------------------------------\n");
    printf("Jogada 2\n");
    printf("---------------------------------");
    print_board(board);
    
    strcpy(board[5][2], board[7][1]);
    strcpy(board[7][1], "   ");
    printf("---------------------------------\n");
    printf("Pretas jogam\n");
    printf("---------------------------------");
    print_board(board);
    
    strcpy(board[4][7], board[0][3]);
    strcpy(board[0][3], "   ");
    printf("---------------------------------\n");
    printf("Jogada 3\n");
    printf("---------------------------------");
    print_board(board);
    
    strcpy(board[5][5], board[7][6]);
    strcpy(board[7][6], "   ");
    printf("---------------------------------\n");
    printf("Pretas jogam\n");
    printf("---------------------------------");
    print_board(board);
    
    strcpy(board[6][5], board[4][7]);
    strcpy(board[4][7], "   ");
    printf("---------------------------------\n");
    printf("Jogada 4\n");
    printf("---------------------------------");
    print_board(board);
    printf("Cheque mate brancas vencem o jogo.");
    return 0;
}
