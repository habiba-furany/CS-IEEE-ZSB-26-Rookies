#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<long long > pref(n);
        partial_sum(v.begin(),v.end(),pref.begin());
        while(q--){
        long long l,r,k;
        cin>>l>>r>>k;
        l--; r--;
       int s = pref[r]-(l>0?pref[l-1]:0);
        cout<<((pref[n-1]-s+(r-l+1)*k)%2 ==0?"NO":"YES" )<<endl;

        }

    }

    return 0;
}