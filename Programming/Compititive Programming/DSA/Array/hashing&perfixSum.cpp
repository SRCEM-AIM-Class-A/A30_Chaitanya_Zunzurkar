// hashing technique to calculate the factorial of the numbers

// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e7 + 10;
// long long fact[N];

// int main()
// {
//     fact[0]= fact[1] = 1;
//     for(int i = 2; i < N; i++){
//         fact[i] = fact[i-1] * i;
//     }
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         cout << fact[n] << endl;
//     }
//     return 0;
// }

// perfix sum technique to calculate the largest element in the array

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//         int x , y;
//         cin >> x >> y;
//         if(x+y >= 2000){
//             cout << "YES" << endl;
//         }
//         else {
//             cout << "NO" << endl;
//         }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n , l ,r,happiness = 0,sadness = 0,maximum = 0;
        cin >> n >> l >> r;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int j = 0; j < n; j++){
            if(arr[j] >= l && arr[j] <= r){
                ++happiness;
            }
            else {
                ++sadness;
            }
        }

        if(happiness > 0){
             maximum = happiness - sadness;
        }
        else{
             maximum = happiness;
        }
        int minimum = sadness - 2*sadness;
        cout << maximum << " "<< minimum << endl;
    }
    return 0;
}