#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    
    int max = 200000;
    vector<int> freq(max + 2, 0);      
    vector<int> adm(max + 2, 0);
    vector<int> pref(max + 2, 0);
    
    for(int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        freq[l]++;          
        freq[r + 1]--;      
    }
    
    int current = 0;
    for(int i = 1; i <= max; i++) {
        current += freq[i];
        
        if(current >= k) {
            adm[i] = 1;
        }
    }
    
    for(int i = 1; i <= max; i++) {
        pref[i] = pref[i-1] + adm[i];
    }
    
    while(q--) {
        int a, b;
        cin >> a >> b;
        cout << pref[b] - pref[a-1] << endl;
    }
    
    return 0;
}