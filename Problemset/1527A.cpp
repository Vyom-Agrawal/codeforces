#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;

    while(t--){
        int n; cin >> n;
        
        int x = 1;
        while(true){
            if(x*2 > n){
                cout << x-1 <<"\n";
                break;
            }
            x *= 2;
        }
    }
}