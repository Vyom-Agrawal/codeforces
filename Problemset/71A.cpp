#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string word;
    cin >> n;

    for (int i = 1; i <=n; i++) {
        if (n >= 1 && n <= 100) {
            cin >> word;
        }

        if (word.length()> 10){
        cout << word[0] << (word.length() - 2) << word[word.length() - 1] << endl;
    } else {
        cout << word << endl;
    }

    }

    
    return 0;
}