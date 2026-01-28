#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long n,t;  cin>>n>>t;
    vector<int> arr(n);
    for(int i=0;i<n;i++)  cin>>arr[i];

    int l=0 , sum=0 ,ctr=0;
    
    for(int r=0;r<n;r++){
       sum+=arr[r];
            
        while(sum>t){
            sum-=arr[l];
            l++;
        }
        ctr=max(ctr,r-l+1);
    }
     
    cout<<ctr;

    return 0;
}