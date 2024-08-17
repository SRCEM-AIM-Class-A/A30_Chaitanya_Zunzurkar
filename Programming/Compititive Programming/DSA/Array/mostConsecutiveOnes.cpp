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
    int size;
    cin >> size;

    vector<int> arr(size);
    for(int i = 0;i < size; i++){
        cin >> arr[i];
    }
    display(arr);

    int maxConsecutive = 0;
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == 1){
            count++;
            maxConsecutive = max(maxConsecutive , count);
        }
        else {
            count = 0;
        }
    }
    
    cout << maxConsecutive << endl;
    return 0;
}