#include <libchessviz/printboard.h>
#include <libchessviz/turn.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char board[11][11] = {"rnbqkbnr",
                          "pppppppp",
                          "        ",
                          "        ",
                          "        ",
                          "        ",
                          "PPPPPPPP",
                          "RNBQKBNR"};
    printboard(board);
    while (1) {
        hod(board);
    }
    return 0;
}
