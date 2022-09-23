#include <stdio.h>
int main()
{
    int i, j;
    char k;
    for (i=1; i<=4; i++)
    {
        for (j=1; j<=7; j++)
        {
            if (j<=i-1)
                printf("  ");
        }

        k = 64;
        for (j=1; j<=4; j++)
        {
            if (j>=i)
                printf("%c ", ++k);
        }

        k--;
        while (k>64)
            printf("%c ", k--);


        printf("\n");
    }



    printf("\n");
    return 0;
}
