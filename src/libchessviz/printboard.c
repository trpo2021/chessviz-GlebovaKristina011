#include <stdlib.h>
#include <stdio.h>

void printboard(char chessboard1[11][11])
{
    int i, z;
    for (i = 0; i < 8; i++) {
        printf("%d|", i + 1);
        for (z = 0; z < 8; z++) {
            printf("%c ", chessboard1[i][z]);
        }
        printf("\n");
    }
    printf("  _______________  \n  a b c d e f g h");
    printf("\n");
}
