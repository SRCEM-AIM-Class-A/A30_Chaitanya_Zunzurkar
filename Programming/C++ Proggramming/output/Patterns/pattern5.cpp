#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter Number of rows :";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        if (i <= ((rows/2)+1))
        {
            for (int col = 1; col <= i; col++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int col = 1; col <= rows - i + 1; col++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}