#include <stdio.h>
#include <stdlib.h>

int main(){
    if (printf("%s, %s\n", "Hello", "world!") ==  EOF)
    {
	return EXIT_FAILURE;
    };
    return EXIT_SUCCESS;
}
