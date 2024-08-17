#include <iostream>
#include <string.h>

using namespace std;

class BankAccount
{
private:
    string name[20];
    int acccount_no;
    string TypeOfAccount[20];

public:
    void getData(string n, int ac, string tac);
    void putData();
};

int main()
{
    string n[20];
    int ac;
    string tac[20];

    cout << "Enter Name of Depositor :";
    cin >> n[20];

    cout << "Enter your Account Number :";
    cin >> ac;

    cout << "Enter type of Account :";
    cin >> tac[20];

    BankAccount C1;
    C1.getData(n[20], ac, tac[20]);
    C1.putData();

    return 0;
}

void BankAccount::getData(string n, int ac, string tac)
{
    name[20] = n;
    acccount_no = ac;
    TypeOfAccount[20] = tac;
}
void BankAccount::putData()
{
    cout << name[20] << endl;
    cout << acccount_no << endl;
    cout << TypeOfAccount[20] << endl;
}
