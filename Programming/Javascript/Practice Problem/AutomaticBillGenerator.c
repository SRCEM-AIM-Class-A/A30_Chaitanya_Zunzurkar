#include <stdio.h>
#include <stdlib.h>

struct AutomaticBillGenerator
{
    char CoustomerName[20];
    char ProductName[20];
    char OutletName[20];
};

int main()
{
    struct AutomaticBillGenerator Bill;
    // FILE *fptr = NULL;
    // fptr = fopen("BillGenrator.txt", "w+");

    // if (fptr == NULL)
    // {
    //     printf("File does not exist.\n");
    // }

    printf("Enter Coustomer name :");
    fgets(Bill.CoustomerName, sizeof(Bill.CoustomerName), stdin);
    Bill.CoustomerName[strcspn(Bill.CoustomerName,"\n")] = '\0';

    printf("Enter Product name :");
    fgets(Bill.ProductName, sizeof(Bill.ProductName), stdin);
    Bill.ProductName[strcspn(Bill.ProductName,"\n")] = '\0';

    printf("Enter Outlet name :");
    fgets(Bill.OutletName, sizeof(Bill.OutletName), stdin);
    Bill.OutletName[strcspn(Bill.OutletName,"\n")] = '\0';
    

    return 0;
}