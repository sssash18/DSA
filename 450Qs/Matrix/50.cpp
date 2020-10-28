#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> mat[i][j];
        }
    }
    int big = INT_MIN;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            for(int k = i+1;k<n;k++){
                for(int l=j+1;l<n;l++){
                    big = max(big,(mat[k][l] - mat[i][j]));
                }
            }
        }
    }
    //int maxValue = INT_MIN; 
  
    // Consider all possible pairs mat[a][b] and 
    // mat[d][e] 
    // for (int a = 0; a < n - 1; a++){
    //     for (int b = 0; b < n - 1; b++) {
    //         for (int d = a + 1; d < n; d++) {
    //             for (int e = b + 1; e < n; e++) {
    //                 big = max(big,mat[d][e] - mat[a][b]);
    //     }
    //     }
    // }
    // }
     cout << big << "\n";
	return 0;
}