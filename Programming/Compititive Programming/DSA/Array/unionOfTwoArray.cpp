// Method 1
// time complexcity :- O((n1 + n2)log n)
// space complexcity :- O(n1+n2)

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> display(vector<int>& arr , int n){
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << "\t";
//     }
//     return arr;
// }

// set<int> displayOfUnionArray(set<int>& result , int n){
//     for(auto it = result.begin(); it != result.end(); ++it){
//         cout << *it << "\t";
//     }
//     return result;
// }

// int main()
// {
//     int size1 , size2;
//     cin >> size1 >> size2;
//     vector<int> arr1(size1);
//     vector<int> arr2(size2);

//     for(int i =0;i< size1;i++){
//         cin >> arr1[i];
//     }
//     for(int i =0;i< size2;i++){
//         cin >> arr2[i];
//     }

//     cout << "Original Array 2:" << endl;
//     display(arr1 , size1);
//     cout << endl;
//     cout << "Original Array 2:" << endl;
//     display(arr2 , size2);

//     set<int> unionOfTwoArray;
//     for(int i =0;i < size1; i++){
//         unionOfTwoArray.insert(arr1[i]);
//     }
//     for(int i = 0; i< size2; i++){
//         unionOfTwoArray.insert(arr2[i]);
//     }
    
//     cout << endl;

//     cout << "union of two Array 2:" << endl;
//     displayOfUnionArray(unionOfTwoArray , unionOfTwoArray.size());
//     return 0;
// }


// method 2
// time complexcity :- O(n1 + n2)
// space complexcity :- O(n1 + n2)

#include <bits/stdc++.h>
using namespace std;

void display(const vector<int>& arr , int n){
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int size1 , size2;
    cin >> size1 >> size2;

    vector<int> arr1(size1);
    vector<int> arr2(size2);
    vector<int> unionOfTwoArray;

    for (int i = 0; i < size1; i++){
       cin >> arr1[i];
    }

    for (int i = 0; i < size2; i++){
       cin >> arr2[i];
    }

    cout << "Array 1 : " << endl;
    display(arr1 , size1);
    cout << "Array 2 : " << endl;
    display(arr2 , size2);
    
    int i = 0 , j = 0;
    while(i < size1 && j < size2){
        if(arr1[i] < arr2[j]){
            if(unionOfTwoArray.size() == 0 || unionOfTwoArray.back() != arr1[i]){
                unionOfTwoArray.push_back(arr1[i]);
            }
            i++;
        }
        else if(arr1[i] > arr2[j]){
            if(unionOfTwoArray.size() == 0 || unionOfTwoArray.back() != arr2[j]){
                unionOfTwoArray.push_back(arr2[j]);
            }
            j++;
        }
        else {
            if(unionOfTwoArray.size() == 0 || unionOfTwoArray.back() != arr1[i]){
                unionOfTwoArray.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    while(i < size1){
        if(unionOfTwoArray.size() == 0 || unionOfTwoArray.back() != arr1[i]){
            unionOfTwoArray.push_back(arr1[i]);
        }
        i++;
    }
    while(j < size2){
        if(unionOfTwoArray.size() == 0 || unionOfTwoArray.back() != arr2[j]){
            unionOfTwoArray.push_back(arr2[j]);
        }
        j++;
    }

    cout << "union of two array : " << endl;
    display(unionOfTwoArray , unionOfTwoArray.size()); 
}