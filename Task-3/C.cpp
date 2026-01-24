#include <iostream>
#include <vector>
#include <algorithm>
using  namespace std;
int main(){

    long long n , m , k;
    cin>>n>>m>>k;
    vector<int> h (n);
    vector<int> b (m);
    for(int i=0;i<n;i++)  cin>>h[i];
    for(int i=0;i<m;i++)  cin>>b[i];
    sort(h.begin(),h.end());
    sort(b.begin(),b.end());

    bool compined = true;
    for(int i=0;i<k;i++){
        if(h[i]>b[m-k+i]){
            compined = false;
            break;
        }
    }
    cout<<(compined? "Yes":"No");
    return 0;
}