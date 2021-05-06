#include <libchessviz/CheckSTR.h>
#include <stdio.h>
#include <stdlib.h>
int CheckSTR(char scanclmn[])
{
    int i;
    for (i = 1; i <= 8; i++) {
        if (atoi(scanclmn) == (i))
            return i - 1;
    }
    return -1;
}
