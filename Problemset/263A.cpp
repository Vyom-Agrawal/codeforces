#include<bits/stdc++.h>
using namespace std;

int main(){
    int counter = 0;
    int matrix[6][6];
    int row, col;

    for(int i = 1; i <=5; i++){
        for(int j = 1; j <=5; j++){
           cin >> matrix[i][j];

           if(matrix[i][j] == 1){
                row = i;
                col = j;
           }

           int row_swap = abs(row - 3);
           int col_swap = abs(col - 3);

           counter = row_swap + col_swap;
        }
    }

    cout << counter << endl;

    return 0;
}