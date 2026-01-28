#include <iostream>
#include <vector>
using namespace std;

int main(){
    int q; 
    cin >> q;
    while(q--){
        int n; 
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) 
            cin >> arr[i];

        int alice = 0, bob = 0, l = 0, r = n - 1, max=0;
        
        while(l <= r){
            if(alice <= bob){
                alice += arr[l];
                l++;
            } else {
                bob += arr[r];
                r--;
            }
            
            if(alice == bob){
                max= l +(n-r-1);
            }
        }
        
        cout<<max<<endl;
    }

    return 0;
}