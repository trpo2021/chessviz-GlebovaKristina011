#include <libchessviz/turn.h>
#include <libchessviz/printboard.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char board[11][11] = { "rnbqkbnr", "pppppppp", "        ", "        ",
        "        ", "        ", "PPPPPPPP", "RNBQKBNR" };
    printboard(board);
    while (1) {
        hod(board);
    }
    return 0;
}
