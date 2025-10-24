#include <stdlib.h>
#include <stdio.h>

int square(int x) {
    return x * x;
}

int cube(int x) {
    return x * x * x;
}

int negate(int x) {
    return -x;
}

int main()
{
    int (*funcs[3])(int);
    funcs[0] = square;
    funcs[1] = cube;
    funcs[2] = negate;
    
    int foo = 3;

    for (int i = 0; i < sizeof(funcs)/sizeof(funcs[0]);i++)
    {
	printf("%d, ", funcs[i](foo));
    }

    return EXIT_SUCCESS;
}
