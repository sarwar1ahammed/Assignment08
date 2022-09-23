#include <stdio.h>
int main()
{
    int i, j;
    for (i=1; i<=3; i++)
    {
        for (j=1; j<=19; j++)
        {
            if (j>=4-i && j<=6+i)
                printf("*");
            else if (j>=14-i && j<=16+i)
                printf("*");
            else 
                printf(" ");
        }

        printf("\n");
    }

    for (i=1; i<=10; i++)
    {

        for (j=1; j<=18; j++)
        {
            if ((i==1) && (j==7))
                    printf("MYSIRG");
            else if (i==1 && (j>=7 && j<=12))
                continue;

             if (j>=i && j<=20-i)
                printf("*");
            else 
                printf(" ");
        }

        printf("\n");
    }



    printf("\n");
    return 0;
}
