// problem 1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string list[n];
    for(int i = 0; i< n ;i++){
        cin >> list[i];
    }

    map<string,int> mp;
    for(int i = 0;i < n; i++){
        if(mp.find(list[i]) != mp.end()){
            mp[list[i]] = mp[list[i]] + 1;
        }
        else {
            mp[list[i]] = 1;
        }
    }
    for(auto &value : mp){
        if(value.second == 2){
            cout << value.first << endl;
        }
    }
    
    return 0;
}
