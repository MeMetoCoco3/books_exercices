#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    unsigned int ui = UINT_MAX;
    signed char c = -1;
    if (c == ui) { printf("%d equals %u\n", c, ui); }


    signed char cresult, c1, c2, c3;
    c1 = 100; c2 = 3; c3 = 4;
    // cresult = c1 * c2 / c3;
    signed char cmid = c1 * c2;
    cresult = cmid / c3;
    printf("%d\n", cresult);
}
