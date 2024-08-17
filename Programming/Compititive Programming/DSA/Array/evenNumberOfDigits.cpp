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
    int size;
    cin >> size;

    vector<int> nums(size);
    for(int i = 0;i < size; i++){
        cin >> nums[i];
    }
    display(nums);
    int count;
    int evenCount = 0;
    for(int i = 0; i < size; i++){
        count = 0;
        while(nums[i] > 0){
            int remainder = nums[i] % 10;
            count++;
            nums[i] = nums[i] / 10;
        }
        if(count % 2 == 0){
            evenCount++;
        }
    }

    cout << evenCount << endl;
    return 0;
}