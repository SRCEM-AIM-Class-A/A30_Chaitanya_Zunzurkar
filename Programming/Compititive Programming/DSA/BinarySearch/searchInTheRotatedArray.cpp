// #include <bits/stdc++.h>
// using namespace std;

// int search(const vector<int> &arr , int target) {
//     for(int i = 0; i < arr.size(); i++) {
//         if(arr[i] == target) {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> arr = {4,5,6,7,0,1,2};
//     cout << search(arr , 0) << endl;
//     cout << search(arr , 3) << endl;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

bool search(const vector<int> &arr , int target) {
    int low = 0;
    int high = arr.size()-1;

    while (high >= low) {
        int mid = low + (high - low)/2;

        if(arr[mid] == target) {
            return true;
        }

        if(arr[mid] == arr[low] &&  arr[high] == arr[mid]) {
            low = low + 1;
            high = high - 1;
            continue;
        }

        if (arr[low] <= arr[mid]) {
            if(arr[low] <= target && target <= arr[mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        else {
            if(arr[mid] <= target && target <= arr[high]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }        
    }
    
    return false;
}
int main()
{
    vector<int> arr = {2,5,6,0,0,1,2};
    cout << search(arr , 0) << endl;
    cout << search(arr , 3) << endl;

    vector<int> arr1 = {1,0,1,1,1};
    cout << search(arr1 , 0) << endl;
    return 0;
}