//A Program to list all the perfect numbers in btw 1 to 500 .
#include <stdio.h>
int main()
{
    int i, j, e=500, sum;

    printf("\n\n\n\n\n\nAll Perfect numbers between 1 to %d:\n", e);
    for(i=1; i<=e; i++)
    {
        sum = 0;
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
        if(sum == i)
        {
            printf("%d, ", i);
        }
           }
 printf("\n\n\n\n\n\n");
    return 0;
}
