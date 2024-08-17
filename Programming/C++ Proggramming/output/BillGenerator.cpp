/* Programm to make bill generator 
    // it will take no. of product buyed with their name and price.
    // it will print name of individiual product with its price and total bill at the end .
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int num;
class BillGenerator
{
    string s[10];
    float price_of_product[10];
    float sum = 0;

public:
    void Name_of_Product(void);
    void Price(void);
    void TotalAmount(void);
    void PrintBill(void);
};

int main()
{
    cout << "Enter Number of Product buyed :";
    cin >> num;
    cout<<endl;

    BillGenerator BG;
    BG.Name_of_Product();
    cout<<endl;

    BG.Price();
    cout<<endl;
    
    BG.TotalAmount();
    BG.PrintBill();
    return 0;
}

void BillGenerator::Name_of_Product()
{
    for (int i = 0; i <= (num - 1); i++)
    {
        cout << "Enter Name of Product :";
        cin >> s[i];
    }
}

void BillGenerator::Price()
{
    for (int i = 0; i <= (num - 1); i++)
    {
        cout << "Enter Price Of Product " << s[i] << " :";
        cin >> price_of_product[i];
    }
}

void BillGenerator::TotalAmount()
{
    for (int i = 0; i <= (num - 1); i++)
    {
        sum += price_of_product[i];
    }
}

void BillGenerator::PrintBill()
{
    for (int i = 0; i <= (num - 1); i++)
    {
        cout << s[i] << " :" << price_of_product[i]<<endl;
    }
    cout << endl;
    cout << "Total Amount :" << sum;
}