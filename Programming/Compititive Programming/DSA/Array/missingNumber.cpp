// Brute Force Method :- 
// time complexcity :- O(n^2)
// space complexcity :- O(1)

// #include <bits/stdc++.h>
// using namespace std;

// void display(const vector<int>& arr){
//     for(int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << "\t";
//     }
//     cout << endl;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for (int i = 0; i < n; i++){
//        cin >> arr[i];
//     }
//     display(arr); 

//     int flag = 0;
//     int missingNumber;
//     for(int i = 0; i <= n; i++) {
//         flag = 0;
//         for(int j = 0; j < n; j++) {
//             if(i == arr[j]) {
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0) {
//             missingNumber = i;
//         }
//     }
//     cout << missingNumber;
//     return 0;
// }

// Better solution :- 
// time complexcity :- O(2n)
// space complexcity :- O(n)

// #include <bits/stdc++.h>
// using namespace std;

// void display(const vector<int>& arr){
//     for(int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << "\t";
//     }
//     cout << endl;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int missingNumber;
//     vector<int> arr(n);
//     vector<int> hsh(n , 0);
//     for (int i = 0; i < n; i++){
//        cin >> arr[i];
//        hsh[arr[i]]++;
//     }
//     display(arr); 
//     for (int i = 0; i < n; i++){
//         if(hsh[i] == 0) {
//             missingNumber = i;
//         }
//     }
//     cout << missingNumber;


//     return 0;
// }


// optimal solution :- 
// time complexcity :- O(n)
// space complexcity :- O(1)

// #include <bits/stdc++.h>
// using namespace std;

// void display(const vector<int>& arr){
//     for(int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << "\t";
//     }
//     cout << endl;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int missingNumber;
//     long long sum = 0 , arrSum = 0;
//     vector<int> arr(n);

//     for (int i = 0; i < n; i++){
//        cin >> arr[i];
//     }
//     display(arr); 

//     sum = (n*(n+1))/2;
//     for(int i = 0; i < n; i++) {
//         arrSum += arr[i];
//     }

//     missingNumber = sum - arrSum;
//     cout << missingNumber;

//     return 0;
// }

// optimal solution :- 
// time complexcity :- O(n)
// space complexcity :- O(1)

// #include <bits/stdc++.h>
// using namespace std;

// void display(const vector<int>& arr){
//     for(int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << "\t";
//     }
//     cout << endl;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int missingNumber;
//     long long sum = 0 , arrSum = 0;
//     vector<int> arr(n);

//     for (int i = 0; i < n; i++){
//        cin >> arr[i];
//     }
//     display(arr); 

//     int XOR1 = 0;
//     int XOR2 = 0;
//     for(int i = 0; i < n; i++) {
//         XOR1 = XOR1 ^ arr[i];
//         XOR2 = XOR2 ^ (i+1);
//     }
//     missingNumber =  XOR2 ^ XOR1;
//     cout << missingNumber;
    
//     return 0;
// }




