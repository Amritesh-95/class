#include <stdio.h>
int main()
{
    int i = 1, j;
    for (i; i <= 9; i++)
    {
        j = 1;
        for (j; j <= i; j++)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}