#include <bits/stdc++.h>
using namespace std;

// bool isSet(int num , int i) {
//     if(((1 << i) & num) != 0) {
//         return true;
//     }
//     return false;
// }

bool isSet(int num, int i)
{
    if ((num >> i) & 1 == 0)
    {
        return false;
    }
    return true;
}

int setIthBit(int num, int i)
{
    int newVal = (num | (1 << i));
    return newVal;
}

int clearIthBit(int num, int i)
{
    int newVal = (num & (~(1 << i)));
    return newVal;
}

int main()
{
    int num, i;
    cin >> num >> i;

    // cout << isSet(num , i) << endl;
    // cout << setIthBit(num , i) << endl;
    // cout << clearIthBit(num , i) << endl;

    // int ith = -1;
    // int setVal = -1;
    // int clearVal = -1;
    // if (((1 << (i - 1)) & num) != 0)
    // {
    //     ith = 1;
    // }
    // else
    // {
    //     ith = 0;
    // }

    // setVal = (num | (1 << (i - 1)));
    // clearVal = ((~(1 << (i - 1))) & num);

    // cout << ith << " " << setVal << " " << clearVal << endl;

        i--;
        cout << (((1L << (i)) & num) != 0) << " ";
        cout << (num | (1L << (i))) << " ";
        cout << ((~(1L << (i))) & num);
    
    

    return 0;
}