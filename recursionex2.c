/* Fibonacci series */
/* with the help of recursion a program becomes dynamic */

#include <stdio.h>

int fib(int n)
{
    if (n==1 || n==2)
        return(1);
    return(fib(n-1)+fib(n-2)); 
}

main()
{
int i;
for (i=1;i<=10;i++)
    printf("%d",fib(i));
}
