#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,q;
    cin>>n >>q;
    vector<long long>v(n);
    for(int i=0;i<n; i++){
        cin>>v[i];
    }
    vector<long long>pref(n);
    pref[0]=v[0];
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+v[i];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        l--; r--;
        cout<<pref[r]-(l>0? pref[l-1]: 0)<<endl;


    }



    return 0;
}