#include <stdio.h>
int main()
{
    int i, j;
    for (i=1; i<=5; i++)
    {
        for (j=1; j<=9; j++)
        {
            if (j==6-i)
                printf("* ");
            else if (j==4+i)
                printf("* ");
            else if (i==5)
                printf("* ");
            else 
                printf("  ");
        }

        printf("\n");
    }


    printf("\n");
    return 0;
}
