#include <bits/stdc++.h>
using namespace std;
int isSorted(vector<int> &a , int n){
    for(int i = 0;i < n; i++){
        if(a[i] > a[i+1]){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i =0 ;i < n; i++){
        cin >> arr[i];
    }
    
    if(isSorted(arr , n) == false){
        cout << "not sorted" << endl;
    }
    else {
        cout << "sorted" << endl;
    }
    
    return 0;
}