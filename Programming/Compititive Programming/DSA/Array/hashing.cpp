#include <bits/stdc++.h>
using namespace std;
const long long N = 10e7 + 10;
long long hsh[N];
int main()
{
    int t , n;
    cin >> t;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n;i++){
        cin >> arr[i];
        hsh[arr[i]]++;
    }
    while(t--){
        int x;
        cin >> x;
        cout << hsh[x] << endl;
    }
    return 0;
}