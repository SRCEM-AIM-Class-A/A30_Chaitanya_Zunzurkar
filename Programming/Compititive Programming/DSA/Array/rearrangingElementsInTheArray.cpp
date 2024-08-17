// method 1 :- 
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
//     vector<int> nums(n);
//     for(int i = 0; i < n; i++){
//         cin >> nums[i];
//     }
//     display(nums);
//     vector<int> negEle , posEle;
//     for(int i = 0; i < n; i++){
//         if(nums[i] < 0){
//             negEle.push_back(nums[i]);
//         }
//         else {
//             posEle.push_back(nums[i]);
//         }
//     }

//     for(int i = 0; i < n/2; i++){
//         nums[2*i] = posEle[i];
//         nums[2*i -1] = negEle[i];
//     }
//     display(nums);
    
//     return 0;
// }

// method 1 :- 
// time complexcity :- O(n)
// space complexcity :- O(n)

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
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    display(nums);
    vector<int> negEle , posEle;
    for(int i = 0; i < n; i++){
        if(nums[i] < 0){
            negEle.push_back(nums[i]);
        }
        else {
            posEle.push_back(nums[i]);
        }
    }

    display(negEle);
    display(posEle);
    int posIndex = 0 , negIndex = 1;
    int i = 0 , k = 0 , l = 0;
    while(i < nums.size()){
        cout << negIndex << posIndex << endl;
        if(nums[i] < 0){
            nums[negIndex] = negEle[k];
            negIndex += 2;
            k++;
        }
        else {
           nums[posIndex] = posEle[l];
           posIndex += 2; 
           l++;
        }
        i++;
    }
    display(nums);
}