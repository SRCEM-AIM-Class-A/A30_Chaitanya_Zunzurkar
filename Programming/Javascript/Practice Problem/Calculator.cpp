#include <iostream>
#include <cmath>
using namespace std;

//  creating Class SimppleCalculator
class SimpleCalculator
{
    float num1; /* private member of class */
    float num2;
    char oprator;

public:
    void setData(float n1, float n2); /* Methods of the class */
    void operation(int num1, int num2, char oprator);
};

// defination if setData in SimpleCalculator
void SimpleCalculator::setData(float n1, float n2)
{
    num1 = n1;
    num2 = n2;
}
// defination of opration in SimpleCalculator. Here all opration in simpleCa;culation are defined i.e are addition , substraction , multiplication and Division
void SimpleCalculator ::operation(int num1, int num2, char oprator)
{
    if (oprator == '+')
    {
        cout << "The sum of 2 number " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
    }
    else if (oprator == '-')
    {
        cout << "The difference of 2 number " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
    }
    else if (oprator == '*')
    {
        cout << "The Multiplication of 2 number " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
    }
    else if (oprator == '/')
    {
        if (num2 == 0)
        {
            cout << "Division by Zero result as undifined." << endl;
        }
        else
        {
            cout << "The Division of 2 number " << num1 << " and " << num2 << " is " << num1 / num2 << endl;
        }
    }
}

// creating Class scientific_calculator
class Scientific_Calculator
{
    float num1;
    float num2;
    char oprator;

public:
    // void setData(float n1, float n2); /* Methods of the class */
    void operation(int num1, int num2, char oprator);
};

// void Scientific_Calculator::setData(float n1, float n2)
// {
//     num1 = n1;
//     num2 = n2;
// }

// defination of operation in scientif_Calculator i.e power , sin , cos , tan values
void Scientific_Calculator::operation(int num1, int num2, char oprator)
{
    if (oprator == '^')
    {
        cout << num1 << " power " << num2 << " is " << pow(num1, num2) << endl;
    }
    else if (oprator == 's')
    {
        cout << "Sin of " << num1 << " is " << sin(((3.14 * num1) / 180)) << endl;
    }
    else if (oprator == 'c')
    {
        cout << "Cos of " << num1 << " is " << cos(((3.14 * num1) / 180)) << endl;
    }
    else if (oprator == 't')
    {
        cout << "Tan of " << num1 << " is " << tan(((3.14 * num1) / 180)) << endl;
    }
}

// creating inherited class hybridCalculator from 2 Base class simpleCalculator and scientific_Calculator
class hybridCalculator : public SimpleCalculator, public Scientific_Calculator
{
};

int main()
{
    float n1, n2;
    char op;
    cout << "Enter Number 1 : ";
    cin >> n1;

    cout << "Enter oprator : ";
    cin >> op;

    if (op != 's' && op != 'c' && op != 't' && op != '^')
    {
        cout << "Enter Number 2 : ";
        cin >> n2;
    }
    if (op == '^')
    {
        cout << "Enter power : ";
        cin >> n2;
    }

    hybridCalculator calculation;
    calculation.setData(n1, n2);

    if (op == '+' || op == '-' || op == '*' || op == '/')
    {
        calculation.SimpleCalculator::operation(n1, n2, op);
    }
    else if (op == '^' || op == 's' || op == 'c' || op == 't')
    {
        calculation.Scientific_Calculator::operation(n1, n2, op);
    }

    return 0;
}
