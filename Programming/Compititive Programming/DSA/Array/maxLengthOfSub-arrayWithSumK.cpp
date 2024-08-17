// Method 1 :- 
// Time Complexcity :- O(n^2)
// space Complexcity :- O(1)

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
//     int n , k , len = 0 , sum;
//     cin >> n;
//     cin >> k;
//     vector<int> nums(n);
//     for(int i = 0; i < n; i++){
//         cin >> nums[i];
//     }
//     display(nums);

//     for(int i = 0; i < n; i++){
//         sum = 0;
//         for(int j = i; j < n; j++){
//             sum += nums[j];
//             if(sum == k){
//                 len = max(len , j-i+1);
//                 break;
//             }
//         }
//     }
//     cout << len << endl;
//     return 0;
// }


// Method 2 :- 
// Time Complexcity :- O(n logn) ordered map
// Time Complexcity :- O(n) unordered map (best case) if input are not very complicated
// Time Complexcity :- O(n^2) unordered map (worst case) if input are very complicated
// space Complexcity :- O(1)

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
//     int n , k , len = 0;
//     long long sum = 0;
//     long long rem = 0;
//     cin >> n;
//     cin >> k;
//     vector<int> nums(n);
//     map<long long , int> preSumArray;
//     for(int i = 0; i < n; i++){
//         cin >> nums[i];
//     }
//     display(nums);

//     for(int i = 0; i < n; i++){
//         sum += nums[i];
        
//     }
// }


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
    int n , k , len = 0;
    int left = 0 , right = 0;
    int maxi = 0;
    cin >> n;
    cin >> k;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    display(nums);
    long long sum = nums[0];
    while (right < n){
        while(sum > k && left <= right){
            sum -= nums[left];
            left++;
        }
        if(sum == k){
            maxi = max(maxi , right-left+1);
        }
        right++;
        sum += nums[right];
    }
    cout << maxi << endl;
    return 0;
}