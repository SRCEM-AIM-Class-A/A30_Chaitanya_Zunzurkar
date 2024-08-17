// time complexcity :- O(log n)
// space complexcity :- O(1)
#include <bits/stdc++.h>
using namespace std;

void display(const vector<int>& arr){
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
} 
int upperBound(const vector<int>& arr , int low , int high ,int x) {
    int ub = arr.size();
    while(high >= low) {
        int mid = (high + low)/2;
        if(arr[mid] > x) {
            ub = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    } 
    return ub;
}
int main()
{
    int n , x;
    cin >> n;
    cin >> x;
    vector<int> nums(n);
    for(int i = 0;i < n; i++) {
        cin >> nums[i];
    }
    display(nums);

    cout << "Upper Bound : " << upperBound(nums ,0 ,n-1 ,x);
    return 0;
}