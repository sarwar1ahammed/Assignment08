#include <stdio.h>
int main()
{
    int i, j;
    for (i=1; i<=5; i++)
    {
        for (j=1; j<=5; j++)
        {
            if (j==1)
                printf("* ");
            else if (i==5)
                printf("* ");
            else if (j==i)
                printf("* ");
            else 
                printf("  ");
        }

        printf("\n");
    }

    printf("\n");
    return 0;
}
