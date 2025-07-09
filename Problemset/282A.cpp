#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int result = 0;

    if(n>=1 && n<=150){
        string exp;
        
        for(int i = 1; i<=n; i++){
            cin >> exp;

            if(exp == "X++" || exp == "++X"){
                result++;
            }

            if(exp == "X--" || exp == "--X"){
                result--;
            }
        }
    }

    cout << result << endl;

    return 0;
}