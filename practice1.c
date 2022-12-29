#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (j <= i)
            {
                printf("*\t");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}