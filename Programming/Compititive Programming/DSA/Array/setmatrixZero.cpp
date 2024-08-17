// method 1:-
// time complecxity :- O(2(n^2)) + O(n+m)
// space complexcity :- O(1)

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
// void markRow(vector<vector<int>> &matrix , int j) {
//     for(int i = 0; i < matrix.size(); i++) {
//         if(matrix[i][j] != 0) {       
//             matrix[i][j] = -1;
//         } 
//     }
// }

// void markCol(vector<vector<int>> &matrix , int i) {
//     for(int j = 0; j < matrix.size(); j++) {
//         if(matrix[i][j] != 0) {       
//             matrix[i][j] = -1;
//         }  
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<vector<int>> matrix(n , vector<int>(n));
//     for(int i = 0; i < n; i++) {
//         for(int  j = 0; j < n; j++) {
//             cin >> matrix[i][j];
//         }
//     }
//     display2DArray(matrix);
//     for(int i = 0; i < n; i++) {
//         for(int  j = 0; j < n; j++) {
//             if(matrix[i][j] == 0) {
//                 markCol(matrix , i);
//                 markRow(matrix , j);
//             }  
//         }
//     }
//     display2DArray(matrix); 
//     for(int i = 0; i < n; i++) {
//         for(int  j = 0; j < n; j++) {
//             if(matrix[i][j] == -1) {
//                 matrix[i][j] = 0;
//             }  
//         }
//     }
//     display2DArray(matrix); 
    
//     return 0;
// }
