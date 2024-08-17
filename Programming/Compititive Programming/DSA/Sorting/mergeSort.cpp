// method 1 :- 
// time complexcity :- O(n logn)
// space complexcity :- O(n)


#include <bits/stdc++.h>
using namespace std;

void display(const vector<int>& arr){
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void merge(vector<int> &nums , int low , int mid , int high) {
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    while(left <= mid && right <= high) {
        if(nums[left] <= nums[right]) {
            temp.push_back(nums[left]);
            left++;
        } 
        else {
            temp.push_back(nums[right]);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(nums[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(nums[right]);
        right++;
    }
    
    for(int i = low; i <= high; i++) {
        nums[i] = temp[i-low];
    }
}

void mergeSort(vector<int> &arr , int low , int high) {
    if(low == high) {
        return ;
    }
    int mid = (low + high)/2;
    mergeSort(arr , low , mid);
    mergeSort(arr , mid+1, high);
    merge(arr , low , mid , high);
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < nums.size(); i++){
        cin >> nums[i];
    }
    display(nums);
    mergeSort(nums , 0 , n-1);

    for(int i = 0; i < n; i++){
        cout << nums[i] << "\t";
    }
    return 0;
}