#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long gcd(long long a, long long b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<long long> pref(n+5);
    vector<long long>suff(n+5);
    for (int i=1; i<=n;i++) {
        pref[i]=gcd(pref[i-1], v[i-1]);
    }

    for (int i = n; i >= 1; i--) {
        suff[i]=gcd(suff[i+1], v[i-1]);
    }

    long long ans = 0;

    for (int i = 1; i <= n; i++) {
        long long g=gcd(pref[i-1], suff[i+1]);
        ans = max(ans, g);
    }

    cout <<ans<<endl;

    return 0;
}