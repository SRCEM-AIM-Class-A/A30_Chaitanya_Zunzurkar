#include <bits/stdc++.h>
using namespace std;

string dec2Bin(int num)
{
    string result = "";
    if (num == 0) return "0";
    while (num > 0)
    {
        if (num % 2 == 1)
        {
            result += '1';
        }
        else
        {
            result += '0';
        }

        num = num / 2;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    int num , i;
    cin >> num >> i;

    cout << dec2Bin(num) << endl;
    int newVal = (num ^ (1 << i));
    cout << dec2Bin(newVal) << endl;
    return 0;
}