#include <bits/stdc++.h>
using namespace std;

void display(const vector<int>& arr){
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int BinarySearch(const vector<int> &nums , int low , int high , int k) {
    while(high >= low) {
        int mid = (high+low)/2;
        if(nums[mid] == k) {
            return mid;
        }
        else if(nums[mid] > k) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int n , target;
    cin >> n;
    cin >> target;
    vector<int> nums(n);
    for(int i = 0;i < n; i++) {
        cin >> nums[i];
    }
    display(nums);
    int low = 0 , high = n-1;
    cout << BinarySearch(nums , 0 , n-1 , target) << endl;
    return 0;
}