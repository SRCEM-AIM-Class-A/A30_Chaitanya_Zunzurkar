#include <stdio.h>

void pattern(int num);
int main()
{
    int num;
    printf("Enter Number :");
    scanf("%d", &num);
    pattern(num);
    return 0;
}

void pattern(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= (num - i); j++)
        {
            printf(" ");
        }
        for (int k = 1; k < num; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}