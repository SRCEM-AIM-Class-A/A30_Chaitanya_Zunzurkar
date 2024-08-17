#include <bits/stdc++.h>
using namespace std;
const long long N = 10e7 + 10;
long long prefixSum[N];
int main()
{
    int t , n;
    cin >> t;
    cin >> n;
    int a[n];
    for(int i = 1; i <= n ; i++){
        cin >> a[i]; 
        prefixSum[i] = prefixSum[i-1] + a[i];
    }
    while(t--){
        int left , right;
        cin >> left >> right;
        cout << "sum from index " << left << " to " << right <<  " : "<<  prefixSum[right] - prefixSum[left-1] << endl;
    }

    
    return 0;
}