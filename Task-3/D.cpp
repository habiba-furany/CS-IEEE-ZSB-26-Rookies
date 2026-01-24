#include <iostream>
#include <vector>
#include <algorithm>
using  namespace std;
int main(){

    long long n ,t;
    cin>>n>>t;
    vector<int> s (n);
    for(long long i=0;i<n;i++)  cin>>s[i];

    sort(s.begin(),s.end());
    
    long long min= 0 ; long long max=t*s[0];  
    while(min<max){
        long long med = min+(max-min)/2;  long long tsum=0;
        for(long long i=0;i<n;i++){
            tsum +=(med/s[i]);
        }
        if(tsum<t) {
            min=med+1;
            if(tsum>t)   break;
        }
        else{
        max=med;
        }

    }
    cout<<min;
    return 0;
}