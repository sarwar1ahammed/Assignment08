#include <stdio.h>
int main()
{
    int i, j, k;
    for (i=1; i<=4; i++)
    {
        k = 0; 
        for (j=1; j<=7; j++)
        {
            if (j<=i-1) 
                printf(" ");
        }

        for (j=1; j<=4; j++)
        {
            if (j>=i)
                printf("%d", ++k);
        }

        k--;
        while (k)
            printf("%d", k--);        


        printf("\n");
    }

    printf("\n");
    return 0;
}
