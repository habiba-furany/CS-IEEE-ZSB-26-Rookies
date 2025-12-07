#include <iostream>
using namespace std;
int main(){

    string s;
    cin>>s;
    long long ctr=1;
    long long max=1;
    for(long long i=0 ; (long long)i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            ctr++;
        }else{
            max=(max<ctr ?ctr : max);
            ctr=1;
        }
    }
    max=(max<ctr ?ctr : max);
    cout<<max;
    return 0;
}