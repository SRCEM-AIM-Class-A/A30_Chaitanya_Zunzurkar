#include <stdio.h>

void pattern(int a);

int main()
{
    int num;
    printf("Enter Number :");
    scanf("%d", &num);

    pattern(num);
    return 0;
}

void pattern(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= (a - i); j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= ((2 * i) - 2); k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}