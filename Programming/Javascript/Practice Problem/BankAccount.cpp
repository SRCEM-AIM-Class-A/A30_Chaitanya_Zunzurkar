#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Account
{
    string Name;
    long int accNo;
    double accBalance;

public:
    void getData();
    void display();
} coustomer;

class checkBalance : public Account
{
private:
    long int search;
public:
    void getAccountNo(int long s);
   int searchAccount(long int s);
   void setSearch(long int s);
   void 
}coustomer1;

void checkBalance::getAccountNo()
{
    cout<<"Enter Account Number :";
    cin>>search;
}

void checkBalance::searchAccount()
{
    if(search == coustomer.accNo)
    {
        coustomer.display();
    }
}
void Account ::getData()
{
    cout << "Enter your name :";
    getline(cin, Name);

    cout << "Enter Account Number :";
    cin >> accNo;

    cout << "Enter Money you want to deposite :";
    cin >> accBalance;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << endl;
}
void Account::display()
{
    cout << "Name of the Coustomer :" << coustomer.Name << endl
         << "Account Number :" << coustomer.accNo << endl
         << "Money Deposited :" << coustomer.accBalance << endl;
}
int main()
{
    coustomer.getData();
    coustomer1.getAccountNo();
    coustomer1.setSearch();
    coustomer1.searchAccount();

    return 0;
}