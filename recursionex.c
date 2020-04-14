/* EXAMPLE OF RECURSION USING FACTORIAL OF A NO. CONCEPT */

#include <stdio.h>

long fact(int n)
{
    if (n>0)
        return(n*fact(n-1));
    else
        return(1);
}
main()
{
    printf("factorial of a no. is %ld",fact(n))
}
/* can also use clrscr() & getch() */
