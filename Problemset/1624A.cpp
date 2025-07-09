#include<bits/stdc++.h>
using namespace std;

int main(){
    int no_of_tests;
    cin >> no_of_tests;

    while(no_of_tests--){
        int no_of_elements;
        cin >> no_of_elements;

        vector<int> elements(no_of_elements);
        for(int i = 0; i<no_of_elements; i++){
            cin >> elements[i];
        }
        int maximum = *max_element(elements.begin(), elements.end());
        int minimum = *min_element(elements.begin(), elements.end());

        int counter = 0;
        counter = maximum - minimum;

        cout << counter << endl;
    }

    return 0;
}