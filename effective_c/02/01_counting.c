#include<stdlib.h>
#include<stdio.h>
unsigned int increment(void) 
{
    static unsigned int counter = 0;
    counter++;
    return counter;
}
int main() 
{
    for (int i = 0; i < 5; i++) 
    {
	printf("%d ", increment());
    }
    return EXIT_SUCCESS;
}
