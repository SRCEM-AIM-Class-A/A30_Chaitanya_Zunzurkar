// method 1 :- 
// time complexcity :- O(n^2)
// space complexcity :- O(1)

// #include <bits/stdc++.h>
// using namespace std;

// void display(const vector<int>& arr){
//     for(int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << "\t";
//     }
//     cout << endl;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> nums(n);
//     for(int i = 0; i < n; i++){
//         cin >> nums[i];
//     }
//     display(nums);
//     int sum = 0 , maxi = INT_MIN;
//     for(int i = 0; i < n; i++){
//         sum = 0;
//         for(int j = i; j < n; j++){
//             sum += nums[j];
//             maxi = max(maxi , sum);
//         }
//     }
//     cout << maxi;
//     return 0;
// }

// method 2 :- 
// time complexcity :- O(n)
// space complexcity :- O(1)

#include <bits/stdc++.h>
using namespace std;

void display(const vector<int>& arr){
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    display(nums);

    int sum = 0;
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        sum += nums[i];
        maxi = max(sum , maxi);
        if(sum < 0){
            sum = 0;
        }
    }
    cout << maxi;
    return 0;
}