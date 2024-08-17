#include <bits/stdc++.h>
using namespace std;
const long long N = 10e3 + 10;
int prefix2DSum[N][N];

int main()
{
    int t , rows , cols;
    cin >> t;
    cin >> rows >> cols;
    int a[rows][cols];
    for(int i = 1;i <= rows; i++){
        for (int j = 1; j <= cols ; j++){
            cin >> a[i][j];
            prefix2DSum[i][j] =  a[i][j] + prefix2DSum[i-1][j] + prefix2DSum[i][j-1]  - prefix2DSum[i-1][j-1];
        }
    }
    while(t--){
        int c,d;
        cin >> c >> d;
        cout << prefix2DSum[c][d] << endl;
    }
    return 0;
}