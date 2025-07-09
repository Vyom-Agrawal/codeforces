#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    int count = 0;
    cin >> m >>n;

    if(m>=1 && m<=16 && n>=1 && n<=16){

        if((m*n)%2==0){
            count = m*n/2;
        }

        else{
            count = (m*n/2);
        }
    }

    cout << count << endl;

    return 0;   
}