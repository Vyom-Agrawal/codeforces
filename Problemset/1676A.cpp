#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string ticket;

    for(int i = 1; i<=n; i++){
        cin >> ticket;

        if (int(ticket[0]) + int(ticket[1]) + int(ticket[2]) == int(ticket[3]) + int(ticket[4]) + int(ticket[5])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }

    return 0;
}