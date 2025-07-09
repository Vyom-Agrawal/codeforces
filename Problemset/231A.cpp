#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, counter = 0;
    cin >> n;

    for ( int i = 1; i <=n; i++){
        int a, b, c;
        cin >> a >> b >> c;

        if(a+b+c >=2){
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}