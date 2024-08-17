
// apporach 2
// time complexcity :- O(n)
// space  complexcity :- O(d) i.e the extra space because we are using temp array of size d

#include <bits/stdc++.h>
using namespace std;

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
    int temp[d];

    for(int i = 0;i<d;i++){
        temp[i] = arr[i];
    }
    
    for(int i = d; i < n ; i++){
        arr[d-i] = arr[i];
    }

    for(int i = n-d; i < n;i++){
        arr[i] = temp[i - (n-d)];
    }

    cout << "Left rotated array after shifting d position :" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
    return 0;
}

// apporach 2
// time complexcity :- O(n)
// space  complexcity :- O(1) i.e the extra space

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
//     reverse(arr , arr+d);
//     reverse(arr+d , arr+n);
//     reverse(arr , arr+n);

//     cout << "Left rotated array after shifting d position :" << endl;
//     for(int i =0;i< n;i++){
//         cout << arr[i] << "\t";
//     }

//     return 0;
// }