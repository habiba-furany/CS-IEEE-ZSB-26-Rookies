#include <iostream>
#include <algorithm>
#include <vector>
using  namespace std;
int main(){
    
    int n;   cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++) 
    cin>>v[i];

    sort(v.begin(),v.end());
    int q; cin>>q;

    while(q--){
        int m;  cin>>m;
        int min=0;  int max=n; 
        while(min<max){
          int med= min +(max-min)/2;

            if(v[med]<=m)
            min=med+1;
            else{
                max=med;
            }

        }
        cout<<min<<endl;

    }






    return 0;
}