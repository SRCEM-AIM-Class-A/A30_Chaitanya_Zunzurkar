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

int Bin2Dec(string binary)
{
    int dec = 0;
    reverse(binary.begin(), binary.end());
    for (int i = 0; i < binary.length(); i++)
    {
        if (binary[i] == '1')
        {
            dec += pow(2, i);
        }
        else
        {
            dec += 0;
        }
    }
    return dec;
}


// int main()
// {
//     int num , i;
//     cin >> num >> i;
//     string binary = dec2Bin(num);
//     int setIthBit = 0;
//     int clearIthBit = 0;

//     char Ith = binary[binary.length() - i];

//     binary[binary.length() - i] = '1';
//     setIthBit = Bin2Dec(binary);

//     binary[binary.length() - i] = '0';
//     clearIthBit = Bin2Dec(binary);

//     cout << Ith << " " << setIthBit << " " << clearIthBit << endl;
//     return 0;
// }

