// arquivo: tabuleiro.h
#define LINHA 8 
#define COLUNA 8 
#define CARACTERE 4 

void print_tab(char board[LINHA][COLUNA][CARACTERE]);
void jogada(char board[LINHA][COLUNA][CARACTERE], int from_row, int from_col, int to_row, int to_col);
