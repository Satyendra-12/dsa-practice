#include<bits/stdc++.h>
using namespace std;
int power(int a, int b,int n){
    int res=1;
    while(b!=0){
    if(b&1 == 1){
        res= (res*a%n)%n;
    }
    a=(a%n * a%n)%n;
    b=b>>1;
    }
    return res;
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans= power(a,b,1000000007);
    cout<<ans<<" ";
    return 0;
}