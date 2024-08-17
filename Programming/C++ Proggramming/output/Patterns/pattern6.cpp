#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter Number of rows :";
    cin >> rows;

    for (int i = 1; i <= 2 * rows - 1; i++)
    {
        if (i <= (((2 * rows - 1) / 2) + 1))
        {
            for (int j = 1; j <= rows - i; j++)
            {
                cout << " ";
            }
            for (int k = 1; k <= i; k++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int l = 1; l <= i - rows; l++)
            {
                cout << " ";
            }
            for (int m = 1; m <= 2 * rows - i; m++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}