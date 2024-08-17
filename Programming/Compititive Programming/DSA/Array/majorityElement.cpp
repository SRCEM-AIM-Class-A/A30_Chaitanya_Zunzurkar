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

    int count = 0 , cnt = 0;
    int majorityEle = nums[0];
    for(int i = 0; i < nums.size(); i++){
        if(count == 0){
            majorityEle = nums[i];
        }

        if(nums[i] == majorityEle){
            count++;
        }
        else {
            count--;
        }
    }
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == majorityEle){
            cnt++;
        }
    }
    if(cnt > nums.size()/2){
        return majorityEle;
    }
    
    return 0;
}