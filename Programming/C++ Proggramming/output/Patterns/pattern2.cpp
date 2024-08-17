#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter Number of rows :";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int col = 1; col <= i; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

