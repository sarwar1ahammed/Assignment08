#include <stdio.h>
int main()
{
    int i, j;
    char k;
    for (i=1; i<=5; i++)
    {
        for (j=1; j<=9; j++)
        {
            if (j<=5-i)
                printf("  ");
        }
        k = 64;
        for (j=1; j<=5; j++)
        {
            if (j>=6-i)
                printf("%c ", ++k);
        }
        
       
        k--;
        
        while (k!=64)
            printf("%c ", k--);


        printf("\n");
    }


    printf("\n");
    return 0;
}
