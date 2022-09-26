#include<bits/stdc++.h>
using namespace std;
int sum(int a){
    if(a==1)
    return 1;

    return a + sum(a-1);
}
int main(){
    int a;
    cin>>a;
    int ans = sum(a);
    cout<<ans<<" "<<endl;
    return 0;
}