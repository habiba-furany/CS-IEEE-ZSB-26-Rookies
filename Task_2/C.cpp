#include <iostream>
#include <vector>
using namespace std;

int main() {
 
    
    int n, q;
    cin >> n >> q;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<int> prefix1(n+1, 0), prefix2(n+1, 0), prefix3(n+1, 0);
    
    for(int i = 1; i <= n; i++) {
        prefix1[i] = prefix1[i-1] + (v[i-1] == 1);
        prefix2[i] = prefix2[i-1] + (v[i-1] == 2);
        prefix3[i] = prefix3[i-1] + (v[i-1] == 3);
    }
    
    while(q--) {
        int a, b;
        cin >> a >> b;
        
        cout << prefix1[b] - prefix1[a-1] << " "
             << prefix2[b] - prefix2[a-1] << " "
             << prefix3[b] - prefix3[a-1] << endl;
    }
    
    return 0;
}