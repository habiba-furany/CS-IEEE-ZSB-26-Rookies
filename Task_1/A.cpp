#include <iostream>
#include<vector>
using namespace std;

int main(){
    int x,n,q;
    cin>>x>>n;

    vector<int> w(n+1);

    for(int i=1;i<=n;i++){
        cin>>w[i];
    }

    cin>>q;
    vector<int> pieces;  

    while(q--){
        int p;
        cin>>p;

        bool found = false;

        for(int i = 0; i < pieces.size(); i++){
            if(pieces[i] == p){
                x -= w[p];
                pieces.erase(pieces.begin() + i);
                found = true;
                break;
            }
        }

        if(!found){
            x += w[p];
            pieces.push_back(p);
        }

        cout << x << endl;
    }

    return 0;
}
