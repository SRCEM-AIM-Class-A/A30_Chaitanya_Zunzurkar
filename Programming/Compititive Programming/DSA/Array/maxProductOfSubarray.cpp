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
    int preSum = 1 , suffSum = 1 , maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        if(preSum == 0) {
            preSum = 1;
        }
        else if(suffSum == 0) {
            suffSum = 1;
        }
        preSum = preSum * nums[i];
        suffSum = suffSum * nums[n-i-1];
        maxi = max(maxi , max(preSum , suffSum));
    }
    cout << maxi << endl;
    return 0;
}