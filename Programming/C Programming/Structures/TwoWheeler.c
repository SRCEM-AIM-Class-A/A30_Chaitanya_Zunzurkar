// write a C Program to take input of name , price and milage of 6 bike and display it.
#include <stdio.h>

struct TwoWheeler
{
    char name[20];
    int Price;
    float Milage;
};
int main()
{
    struct TwoWheeler B[6];
    for (int i = 0; i <= 6; i++)
    {
        printf("Enter name :");
        scanf("%s", &B[i].name);

        printf("Enter Price :");
        scanf("%d", &B[i].Price);

        printf("Enter Milage :");
        scanf("%f", &B[i].Milage);
        printf("\n");
    }
    for (int i = 0; i <= 6; i++)
    {
        printf("Name : %s\nPrice : %d\nMilage : %.2f\n\n", B[i].name, B[i].Price, B[i].Milage);
    }

    return 0;
}