#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<long long> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<long long> vs = v;
    sort(vs.begin(), vs.end());

    vector<long long> pref1(n+1, 0);
    for(int i = 1; i <= n; i++) {
        pref1[i] = pref1[i-1] + v[i-1];
    }
  
    vector<long long> pref2(n+1, 0);
    for(int i = 1; i <= n; i++) {
        pref2[i] = pref2[i-1] + vs[i-1];
    }
    
    int q;
    cin >> q;
    
    while(q--) {
        int t, l, r;
        cin >> t >> l >> r;
        
        if(t == 1) {
            
            cout << pref1[r] - pref1[l-1] << endl;
        } else {
            cout << pref2[r] - pref2[l-1] << endl;
        }
    }
    
    return 0;
}