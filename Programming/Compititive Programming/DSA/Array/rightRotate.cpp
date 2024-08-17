// method 1
// time complexcity :- O(n)
// space complexcity :- O(n)

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n , d;
//     cin >> n;
//     int arr[n];

//     for(int i =0;i< n;i++){
//         cin >> arr[i];
//     }

//     cout << "Original Array :" << endl;
//     for(int i =0;i< n;i++){
//         cout << arr[i] << "\t";
//     }
//     cout << endl;

//     cin >> d;
//     int temp[d];

//     int j = d;
//     for(int i = 0; i < d; i++){
//         temp[i] = arr[n-j];
//         j--;
//     }

//     int k = d;
//     for(int i = n-1; i >= d; i--){
//         arr[i] = arr[n-k-1];
//         k++;
//     }

//     for(int i = 0;i < d;i++){
//         arr[i] = temp[i];
//     }

//     cout << "Right rotated array after shifting d position :" << endl;
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << "\t";
//     }
//     return 0;
// }   


// method 2
// time complexcity :- O(n)
// space complexcity :- O(1)

#include <bits/stdc++.h>
using namespace std;

void reverseAnArray(int a[] , int start , int end){
    while (start <= end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int n , d;
    cin >> n;
    int arr[n];

    for(int i =0;i< n;i++){
        cin >> arr[i];
    }

    cout << "Original Array :" << endl;
    for(int i =0;i< n;i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
    cin >> d;
    reverseAnArray(arr , 0 , n-d-1);
    reverseAnArray(arr , n-d , n-1);
    reverseAnArray(arr , 0 , n-1);

    cout << "Right rotated array after shifting d position :" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
    return 0;
}