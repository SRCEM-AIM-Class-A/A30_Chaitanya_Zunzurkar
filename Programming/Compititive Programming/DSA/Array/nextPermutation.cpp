// optimal solution :- 
// time complexcity :- O(3n)
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

//     int ind = -1;
//     for(int i = n-1; i >= 0 ; i--){
//         if(nums[i] < nums[i+1]){
//             ind = i;
//             break;
//         }
//     }
    
//     if(ind == -1){
//         reverse(nums.begin() , nums.end());
//         display(nums);
//         return 0;
//     }

//     for(int i = n-1; i > ind; i--){
//         if(nums[ind] < nums[i]){
//             swap(nums[i] , nums[ind]);
//             break;
//         }
//     }
//     reverse(nums.begin() + ind + 1 , nums.end());
//     display(nums);
//     return 0;
// }

// better solution 
// using STL function (next_permutation)
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
//     next_permutation(nums.begin() , nums.end());
//     display(nums);
//     return 0;
// }