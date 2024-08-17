// method 1
// time complexcity :- O(n1 + n2)
// space complexcity :- O(1) 

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
    vector<int> intersectionOfTwoArray;

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

    int i = 0, j = 0;
    while (i < size1 && j < size2){
        if(arr1[i] > arr2[j]){
            j++;
        }
        else if(arr2[j] > arr1[i]){
            i++;
        }
        else {
            intersectionOfTwoArray.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    
    cout << "intersection of two array : " << endl;
    display(intersectionOfTwoArray , intersectionOfTwoArray.size()); 

    return 0;
}

// method 2 
// time complexcity :- 
// space complexcity :- 

