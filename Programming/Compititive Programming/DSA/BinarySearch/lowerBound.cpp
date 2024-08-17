// time complexcity :- O(log n)
// space complexcity :- O(1)
// #include <bits/stdc++.h>
// using namespace std;

// void display(const vector<int>& arr){
//     for(int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << "\t";
//     }
//     cout << endl;
// } 
// int lowerBound(const vector<int>& arr , int low , int high ,int x) {
//     int lb = arr.size();
//     while (high >= low) {
//         int mid = (high + low)/2;
//         if(arr[mid] >= x) {
//             lb = mid;
//             high = mid - 1;
//         } 
//         else {
//             low = mid + 1;
//         }
//     }   

//     return lb;  
// }
// int main()
// {
//     int n , x;
//     cin >> n;
//     cin >> x;
//     vector<int> nums(n);
//     for(int i = 0;i < n; i++) {
//         cin >> nums[i];
//     }
//     display(nums);

//     cout << "Lower Bound :" << lowerBound(nums ,0 ,n-1 ,x);
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

int main()
{
    int n1 , n2;
    cin >> n1 >> n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    for(int i = 0;i < n1; i++) {
        cin >> arr1[i];
    }
    for(int i = 0;i < n2; i++) {
        cin >> arr2[i];
    }
    display(arr1);
    display(arr2);
    
    set<int> intersection;
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if(arr1[i] > arr2[j]) {
            j++;
        }
        else if (arr2[j] > arr1[i]) {
            i++;
        }
        else {
            intersection.insert(arr1[i]);
            i++;
            j++;
        }
    }  
    for(auto value : intersection) {
        cout << value << "\t";
    }
    return 0;
}
