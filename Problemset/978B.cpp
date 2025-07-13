#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    char file[n];
    for(int i = 0; i<n; i++){
        cin >> file[i]; 
    }

    int removals = 0;
    int consecutive_x = 0;
    for(int i = 0; i<n; i++){
        if(file[i] == 'x'){
            consecutive_x++;
        }else{
            if(consecutive_x>=3){
                removals += consecutive_x - 2;
            }
            consecutive_x=0;
        }
    }

    if(consecutive_x>=3){
        removals += consecutive_x -2;
    }

    cout << removals << "\n";
}