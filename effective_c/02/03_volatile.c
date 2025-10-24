#include<stdlib.h>
#include<stdio.h>
#include<setjmp.h>

static jmp_buf buf;
int main() 
{
    /*
     After a call to longjmp, all variables local to the function that made the corresponding setjmp call and that were changed after the setjmp call have undefined values, unless they are declared volatile.
      */
    int volatile foo = 5;
    if (setjmp(buf) != 2) 
    {
	if (foo != 5) 
	{ 
	    puts("hi"); 
	    longjmp(buf, 2);
	}

	foo = 6;
	// What jump does is restoring the stack to one point, not the registers
	longjmp(buf, 1);// Go baks to setjmp, and setjmp returns the value from longjmp(in this case 1)
    }
    return EXIT_SUCCESS;
}
