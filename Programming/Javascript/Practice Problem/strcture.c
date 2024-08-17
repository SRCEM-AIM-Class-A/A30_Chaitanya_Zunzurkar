#include <stdio.h>

struct Students
{
    char name[30];
    double percentile;
    long int RollNo;
};

int main()
{
    struct Students student[10];

    for (int i = 1; i < 11; i++)
    {
        printf("Enter Student Name :");
        fgets(student[i].name, 30, stdin);
        student[i].name[strcspn(student[i].name, "\n")] = '\0';

        printf("Enter Roll Number of CET: ");
        scanf("%ld", &student[i].RollNo);
        while (getchar() != '\n');

        printf("Enter MHTCET percentile: ");
        scanf("%lf", &student[i].percentile);
        while (getchar() != '\n');

        printf("\n");
    }

    // int largest = 0;
    // for (int j = 0; j < 10; j++)
    // {
    //     if (student[largest].percentile < student[largest + 1].percentile)
    //     {
    //         student[largest].percentile = student[student + 1].percentile;
    //     }
    // }

    return 0;
}