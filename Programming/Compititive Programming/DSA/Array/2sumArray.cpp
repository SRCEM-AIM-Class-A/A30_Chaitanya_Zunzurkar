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
//     int n , target;
//     cin >> n;
//     cin >> target;
//     vector<int> nums(n);
//     for(int i = 0; i < n; i++){
//         cin >> nums[i];
//     }
//     display(nums);
//     int sum;
//     for(int i = 0; i < n; i++){
//         for(int j = i; j < n; j++){
//             sum = nums[i] + nums[j];
//             if(sum == target){
//                 cout << "yes" << endl;
//                 break;
//             }
//         }
//     }
//     cout << "NO" << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void display(const vector<int>& arr){
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
void twoSum(vector<int> &vec , int target){
    map<int , int> mp;
    for(int i = 0; i < vec.size(); i++){
        int more = target - vec[i];
        if(mp.find(more) != mp.end()){
            cout << more << " "<<  vec[i];
        }
        mp[vec[i]] = i;
    }
}

int main()
{
    int n , target;
    cin >> n;
    cin >> target;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    display(nums);
    twoSum(nums , target);
}
