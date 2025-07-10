#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int num_of_tasks;
        cin >> num_of_tasks;

        string tasks;
        cin >> tasks;

        bool suspicious = false;
        set<char> finished;

        for(int i = 0; i < num_of_tasks - 1; i++){
            if(tasks[i] != tasks[i+1]){
                if(finished.count(tasks[i+1])){
                    suspicious = true;
                    break;
                }
                finished.insert(tasks[i]);
            }
        }

        if(suspicious){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}