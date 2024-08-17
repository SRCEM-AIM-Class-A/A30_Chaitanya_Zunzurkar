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
    vector<int> square(size);
    for(int i = 0;i < size; i++){
        cin >> nums[i];
    }

    cout << "Sorted Array : " << endl;
    display(nums);

    for(int i = 0; i < size; i++){
        square[i] = nums[i] * nums[i];
    }

    sort(square.begin() , square.end());
    cout << "square of sorted array" << endl;
    display(square);
    return 0;
}