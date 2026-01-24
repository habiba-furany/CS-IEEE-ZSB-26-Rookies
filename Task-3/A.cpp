#include <iostream>
using  namespace std;
int main(){
long long n; int k;
cin>>n>>k;

long long max=n; long long min = 0; long long med=0;

while(min<max){
   med=min+(max-min)/2;
   long long v=med;  long long sum=0;
   
   while(v>0){
    sum+=v;
    if(sum>= n) break;
    v/=k;
   }
    
   if(sum>=n){
    max=med;
   }else{
    min=med+1;
   }

}
   cout<<min;

    return 0;
}