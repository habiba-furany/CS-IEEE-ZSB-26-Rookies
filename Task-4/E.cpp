#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,x; cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int sum=0 , l=0 , r=0 ,ctr=0;
    while (r<n) {
    sum += arr[r];

    while (sum > x) {
    sum -= arr[l];
    l++;
    }

    if (sum == x) {
    ctr++;
    }
    
    r++;
}
    cout<<ctr;


    return 0;
}