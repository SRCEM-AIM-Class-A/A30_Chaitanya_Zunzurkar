#include <stdio.h>
int main()
{
    int num;
     char alfa = 'A';
    printf("Enter Number :");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
       
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 != 0)
            {
                printf("*");
            }
            else
            {
                printf("%c", &alfa);
                alfa++;
            }
        }
        printf("\n");
    }

    return 0;
}
