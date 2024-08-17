// time complexcity :- O( n * log (max(arr)) )

// #include <bits/stdc++.h>
// using namespace std;

// int maxBananas(vector<int> arr) {
//     int max = arr[0];
//     for(int i = 0; i < arr.size(); i++) {
//         if(max < arr[i]) {
//             max = arr[i];
//         }
//     }
//     return max;
// }

// int requiredTime(int bananasPerHr , const vector<int>& arr) {
//     int n = arr.size();
//     int total = 0;
     
//     for(int i = 0; i < n; i++) {
//        total += ceil((double) arr[i] / (double)bananasPerHr);
//     }

//     return total;
// }

// int minEatingSpeed(vector<int> &piles, int h) {
//     int low = 1;
//     int  high = maxBananas(piles);
//     int ans = high;

//     while (high >= low) {
//         int mid = low + (high - low)/2;
//         int time = requiredTime(mid , piles);

//         if(time <= h) {
//             ans = mid;
//             high = mid - 1;
//         }
//         else {
//             low = mid + 1;
//         }
//         }
//     return ans;
// }

// int main()
// {
//    vector<int> arr = {3,6,7,11};
//     cout << minEatingSpeed(arr , 8);    
//     return 0;
// }

// time complexcity :- O(n * max(arr))
#include <bits/stdc++.h>
using namespace std;

int maxBananas(vector<int> arr) {
    int max = arr[0];
    for(int i = 0; i < arr.size(); i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int requiredTime(int bananasPerHr , const vector<int>& arr) {
    int n = arr.size();
    int total = 0;
     
    for(int i = 0; i < n; i++) {
       total += ceil((double) arr[i] / (double)bananasPerHr);
    }

    return total;
}

int minEatingSpeed(vector<int> &piles, int h) {
    int n = maxBananas(piles);
    int ans = n;
    for(int i = 1; i < n; i++) {
        int time = requiredTime(i , piles);
        if(time <= h) {
            ans = i;
            break;
        }
    }

    return ans;
}

int main()
{
   vector<int> arr = {3,6,7,11};
    cout << minEatingSpeed(arr , 8);    
    return 0;
}
