#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int num_of_digits;
        cin >> num_of_digits;

        vector<int> digits(num_of_digits);
        for(int i = 0; i < num_of_digits; i++){
            cin >> digits[i];
        }
        
        int minimum = digits[0];
        for(int i = 0; i < num_of_digits; i++){
            if(digits[i] < minimum){
                minimum = digits[i]; 
            }
        }

        int product = 1;
        bool increased = false;
        for(int i = 0; i < num_of_digits; i++){
            if(digits[i] == minimum && !increased){
                product *= minimum+1;
                increased = true;
            } else {
                product *= digits[i];
            }
        }
        

        cout << product << endl;

    }
    return 0;
}