#include <stdio.h>

#define VERTICAL 8
#define HORIZONTAL 8

int main(void) {
    char peca[] = "xTCBDRP";
    char cor[] = "pppppppp";
    
    printf("\n");
    
    for(int linha = 0; linha < VERTICAL; linha++) {
        int n = 0;
        
        for(int coluna = 0; coluna < HORIZONTAL; coluna++) {
            printf("|");
            
            if (linha == 0 || linha == 7) {
                int i = (coluna < 4) ? coluna + 1 : HORIZONTAL - coluna;
                printf("%c%c%d", peca[i], cor[(coluna < 4) ? 0 : 1], ++n);
            } 
            else if (linha == 1 || linha == 6) {
                printf("%c%c%d", peca[6], cor[(coluna < 4) ? 0 : 1], ++n);
            } 
            else if (linha > 1 && linha < 6) {
                printf(" %c ", peca[0]);
            }
            
            if (coluna == HORIZONTAL - 1) {
                printf("|");
            }
        }
        printf("\n");
    }
    return 0;
}




