#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int hh, mm;
        cin >> hh >> mm;

        int total_min = hh * 60 + mm;
        int remaining_min = 1440 - total_min;

        cout << remaining_min << endl;
    }
    return 0;
}