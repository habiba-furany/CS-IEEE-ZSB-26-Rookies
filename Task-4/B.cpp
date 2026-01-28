#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];
    int l=0,  r=n-1 ,alice=0  , bob=0  , aliceTime=0 , bobTime=0  ;
    while(l<=r){
        if(aliceTime<=bobTime){
            aliceTime+=arr[l];
            alice++;
            l++;
        }else{
            bobTime+=arr[r];
            bob++;
            r--;
        }
    }
  cout<<alice<<" "<<bob;

    return 0;
}