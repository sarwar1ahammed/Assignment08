#include <stdio.h>
int main()
{
    int i, j, k;

    for (i=1; i<=4; i++)
    {
        k = 0;
        for (j=1; j<=7; j++)
        {
            if (j<=5-i)
                printf("%d ", ++k);
            
        }

       for (j=1; j<=7; j++)
       {
             if (j>=6-i && j<=2+i)
                printf("  ");

       }

        if (i==1)
            k--;

            while (k)
                printf("%d ", k--);


        printf("\n");
    }


    printf("\n");
    return 0;
}
