// method 1:-
// time complecxity :- O(n^2)
// space complexcity :- O(n^2)

// #include <bits/stdc++.h>
// using namespace std;

// void display2DArray(const vector<vector<int>> &matrix) {
//     for(int i = 0; i < matrix.size(); i++) {
//         for(int  j = 0; j < matrix.size(); j++) {
//             cout << matrix[i][j] << "\t";
//         }
//         cout << endl;
//     }
//     cout << endl;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<vector<int>> matrix(n , vector<int>(n));
//     vector<vector<int>> temp(n , vector<int>(n));
//     for(int i = 0; i < n; i++) {
//         for(int  j = 0; j < n; j++) {
//             cin >> matrix[i][j];    
//         }
//     }

//     display2DArray(matrix);
//     for(int i = 0; i < n; i++) {
//         for(int  j = 0; j < n; j++) {
//             temp[j][n-i-1] = matrix[i][j];
//         }
//     }

//     display2DArray(temp);
//     return 0;
// }

// method 2:-
// time complecxity :- O(n^2)
// space complexcity :- O(1)

#include <bits/stdc++.h>
using namespace std;

void display2DArray(const vector<vector<int>> &matrix) {
    for(int i = 0; i < matrix.size(); i++) {
        for(int  j = 0; j < matrix.size(); j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> matrix(n , vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int  j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    display2DArray(matrix);
    cout << "transpose matrix" << endl;
    for(int i = 0; i < n; i++) {
        for(int  j = 0; j < i; j++) {
            swap(matrix[i][j] , matrix[j][i]);
        }
    }
    display2DArray(matrix);
    cout << "reversing the transpose matrix" << endl;
    for(int i = 0; i < n; i++) {
        reverse(matrix[i].begin() , matrix[i].end());
    }
    display2DArray(matrix);

    return 0;
}