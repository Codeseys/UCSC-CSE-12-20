#include <stdio.h>
int main()
{
    int k = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 4; j++)
            printf("\t");
        printf("%d", k++);
        for (int l = 1; l <= i; l++)
        {
            if (l > 0)
            {
                printf("\t*");
            }
            printf("\t%d", k++);
        }

        printf("\n");
    }
    return 0;
}