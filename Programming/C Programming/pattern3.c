#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number :");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= (num - i); j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= num; k++)
        {
            if (k > (num - i))
            {
                printf("* ");
            }
        }
        printf("\n");
        
    }

    return 0;
}