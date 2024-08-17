// Program to check whether Nubmer is Strong Number or not.
#include <stdio.h>
int main()
{
    int num, OriNum, remainder, sum = 0;
    printf("Enter Number :");
    scanf("%d", &num);

    OriNum = num;
    while (OriNum != 0)
    {
        remainder = OriNum % 10;        
        int fact = 1;
        for (int i = 1; i <= remainder; i++)
        {
            fact = fact * i;
        }
        sum += fact;
        OriNum /= 10;
    }
    if (sum == num)
    {
        printf("%d is strong Number\n", num);
    }
    else
    {
        printf("%d is not strong Number\n", num);
    }
    return 0;
}