#include <stdio.h>
int main()
{
    int i, j;
    for (i=1; i<=5; i++)
    {
        for (j=1; j<=9; j++)
        {
            if (j==i)
                printf("* ");
            else if (j==10-i)
                printf("* ");
            else if (i==1)
                printf("* ");
            else 
                printf("  ");
        }

        printf("\n");
    }


    printf("\n");
    return 0;
}
