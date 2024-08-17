// method 1 
// usr any of the sting algorithm 
// if merge sort is used
// time complexcity :- O(n lgn)
// space complexcity :- O(n)

// method 2
// time complexcity :- O(2n)
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
//     int count0 = 0,count1 = 0,count2 = 0;
//     for(int i = 0; i < n; i++){
//         if(nums[i] == 0){
//             count0++;
//         }
//         else if(nums[i] == 1){
//             count1++;
//         }
//         else {
//             count2++;
//         }
//     }
//     for(int i = 0; i < count1; i++){
//         nums[i] = 0;
//     }
//     for(int i = count1; i < count0 + count1; i++){
//         nums[i] = 1;
//     }
//     for(int i = count0 + count1; i < n; i++){
//         nums[i] = 2;
//     }
//     display(nums);
//     return 0;
// }

// method 3 :- (deutch's national flag algorithm)
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
    
    int low = 0 , mid = 0 , high = n-1;
    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low] , nums[mid]);
            mid++;
            low++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else {
            swap(nums[high] , nums[mid]);
            high--;
        }
    }
    display(nums);
    return 0;
}