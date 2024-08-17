// method 1
// time complexcity :- O(n)
// space complexcity :- O(1)

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     int j = -1;
//     cin >> n;
//     vector<int> arr(n);

//     for(int i =0;i< n;i++){
//         cin >> arr[i];
//     }

//     cout << "Original Array :" << endl;
//     for(int i =0;i< n;i++){
//         cout << arr[i] << "\t";
//     }
//     cout << endl;

//     for(int i = 0; i < n;i++){
//         if(arr[i] == 0){
//             j = i;
//             break;
//         }
//     }
    
//     if(j == -1){
//         cout << "No zero found !!" << endl;
//         return false;
//     }

//     for(int i = j; i < n; i++){
//         if(arr[i] != 0){
//             swap(arr[i] , arr[j]);
//             j++;
//         }
//     }

//     cout << "Array after putting all zeros in the end :" << endl;
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << "\t";
//     }
//     return 0;
// }

// method 2
// time complexcity :- O(n)
// space complexcity :- O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , numberOfZeros = 0;
    cin >> n;
    vector<int> arr(n);
    for(int i =0;i< n;i++){
        cin >> arr[i];
        if(arr[i] == 0){
            numberOfZeros++;
        }
    }
    int numberOfDigit = n - numberOfZeros;
    cout << "Original Array :" << endl;
    for(int i =0;i< n;i++){
        cout << arr[i] << "\t";
    }
    cout << endl;

   vector<int> nums(numberOfDigit);
   vector<int> zeros(numberOfZeros);
    
    int j = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
           nums[j] = arr[i];
           j++;
        }
    }

    int k = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
           zeros[k] = arr[i];
           k++;
        }
    }

    for(int i = 0;i < numberOfDigit; i++){
        arr[i] = nums[i];
    }
    for(int i = numberOfDigit;i < n; i++){
        arr[i] = zeros[i - numberOfDigit];
    }

    cout << "Array after putting all zeros in the end :" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
    return 0;
}