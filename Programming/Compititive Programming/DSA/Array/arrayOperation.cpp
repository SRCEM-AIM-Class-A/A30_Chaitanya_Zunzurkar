#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    int max = array[0];
    int min = array[0];
    int secondLargest = -1;
    int secondSmallest = INT_MAX;
    for (int i = 0; i < n; i++){
        if (max < array[i]){
            max = array[i];
        }
    }
    for (int i = 0; i < n; i++){
        if (min > array[i]){
            min = array[i];
        }
    }
    for (int i = 0; i < n; i++){
        if(array[i] > max){
            secondLargest = max;
            max = secondLargest;
        }
        else if(max > array[i] && array[i] > secondLargest){
            secondLargest = array[i];
        }
    }
    for (int i = 0; i < n; i++){
        if (array[i] < min){
           secondSmallest = min;
           min = array[i];
        }
        else if(array[i] > min && array[i] < secondSmallest){
            secondSmallest = array[i];
        }
    }
    
    cout << "largest element in the array : " << max << endl;
    cout << "smallest element in the array : " << min << endl;
    cout << "Second largest element in the array : " << secondLargest << endl;
    cout << "Second Smallest element in the array : " << secondSmallest << endl;
    return 0;
}