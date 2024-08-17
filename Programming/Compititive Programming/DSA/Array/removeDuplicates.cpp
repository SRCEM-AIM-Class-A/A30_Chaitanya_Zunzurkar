// method 1 :- 
// time complexcity :- O(n logn)
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

    set<int> st;
    for(int i = 0; i < n; i++){
        st.insert(nums[i]); // O(n logn)
    }

    for(auto &value : st){
        cout << value << "\t";
    }
    return 0;
}

// method 2 :- 
// time complexcity :- O(n)
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

//     return 0;
// }