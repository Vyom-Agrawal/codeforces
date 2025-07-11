#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
    int no_of_candy;
    cin >> no_of_candy;
    vector<int> candys(no_of_candy);
    for (int i = 0; i<no_of_candy; i++){
        cin >> candys[i];
    }
    
    int sum = 0, count1 = 0, count2 = 0;
    for(int i = 0; i<no_of_candy; i++){
        sum += candys[i];

        if(candys[i] == 1){
            count1++;
        }

        else if(candys[i] == 2){
            count2++;
        }
    }
    sum = count1 + 2 * count2;
    if(sum % 2 == 1){
        cout << "NO\n";    
    }
    else if(count1 % 2 == 1){
        cout << "NO\n";
    }
    else if(count1 == 0 && count2 % 2 == 1){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }
}
    return 0;
}