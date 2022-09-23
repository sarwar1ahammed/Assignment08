#include <stdio.h>
int main()
{
    int i, j;
    char k;
    for (i=1; i<=7; i++)
    {   
        k = 64;
        for (j=1; j<=7; j++)
        {
            if (j<=8-i)
                printf("%c ", ++k);
        }

        for (j=1; j<=13; j++)
        {
            if (j>=9-i && j<=5+i)
                printf("  ");
        }

        if (i==1)
            k--;
        
        while (k>64)
            printf("%c ", k--);



        printf("\n");
    }


    printf("\n");
    return 0;

}
