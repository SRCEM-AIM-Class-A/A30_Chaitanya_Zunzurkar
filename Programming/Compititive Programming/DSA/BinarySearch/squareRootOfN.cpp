#include <bits/stdc++.h>
using namespace std;

// long long int power(int mid, int n)
// {
//     long long int result = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         result *= mid;
//     }

//     return result;
// }

int NthRoot(int n, int m)
{
    int low = 1;
    int high = m;
    long long int ans = 1;

    while (high >= low)
    {
        long long int mid = low + (high - low) / 2;

        long long int nthPowerOfMid = pow(mid, n);
        cout << nthPowerOfMid << endl;
        if (nthPowerOfMid <= m)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    long long int n , m;
    cin >> n >> m;
    cout << NthRoot(n , m);
    return 0;
}