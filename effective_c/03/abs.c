#include <stdio.h>
#include "../types.h"

#define ABS(i) (i < 0 ? -i : i)



int main()
{
    i32 jamon = -4;
    _BitInt(4) perico = 1;
    unsigned _BitInt(3) jamonelas = 2;

    int permissions = 0777;
    printf("%d\n", ABS(jamon));
    printf("%d\n", (int) perico);

    printf("%d\n", permissions);
}
