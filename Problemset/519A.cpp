#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=0, b=0;
    for (int i = 0; i<8; i++){
        for (int j = 0; j<8; j++){
            char c; cin >> c;

            a += (c=='P');
            a += 3*(c=='N');
            a += 3*(c=='B');
            a += 5*(c=='R');
            a += 9*(c=='Q');

            b += (c=='p');
            b += 3*(c=='n');
            b += 3*(c=='b');
            b += 5*(c=='r');
            b += 9*(c=='q');
        }
    }

    if(a>b){
        cout << "White";
    }

    else if (a == b){
        cout << "Draw";
    }

    else{
        cout << "Black";
    }
}
