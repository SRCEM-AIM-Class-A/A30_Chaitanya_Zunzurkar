#include <stdio.h>
int Power(int a,int b);
int main()
{
    int num1,num2;
    printf("Enter number :");
    scanf("%d", &num1);
    printf("Enter number :");
    scanf("%d", &num2);

    printf("a power b : %d", Power(num1,num2));
    return 0;
}
int Power(int a,int b)
{
    if(b == 0)
    {
        return 0;
    }
    else if(b == 1)
    {
        return a;
    }
    else{
        return a * Power(a, b-1);
    }
}