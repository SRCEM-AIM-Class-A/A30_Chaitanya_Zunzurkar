// Brute Force solution :- 
// time complexcity :- O(2n)
// space complexcity :- O(n)

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

//     vector<int> temp;
//     for(int i = 0; i < nums.size(); i++) {
//         if(nums[i] != 0){
//             temp.push_back(nums[i]);
//         }
//     }
//     for(int i = 0; i < temp.size(); i++) {
//         nums[i] = temp[i];
//     }
//     for(int i = temp.size(); i < n; i++) {
//         nums[i] = 0;
//     }
//     display(nums);
   
    
//     return 0;
// }

// Optimal Solution 
// time complexcity :- O()
// space complexcity :- O()

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
    int n , firstIndofZero;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    for(int i = 0; i < n; i++){
        if(nums[i] == 0) {
            firstIndofZero = i;
            break;
        }
    }
    
    display(nums);
    int j = firstIndofZero ;
    int i = j + 1;
    while(i < n) {
        if(nums[i] != 0){
            swap(nums[i] , nums[j]);
            j++;
        }
        i++; 
    }
    display(nums);
}
