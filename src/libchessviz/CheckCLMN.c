#include <libchessviz/CheckCLMN.h>
#include <stdio.h>
#include <stdlib.h>
int CheckCLMN(char scanclmn)
{
    switch (scanclmn) {
    case 'a':
        return 0;

    case 'b':
        return 1;

    case 'c':
        return 2;

    case 'd':
        return 3;

    case 'e':
        return 4;

    case 'f':
        return 5;

    case 'g':
        return 6;

    case 'h':
        return 7;

    default:
        return -1;
    }
}