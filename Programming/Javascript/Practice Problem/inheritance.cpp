/* Example of Single Inheritance*/
#include <iostream>
using namespace std;

class Base
{
    int Data1;

public:
    int Data2;
    void setData();
    int getData1();
    int getData2();
};

class Derived : public Base
{
    int Data3;

public:
    int Process();
};

int Derived ::Process()
{
    Data3 = Data2 * getData1();
    return Data3;
}

void Base ::setData()
{
    cout << "Enter any integer value :";
    cin >> Data1;

    cout << "Enter any integer value :";
    cin >> Data2;

}

int Base ::getData1()
{
    return Data1;
}

int Base ::getData2()
{
    return Data2;
}

int main()
{
    Derived obj;
    obj.setData();
    cout << "The Value of data 1 is " << obj.getData1() << endl;
    cout << "The Value of data 2 is " << obj.getData2() << endl;
    cout << "The Value of data 3 is " << obj.Process() << endl;

    return 0;
}