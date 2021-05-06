#include <ctest.h>
#include <libchessviz/CheckSTR.h>

CTEST(scan_suite, check_str)
{
    char START1 = '1';
    int REAL1 = CheckSTR(&START1);
    const int EXPECT1 = 0;
    ASSERT_EQUAL(EXPECT1, REAL1);

    char START2 = '2';
    int REAL2 = CheckSTR(&START2);
    const int EXPECT2 = 1;
    ASSERT_EQUAL(EXPECT2, REAL2);

    char START3 = '3';
    int REAL3 = CheckSTR(&START3);
    const int EXPECT3 = 2;
    ASSERT_EQUAL(EXPECT3, REAL3);

    char START4 = '4';
    int REAL4 = CheckSTR(&START4);
    const int EXPECT4 = 3;
    ASSERT_EQUAL(EXPECT4, REAL4);

    char START5 = '5';
    int REAL5 = CheckSTR(&START5);
    const int EXPECT5 = 4;
    ASSERT_EQUAL(EXPECT5, REAL5);

    char START6 = '6';
    int REAL6 = CheckSTR(&START6);
    const int EXPECT6 = 5;
    ASSERT_EQUAL(EXPECT6, REAL6);

    char START7 = '7';
    int REAL7 = CheckSTR(&START7);
    const int EXPECT7 = 6;
    ASSERT_EQUAL(EXPECT7, REAL7);

    char START8 = '8';
    int REAL8 = CheckSTR(&START8);
    const int EXPECT8 = 7;
    ASSERT_EQUAL(EXPECT8, REAL8);

    char STARTNOT = '9';
    int REALNOT = CheckSTR(&STARTNOT);
    const int EXPECTNOT = -1;
    ASSERT_EQUAL(EXPECTNOT, REALNOT);
}
