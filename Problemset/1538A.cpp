#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while(t--){
    int n; cin >> n;

    int stones[n];
    for(int i = 0; i<n; i++){
      cin >> stones[i];
    }
    int maximum=stones[0], minimum=stones[0];
    int maxloc=0, minloc=0;
    for(int i = 0; i<n; i++){
      if(stones[i] > maximum){
        maximum = stones[i];
        maxloc = i;
      }
      if(stones[i] < minimum){
        minimum = stones[i];
        minloc = i;
      }
    }

    int fromLeft = 0, fromRight = 0, fromBothEnds = 0;
    fromLeft = max(maxloc+1, minloc+1);
    fromRight = max(n-maxloc, n-minloc);
    fromBothEnds = min((maxloc+1) + (n-minloc), (minloc+1) + (n-maxloc));

    cout << min(min(fromLeft, fromRight), fromBothEnds) << "\n";
  }  
}