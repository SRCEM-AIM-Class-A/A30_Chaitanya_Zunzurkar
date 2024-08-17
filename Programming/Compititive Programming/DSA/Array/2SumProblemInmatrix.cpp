#include <bits/stdc++.h>
using namespace std;

void display(const vector<vector<int>> &arr) {
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size(); j++) {
            cout <<  arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

vector<vector<int>> TwoSumProblem(const vector<vector<int>> &arr , int rowNo , int target) {
    int low = 0;
    int high = arr[rowNo].size()-1;
    long long sum;

    vector<vector<int>> result;
    while(high > low) {
        sum = arr[rowNo][low] + arr[rowNo][high];
        vector<int> temp;
        if(sum == target) {
            temp.push_back(low);
            temp.push_back(high);
            result.push_back(temp);
            break;
        }
        else if(sum > target) {
            high--;
        }
        else {
            low++;
        }
    }
    return result;
}

int main()
{
    int rows , cols , rowNo , target;
    cin >> rows >> cols;

    vector<vector<int>> arr(rows , vector<int>(cols));
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
             cin >> arr[i][j];
        }
    }
    display(arr);
    
    cin >> target;
    cin >> rowNo;
    
    vector<vector<int>> result = TwoSumProblem(arr , rowNo, target);
    for(const auto& pair : result) {
        cout << "[" << pair[0] << ", " << pair[1] << "] ";
    }
    cout << endl;
    return 0;
}